#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=Actor -FallbackName=Actor
#include "OMDMapDisplayInterface.h"
#include "OMDSoftProtoPtr.h"
#include "RiftLightningAttributes.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=HitResult -FallbackName=HitResult
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=OverlapResult -FallbackName=OverlapResult
#include "OMDRift.generated.h"

class AOMDPlayerCharacter;
class UCapsuleComponent;
class USphereComponent;
class UParticleSystemComponent;
class UOMDMapDisplayComponent;
class UPrimitiveComponent;

UCLASS()
class OMD_API AOMDRift : public AActor, public IOMDMapDisplayInterface {
    GENERATED_BODY()
public:
protected:
    UPROPERTY()
    TArray<AActor*> OverlappingActorsCapsule;
    
    UPROPERTY()
    TArray<AActor*> OverlappingActorsSphere;
    
    UPROPERTY()
    TArray<AActor*> OverlappingActorsStorm;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    FOMDSoftProtoPtr RiftRushStatusEffect;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    FOMDSoftProtoPtr RiftHealStatusEffect;
    
    UPROPERTY()
    TMap<AOMDPlayerCharacter*, int32> ActiveRiftHealStatusEffects;
    
    UPROPERTY(BlueprintReadOnly)
    TMap<FString, FRiftLightningAttributes> RiftLightningAttributesList;
    
    UPROPERTY(ReplicatedUsing=OnRep_RiftLightning)
    bool bEnableRiftLightning;
    
private:
    UPROPERTY(BlueprintReadOnly, Export, VisibleAnywhere, meta=(AllowPrivateAccess=true))
    UCapsuleComponent* RiftEnterArea;
    
    UPROPERTY(BlueprintReadOnly, Export, VisibleAnywhere, meta=(AllowPrivateAccess=true))
    USphereComponent* PlayerHealArea;
    
    UPROPERTY(BlueprintReadOnly, Export, VisibleAnywhere, meta=(AllowPrivateAccess=true))
    USphereComponent* RiftRushArea;
    
    UPROPERTY(BlueprintReadOnly, Export, VisibleAnywhere, meta=(AllowPrivateAccess=true))
    USphereComponent* RingOfStormsArea;
    
    UPROPERTY(BlueprintReadOnly, Export, VisibleAnywhere, meta=(AllowPrivateAccess=true))
    UParticleSystemComponent* RiftFX;
    
protected:
    UPROPERTY(BlueprintReadOnly, Export, VisibleAnywhere)
    UOMDMapDisplayComponent* MapDisplayComponent;
    
public:
    AOMDRift();
    virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;
    
protected:
    UFUNCTION()
    void UpdateOverlapsStorm();
    
    UFUNCTION()
    void UpdateOverlapsSphere();
    
    UFUNCTION()
    void UpdateOverlapsCapsule();
    
    UFUNCTION()
    void RiftRushEndOverlap(UPrimitiveComponent* OverlappedComponent, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex);
    
    UFUNCTION()
    void RiftRushBeginOverlap(UPrimitiveComponent* OverlappedComp, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult);
    
    UFUNCTION()
    void RiftEnterBeginOverlap(UPrimitiveComponent* OverlappedComp, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult);
    
    UFUNCTION()
    void PlayerHealEndOverlap(UPrimitiveComponent* OverlappedComponent, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex);
    
    UFUNCTION()
    void PlayerHealBeginOverlap(UPrimitiveComponent* OverlappedComp, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult);
    
    UFUNCTION()
    void OnRep_RiftLightning();
    
    UFUNCTION(BlueprintImplementableEvent)
    void OnBeginOverlapStorm(AActor* Actor);
    
    UFUNCTION()
    void OnActorEnterSphere(AActor* OtherActor);
    
    UFUNCTION()
    void OnActorEnterCapsule(AActor* OtherActor);
    
    UFUNCTION()
    void OnActorEndSphere(AActor* OtherActor);
    
    UFUNCTION()
    void OnActorEndCapsule(AActor* OtherActor);
    
    UFUNCTION(NetMulticast, Reliable)
    void NetMulticast_EmptyRiftStart();
    
    UFUNCTION(NetMulticast, Reliable)
    void NetMulticast_EmptyRiftFinish();
    
public:
    UFUNCTION(BlueprintPure)
    float GetRiftLightningDamage();
    
    UFUNCTION(BlueprintPure)
    float GetRiftLightningCooldown();
    
protected:
    UFUNCTION()
    TArray<FOverlapResult> GetOverlappingActorsSphere();
    
    UFUNCTION()
    TArray<FOverlapResult> GetOverlappingActorsCapsule();
    
    UFUNCTION(BlueprintImplementableEvent)
    void BP_StartRiftLightning();
    
    UFUNCTION(BlueprintImplementableEvent)
    void BP_EndRiftLightning();
    
    UFUNCTION(BlueprintImplementableEvent)
    void BP_EmptyRiftStart();
    
    UFUNCTION(BlueprintImplementableEvent)
    void BP_EmptyRiftFinish();
    
    
    // Fix for true pure virtual functions not being implemented
};

