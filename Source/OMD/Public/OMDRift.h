#pragma once
#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "Engine/EngineTypes.h"
#include "Engine/EngineTypes.h"
#include "OMDMapDisplayInterface.h"
#include "OMDSoftProtoPtr.h"
#include "RiftLightningAttributes.h"
#include "OMDRift.generated.h"

class AOMDPlayerCharacter;
class UCapsuleComponent;
class UOMDMapDisplayComponent;
class UParticleSystemComponent;
class UPrimitiveComponent;
class USphereComponent;

UCLASS(Blueprintable)
class OMD_API AOMDRift : public AActor, public IOMDMapDisplayInterface {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<AActor*> OverlappingActorsCapsule;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<AActor*> OverlappingActorsSphere;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<AActor*> OverlappingActorsStorm;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOMDSoftProtoPtr RiftRushStatusEffect;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOMDSoftProtoPtr RiftHealStatusEffect;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<AOMDPlayerCharacter*, int32> ActiveRiftHealStatusEffects;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<FString, FRiftLightningAttributes> RiftLightningAttributesList;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, ReplicatedUsing=OnRep_RiftLightning, meta=(AllowPrivateAccess=true))
    bool bEnableRiftLightning;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UCapsuleComponent* RiftEnterArea;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    USphereComponent* PlayerHealArea;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    USphereComponent* RiftRushArea;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    USphereComponent* RingOfStormsArea;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UParticleSystemComponent* RiftFX;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UOMDMapDisplayComponent* MapDisplayComponent;
    
public:
    AOMDRift(const FObjectInitializer& ObjectInitializer);

    virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;

protected:
    UFUNCTION(BlueprintCallable)
    void UpdateOverlapsStorm();
    
    UFUNCTION(BlueprintCallable)
    void UpdateOverlapsSphere();
    
    UFUNCTION(BlueprintCallable)
    void UpdateOverlapsCapsule();
    
    UFUNCTION(BlueprintCallable)
    void RiftRushEndOverlap(UPrimitiveComponent* OverlappedComponent, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex);
    
    UFUNCTION(BlueprintCallable)
    void RiftRushBeginOverlap(UPrimitiveComponent* OverlappedComp, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult);
    
    UFUNCTION(BlueprintCallable)
    void RiftEnterBeginOverlap(UPrimitiveComponent* OverlappedComp, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult);
    
    UFUNCTION(BlueprintCallable)
    void PlayerHealEndOverlap(UPrimitiveComponent* OverlappedComponent, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex);
    
    UFUNCTION(BlueprintCallable)
    void PlayerHealBeginOverlap(UPrimitiveComponent* OverlappedComp, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult);
    
    UFUNCTION(BlueprintCallable)
    void OnRep_RiftLightning();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnBeginOverlapStorm(AActor* Actor);
    
    UFUNCTION(BlueprintCallable)
    void OnActorEnterSphere(AActor* OtherActor);
    
    UFUNCTION(BlueprintCallable)
    void OnActorEnterCapsule(AActor* OtherActor);
    
    UFUNCTION(BlueprintCallable)
    void OnActorEndSphere(AActor* OtherActor);
    
    UFUNCTION(BlueprintCallable)
    void OnActorEndCapsule(AActor* OtherActor);
    
    UFUNCTION(BlueprintCallable, NetMulticast, Reliable)
    void NetMulticast_EmptyRiftStart();
    
    UFUNCTION(BlueprintCallable, NetMulticast, Reliable)
    void NetMulticast_EmptyRiftFinish();
    
public:
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetRiftLightningDamage();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetRiftLightningCooldown();
    
protected:
    UFUNCTION()
    TArray<FOverlapResult> GetOverlappingActorsSphere();
    
    UFUNCTION()
    TArray<FOverlapResult> GetOverlappingActorsCapsule();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void BP_StartRiftLightning();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void BP_EndRiftLightning();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void BP_EmptyRiftStart();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void BP_EmptyRiftFinish();
    

    // Fix for true pure virtual functions not being implemented
};

