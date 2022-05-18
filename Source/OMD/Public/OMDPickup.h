#pragma once
#include "CoreMinimal.h"
#include "Components/SphereComponent.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=Actor -FallbackName=Actor
#include "OMDMapDisplayInterface.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=HitResult -FallbackName=HitResult
#include "OMDPickup.generated.h"

class UPrimitiveComponent;
class USphereComponent;
class AOMDPlayerCharacter;
class UOMDMapDisplayComponent;

UCLASS()
class OMD_API AOMDPickup : public AActor, public IOMDMapDisplayInterface {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditDefaultsOnly)
    bool bPickupOnFullHealth;
    
    UPROPERTY(BlueprintReadWrite, EditDefaultsOnly)
    bool bPickupOnFullMana;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Export)
    USphereComponent* PhysicsSphere;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    bool bAutoPickupOnVictory;
    
protected:
    UPROPERTY(BlueprintReadOnly, Export, VisibleAnywhere)
    UOMDMapDisplayComponent* MapDisplayComponent;
    
public:
    AOMDPickup();
    UFUNCTION(Reliable, Server, WithValidation)
    void Server_DoPickup(AOMDPlayerCharacter* Player);
    
    UFUNCTION(BlueprintImplementableEvent)
    bool Server_CanPickup(AOMDPlayerCharacter* Player);
    
protected:
    UFUNCTION()
    void OnSphereBeginOverlap(UPrimitiveComponent* OverlappedComp, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult);
    
public:
    UFUNCTION(BlueprintImplementableEvent)
    void OnPickupServer(AOMDPlayerCharacter* Player);
    
    UFUNCTION(BlueprintImplementableEvent)
    void OnPickupMulticast(AOMDPlayerCharacter* Player);
    
    UFUNCTION(NetMulticast, Reliable, WithValidation)
    void Multicast_OnPickup(AOMDPlayerCharacter* Player);
    
    
    // Fix for true pure virtual functions not being implemented
};

