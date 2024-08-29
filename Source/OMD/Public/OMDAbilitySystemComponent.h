#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "UObject/NoExportTypes.h"
#include "UObject/NoExportTypes.h"
#include "UObject/NoExportTypes.h"
#include "Components/ActorComponent.h"
#include "Engine/EngineTypes.h"
#include "Engine/EngineTypes.h"
#include "Engine/EngineTypes.h"
#include "Particles/WorldPSCPool.h"
#include "GameFramework/MovementComponent.h"
#include "Engine/EngineTypes.h"
#include "Engine/NetSerialization.h"
#include "BeamPointStructWrapper.h"
#include "ECharacterWeightClass.h"
#include "EChromaticaElements.h"
#include "EPlayerAttachmentEventType.h"
#include "EPlayerAttachmentSelectionMethod.h"
#include "EStatusEffectCategory.h"
#include "OMDAbilitySpec.h"
#include "OMDSoftProtoPtr.h"
#include "Templates/SubclassOf.h"
#include "OMDAbilitySystemComponent.generated.h"

class AActor;
class AOMDAIFlyerCharacter;
class AOMDAbilityActor;
class AOMDCharacter;
class AOMDPlayerCharacter;
class AOMDProjectile;
class AOMDTrap;
class AOMDTrapGrid;
class APawn;
class UAnimMontage;
class UMatineeCameraShake;
class UOMDAbility;
class UOMDAbilityParameters;
class UOMDTrapGridBoxComponent;
class UObject;
class UParticleSystem;
class USceneComponent;
class USkeletalMeshComponent;
class USoundAttenuation;
class USoundBase;
class USoundConcurrency;

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class OMD_API UOMDAbilitySystemComponent : public UActorComponent {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FOMDAbilitySpec> Abilities;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float ReActivationDelay;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    uint8 bAutoReload: 1;
    
public:
    UOMDAbilitySystemComponent(const FObjectInitializer& ObjectInitializer);

protected:
    UFUNCTION(BlueprintCallable, Reliable, Server, WithValidation)
    void Server_TriggerPlayerAttachmentEvent(AOMDPlayerCharacter* Player, EPlayerAttachmentEventType playerAttachmentEventType, EPlayerAttachmentSelectionMethod playerAttachmentSelectionMethod, FName AttachmentName, int32 attachmentIndex);
    
    UFUNCTION(BlueprintCallable, Server, Unreliable, WithValidation)
    void Server_StopMontage(USkeletalMeshComponent* SkeletalMesh, FGuid montageGuid);
    
    UFUNCTION(BlueprintCallable, Server, Unreliable, WithValidation)
    void Server_SpawnSoundAttached(USoundBase* Sound, USceneComponent* AttachToComponent, const FString& AttachPointName, const FVector_NetQuantize& Location, FRotator Rotation, EAttachLocation::Type LocationType, bool bStopWhenAttachedToDestroyed, float VolumeMultiplier, float PitchMultiplier, float StartTime, USoundAttenuation* AttenuationSettings, USoundConcurrency* ConcurrencySettings, bool bAutoDestroy, FGuid audioId);
    
    UFUNCTION(BlueprintCallable, Server, Unreliable, WithValidation)
    void Server_SpawnSoundAtLocation(USoundBase* Sound, const FVector_NetQuantize& Location, const FRotator& Rotation, float VolumeMultiplier, float PitchMultiplier, float StartTime, USoundAttenuation* AttenuationSettings, USoundConcurrency* ConcurrencySettings, bool bAutoDestroy);
    
    UFUNCTION(BlueprintCallable, Server, Unreliable, WithValidation)
    void Server_SpawnEmitterAttached(UParticleSystem* emitterTemplate, USceneComponent* AttachToComponent, const FString& AttachPointName, const FVector_NetQuantize& Location, const FRotator& Rotation, const FVector_NetQuantize& Scale, EAttachLocation::Type LocationType, bool bAutoDestroy, EPSCPoolMethod PoolingMethod, bool bUseAbsoluteRotation);
    
    UFUNCTION(BlueprintCallable, Reliable, Server, WithValidation)
    void Server_SpawnEmitterAtLocation(UParticleSystem* emitterTemplate, const FVector_NetQuantize& Location, const FRotator& Rotation, const FVector_NetQuantize& Scale, bool bAutoDestroy, EPSCPoolMethod PoolingMethod);
    
    UFUNCTION(BlueprintCallable, Reliable, Server, WithValidation)
    void Server_SpawnBeamEmitterAtLocation(UParticleSystem* emitterTemplate, const FVector_NetQuantize& Location, const FRotator& Rotation, const FVector_NetQuantize& Scale, bool bAutoDestroy, EPSCPoolMethod PoolingMethod, const FBeamPointStructWrapper& sourcePoints, const FBeamPointStructWrapper& targetPoints);
    
    UFUNCTION(BlueprintCallable, Reliable, Server, WithValidation)
    void Server_SpawnActorAttached(TSubclassOf<AOMDAbilityActor> spawnClass, const FTransform& SpawnTransform, ESpawnActorCollisionHandlingMethod collisionHandlingOverride, float LifeSpan, USceneComponent* ParentComponent, FName SocketName, EAttachmentRule locRule, EAttachmentRule rotRule, EAttachmentRule ScaleRule, bool weldBodies);
    
    UFUNCTION(BlueprintCallable, Reliable, Server, WithValidation)
    void Server_SpawnActor(TSubclassOf<AOMDAbilityActor> spawnClass, const FTransform& SpawnTransform, ESpawnActorCollisionHandlingMethod collisionHandlingOverride, float LifeSpan);
    
    UFUNCTION(BlueprintCallable, Reliable, Server, WithValidation)
    void Server_SetTrapEnabledState(AOMDTrap* targetTrap, AActor* Causer, float Duration);
    
    UFUNCTION(BlueprintCallable, NetMulticast, Reliable, WithValidation)
    void Server_SetMovementComponentPlanarMovement(AOMDProjectile* projectile, bool constrainToPlane, FVector PlaneConstraintOrigin, FVector PlaneConstraintNormal, EPlaneConstraintAxisSetting PlaneConstraintAxisSetting);
    
    UFUNCTION(BlueprintCallable, Reliable, Server, WithValidation)
    void Server_SetCharacterGravity(AOMDCharacter* Character, float GravityScale, bool enableMeshGravity);
    
public:
    UFUNCTION(BlueprintCallable, Server, Unreliable, WithValidation)
    void Server_ResetProjectile(TSubclassOf<AOMDProjectile> projectile, AActor* Owner, APawn* Instigator, FVector Origin, FVector Velocity, float lifetime, int32 pierceCount, AActor* homingTarget, float HomingAccelerationMagnitude, bool useVisualSpawnRotation, FRotator visualSpawnRotation, bool constrainToPlane, FVector PlaneConstraintOrigin, FVector PlaneConstraintNormal, EPlaneConstraintAxisSetting PlaneConstraintAxisSetting, int32 replicatedExplosionID);
    
protected:
    UFUNCTION(BlueprintCallable, Reliable, Server, WithValidation)
    void Server_RemoveStatusEffect(FGuid request, AActor* Target, int32 ID, EStatusEffectCategory Category);
    
    UFUNCTION(BlueprintCallable, Server, Unreliable, WithValidation)
    void Server_PlayMontage(USkeletalMeshComponent* SkeletalMesh, UAnimMontage* Montage, float Rate, float StartPosition, FName startSection, bool Queue, FGuid montageGuid);
    
    UFUNCTION(BlueprintCallable, Reliable, Server, WithValidation)
    void Server_PlaceTrap(AOMDTrapGrid* trapGrid, UOMDTrapGridBoxComponent* trapGridBox, FTransform SpawnTransform, FOMDSoftProtoPtr trapProtoPtr, const TArray<AOMDTrapGrid*>& seamedTrapGrids);
    
    UFUNCTION(BlueprintCallable, Server, Unreliable, WithValidation)
    void Server_LaunchProjectile(TSubclassOf<AOMDProjectile> projectile, FVector Origin, FVector Velocity, float lifetime, int32 pierceCount, AActor* homingTarget, float HomingAccelerationMagnitude, bool useVisualSpawnRotation, FRotator visualSpawnRotation, bool constrainToPlane, FVector PlaneConstraintOrigin, FVector PlaneConstraintNormal, EPlaneConstraintAxisSetting PlaneConstraintAxisSetting, int32 replicatedExplosionID);
    
    UFUNCTION(BlueprintCallable, Reliable, Server, WithValidation)
    void Server_LaunchCharacter(AOMDCharacter* Character, FOMDSoftProtoPtr Source, AActor* Causer, FVector Direction, float strength, ECharacterWeightClass maxAffectedWeightClass, bool useRagdoll, FVector meshImpulseLocation, FName BoneName);
    
    UFUNCTION(BlueprintCallable, Server, Unreliable, WithValidation)
    void Server_FadeOutSound(FGuid audioId);
    
    UFUNCTION(BlueprintCallable, Reliable, Server, WithValidation)
    void Server_ExplodeProjectile(int32 replicatedExplosionID);
    
    UFUNCTION(BlueprintCallable, Server, Unreliable, WithValidation)
    void Server_DetachFromActor(AActor* actorToDetach, EDetachmentRule locRule, EDetachmentRule rotRule, EDetachmentRule ScaleRule);
    
    UFUNCTION(BlueprintCallable, Reliable, Server, WithValidation)
    void Server_ChangeElement(EChromaticaElements element, AOMDAIFlyerCharacter* Target);
    
    UFUNCTION(BlueprintCallable, Reliable, Server, WithValidation)
    void Server_AttachToComponent(AActor* actorToAttach, USceneComponent* ParentComponent, FName SocketName, EAttachmentRule locRule, EAttachmentRule rotRule, EAttachmentRule ScaleRule, bool weldBodies);
    
    UFUNCTION(BlueprintCallable, Reliable, Server, WithValidation)
    void Server_ApplyStatusEffect(FGuid request, AActor* Target, FOMDSoftProtoPtr StatusEffect, float overrideDuration);
    
public:
    UFUNCTION(BlueprintCallable)
    void ResetAbility(FOMDSoftProtoPtr OMDAbilityProto);
    
    UFUNCTION(BlueprintCallable)
    void ReloadAbility(FOMDSoftProtoPtr OMDAbilityProto);
    
protected:
    UFUNCTION(BlueprintCallable, NetMulticast, Reliable)
    void NetMulticast_TriggerPlayerAttachmentEvent(AOMDPlayerCharacter* Player, EPlayerAttachmentEventType playerAttachmentEventType, EPlayerAttachmentSelectionMethod playerAttachmentSelectionMethod, FName AttachmentName, int32 attachmentIndex);
    
    UFUNCTION(BlueprintCallable, NetMulticast, Unreliable)
    void NetMulticast_StopMontage(USkeletalMeshComponent* SkeletalMesh, FGuid montageGuid);
    
    UFUNCTION(BlueprintCallable, NetMulticast, Unreliable)
    void NetMulticast_SpawnSoundAttached(USoundBase* Sound, USceneComponent* AttachToComponent, const FString& AttachPointName, const FVector_NetQuantize& Location, FRotator Rotation, EAttachLocation::Type LocationType, bool bStopWhenAttachedToDestroyed, float VolumeMultiplier, float PitchMultiplier, float StartTime, USoundAttenuation* AttenuationSettings, USoundConcurrency* ConcurrencySettings, bool bAutoDestroy, FGuid audioId);
    
    UFUNCTION(BlueprintCallable, NetMulticast, Unreliable)
    void NetMulticast_SpawnSoundAtLocation(USoundBase* Sound, const FVector_NetQuantize& Location, const FRotator& Rotation, float VolumeMultiplier, float PitchMultiplier, float StartTime, USoundAttenuation* AttenuationSettings, USoundConcurrency* ConcurrencySettings, bool bAutoDestroy);
    
    UFUNCTION(BlueprintCallable, NetMulticast, Unreliable)
    void NetMulticast_SpawnEmitterAttached(UParticleSystem* emitterTemplate, USceneComponent* AttachToComponent, const FString& AttachPointName, const FVector_NetQuantize& Location, const FRotator& Rotation, const FVector_NetQuantize& Scale, EAttachLocation::Type LocationType, bool bAutoDestroy, EPSCPoolMethod PoolingMethod, bool bUseAbsoluteRotation);
    
    UFUNCTION(BlueprintCallable, NetMulticast, Reliable)
    void NetMulticast_SpawnEmitterAtLocation(UParticleSystem* emitterTemplate, const FVector_NetQuantize& Location, const FRotator& Rotation, const FVector_NetQuantize& Scale, bool bAutoDestroy, EPSCPoolMethod PoolingMethod);
    
    UFUNCTION(BlueprintCallable, NetMulticast, Reliable)
    void NetMulticast_SpawnBeamEmitterAtLocation(UParticleSystem* emitterTemplate, const FVector_NetQuantize& Location, const FRotator& Rotation, const FVector_NetQuantize& Scale, bool bAutoDestroy, EPSCPoolMethod PoolingMethod, const FBeamPointStructWrapper& sourcePoints, const FBeamPointStructWrapper& targetPoints);
    
    UFUNCTION(BlueprintCallable, NetMulticast, Reliable, WithValidation)
    void NetMulticast_SetMovementComponentPlanarMovement(AOMDProjectile* projectile, bool constrainToPlane, FVector PlaneConstraintOrigin, FVector PlaneConstraintNormal, EPlaneConstraintAxisSetting PlaneConstraintAxisSetting);
    
    UFUNCTION(BlueprintCallable, NetMulticast, Reliable)
    void NetMulticast_SetCharacterGravity(AOMDCharacter* Character, float GravityScale, bool enableMeshGravity);
    
    UFUNCTION(BlueprintCallable, NetMulticast, Unreliable)
    void NetMulticast_PlayMontage(USkeletalMeshComponent* SkeletalMesh, UAnimMontage* Montage, float Rate, float StartPosition, FName startSection, bool Queue, FGuid montageGuid);
    
    UFUNCTION(BlueprintCallable, NetMulticast, Reliable)
    void NetMulticast_LaunchCharacter(AOMDCharacter* Character, FOMDSoftProtoPtr Source, AActor* Causer, FVector Direction, float strength, ECharacterWeightClass maxAffectedWeightClass, bool useRagdoll, FVector meshImpulseLocation, FName BoneName);
    
    UFUNCTION(BlueprintCallable, NetMulticast, Unreliable)
    void NetMulticast_FadeOutSound(FGuid audioId);
    
    UFUNCTION(BlueprintCallable, NetMulticast, Reliable)
    void NetMulticast_ExplodeProjectile(int32 replicatedExplosionID);
    
    UFUNCTION(BlueprintCallable, NetMulticast, Reliable)
    void NetMulticast_ChangeElement(EChromaticaElements element, AOMDAIFlyerCharacter* Target);
    
    UFUNCTION(BlueprintCallable, NetMulticast, Reliable)
    void NetMulticast_AttachToComponent(AActor* actorToAttach, USceneComponent* ParentComponent, FName SocketName, EAttachmentRule locRule, EAttachmentRule rotRule, EAttachmentRule ScaleRule, bool weldBodies);
    
public:
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsReloadingAbility(FOMDSoftProtoPtr OMDAbilityProto) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsAbilityActive(FOMDSoftProtoPtr OMDAbilityProto) const;
    
    UFUNCTION(BlueprintCallable)
    void GiveAbility(FOMDSoftProtoPtr OMDAbilityProto);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetRemainingCooldownTime(FOMDSoftProtoPtr OMDAbilityProto) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetRemainingAmmo(FOMDSoftProtoPtr OMDAbilityProto) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetReloadTime(FOMDSoftProtoPtr OMDAbilityProto) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetMaxAmmo(FOMDSoftProtoPtr OMDAbilityProto) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetLastReloadTime(FOMDSoftProtoPtr OMDAbilityProto) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetLastActivationTime(FOMDSoftProtoPtr OMDAbilityProto) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetCooldownTime(FOMDSoftProtoPtr OMDAbilityProto) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    UOMDAbility* GetAbilityPrimaryInstanceOfType(FOMDSoftProtoPtr OMDAbilityProto) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetAbilityActiveInstancesCount(FOMDSoftProtoPtr OMDAbilityProto) const;
    
    UFUNCTION(BlueprintCallable)
    void DisableAbility(FOMDSoftProtoPtr OMDAbilityProto, bool Disabled);
    
    UFUNCTION(BlueprintCallable)
    void DeactivateAbility(FOMDSoftProtoPtr OMDAbilityProto);
    
protected:
    UFUNCTION(BlueprintCallable, Client, Reliable)
    void Client_StatusEffectRemoved(FGuid request, bool didRemove);
    
    UFUNCTION(BlueprintCallable, Client, Reliable)
    void Client_StatusEffectApplied(FGuid request, int32 ID);
    
    UFUNCTION(BlueprintCallable, Client, Unreliable)
    void Client_PlayCameraShake(TSubclassOf<UMatineeCameraShake> CameraShake, float Scale);
    
public:
    UFUNCTION(BlueprintCallable)
    void CleanupAbility(FOMDSoftProtoPtr OMDAbilityProto);
    
    UFUNCTION(BlueprintCallable)
    void CancelAbility(FOMDSoftProtoPtr OMDAbilityProto);
    
    UFUNCTION(BlueprintCallable)
    void ActivateAbility(FOMDSoftProtoPtr OMDAbilityProto, UObject* Source, UOMDAbilityParameters* Params);
    
};

