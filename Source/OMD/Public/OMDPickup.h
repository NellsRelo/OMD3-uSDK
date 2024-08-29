#pragma once
#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "Engine/EngineTypes.h"
#include "OMDMapDisplayInterface.h"
#include "OMDPickup.generated.h"

class AOMDPlayerCharacter;
class UOMDMapDisplayComponent;
class UPrimitiveComponent;
class USphereComponent;

UCLASS(Blueprintable)
class OMD_API AOMDPickup : public AActor, public IOMDMapDisplayInterface {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bPickupOnFullHealth;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bPickupOnFullMana;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    USphereComponent* PhysicsSphere;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bAutoPickupOnVictory;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UOMDMapDisplayComponent* MapDisplayComponent;
    
public:
    AOMDPickup(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable, Reliable, Server, WithValidation)
    void Server_DoPickup(AOMDPlayerCharacter* Player);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    bool Server_CanPickup(AOMDPlayerCharacter* Player);
    
protected:
    UFUNCTION(BlueprintCallable)
    void OnSphereBeginOverlap(UPrimitiveComponent* OverlappedComp, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult);
    
public:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnPickupServer(AOMDPlayerCharacter* Player);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnPickupMulticast(AOMDPlayerCharacter* Player);
    
    UFUNCTION(BlueprintCallable, NetMulticast, Reliable, WithValidation)
    void Multicast_OnPickup(AOMDPlayerCharacter* Player);
    

    // Fix for true pure virtual functions not being implemented
};

