#pragma once
#include "CoreMinimal.h"
#include "Templates/SubclassOf.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Transform -FallbackName=Transform
#include "EPlayerAttachmentSelectionMethod.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=ActorComponent -FallbackName=ActorComponent
#include "OMDSoftProtoPtr.h"
#include "OMDAbilitySpec.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Guid -FallbackName=Guid
#include "ECharacterWeightClass.h"
#include "EPlayerAttachmentEventType.h"
#include "Engine/NetSerialization.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Rotator -FallbackName=Rotator
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Vector -FallbackName=Vector
#include "Particles/WorldPSCPool.h"
#include "BeamPointStructWrapper.h"
#include "GameFramework/MovementComponent.h"
#include "EStatusEffectCategory.h"
#include "Engine/EngineTypes.h"
#include "EChromaticaElements.h"
#include "OMDAbilitySystemComponent.generated.h"

class UAnimMontage;
class AOMDPlayerCharacter;
class USkeletalMeshComponent;
class AOMDTrap;
class USoundBase;
class APawn;
class UParticleSystem;
class USceneComponent;
class USoundConcurrency;
class USoundAttenuation;
class AOMDAbilityActor;
class UOMDAbilityParameters;
class AActor;
class AOMDProjectile;
class UMatineeCameraShake;
class AOMDCharacter;
class AOMDTrapGrid;
class UOMDTrapGridBoxComponent;
class AOMDAIFlyerCharacter;
class UOMDAbility;
class UObject;

UCLASS(BlueprintType, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class OMD_API UOMDAbilitySystemComponent : public UActorComponent {
    GENERATED_BODY()
public:
protected:
    UPROPERTY()
    TArray<FOMDAbilitySpec> Abilities;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    float ReActivationDelay;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    uint8 bAutoReload: 1;
    
public:
    UOMDAbilitySystemComponent();
public:
    UFUNCTION(Reliable, Server, WithValidation)
    void Server_TriggerPlayerAttachmentEvent(AOMDPlayerCharacter* Player, EPlayerAttachmentEventType playerAttachmentEventType, EPlayerAttachmentSelectionMethod playerAttachmentSelectionMethod, FName AttachmentName, int32 attachmentIndex);
    
    UFUNCTION(Server, Unreliable, WithValidation)
    void Server_StopMontage(USkeletalMeshComponent* SkeletalMesh, FGuid montageGuid);
    
    //UFUNCTION(Server, Unreliable, WithValidation)
    //void Server_SpawnSoundAttached(USoundBase* Sound, USceneComponent* AttachToComponent, const FString& AttachPointName, const FVector_NetQuantize& Location, FRotator Rotation, TEnumAsByte<EAttachLocation::Type> LocationType, bool bStopWhenAttachedToDestroyed, float VolumeMultiplier, float PitchMultiplier, float StartTime, USoundAttenuation* AttenuationSettings, USoundConcurrency* ConcurrencySettings, bool bAutoDestroy, FGuid audioId);
    
    UFUNCTION(Server, Unreliable, WithValidation)
    void Server_SpawnSoundAtLocation(USoundBase* Sound, const FVector_NetQuantize& Location, const FRotator& Rotation, float VolumeMultiplier, float PitchMultiplier, float StartTime, USoundAttenuation* AttenuationSettings, USoundConcurrency* ConcurrencySettings, bool bAutoDestroy);
    
    //UFUNCTION(Server, Unreliable, WithValidation)
    //void Server_SpawnEmitterAttached(UParticleSystem* emitterTemplate, USceneComponent* AttachToComponent, const FString& AttachPointName, const FVector_NetQuantize& Location, const FRotator& Rotation, const FVector_NetQuantize& Scale, TEnumAsByte<EAttachLocation::Type> LocationType, bool bAutoDestroy, EPSCPoolMethod PoolingMethod, bool bUseAbsoluteRotation);
    
    UFUNCTION(Reliable, Server, WithValidation)
    void Server_SpawnEmitterAtLocation(UParticleSystem* emitterTemplate, const FVector_NetQuantize& Location, const FRotator& Rotation, const FVector_NetQuantize& Scale, bool bAutoDestroy, EPSCPoolMethod PoolingMethod);
    
    UFUNCTION(Reliable, Server, WithValidation)
    void Server_SpawnBeamEmitterAtLocation(UParticleSystem* emitterTemplate, const FVector_NetQuantize& Location, const FRotator& Rotation, const FVector_NetQuantize& Scale, bool bAutoDestroy, EPSCPoolMethod PoolingMethod, const FBeamPointStructWrapper& sourcePoints, const FBeamPointStructWrapper& targetPoints);
    
    UFUNCTION(Reliable, Server, WithValidation)
    void Server_SpawnActorAttached(TSubclassOf<AOMDAbilityActor> spawnClass, const FTransform& SpawnTransform, ESpawnActorCollisionHandlingMethod collisionHandlingOverride, float LifeSpan, USceneComponent* ParentComponent, FName SocketName, EAttachmentRule locRule, EAttachmentRule rotRule, EAttachmentRule ScaleRule, bool weldBodies);
    
    UFUNCTION(Reliable, Server, WithValidation)
    void Server_SpawnActor(TSubclassOf<AOMDAbilityActor> spawnClass, const FTransform& SpawnTransform, ESpawnActorCollisionHandlingMethod collisionHandlingOverride, float LifeSpan);
    
    UFUNCTION(Reliable, Server, WithValidation)
    void Server_SetTrapEnabledState(AOMDTrap* targetTrap, AActor* Causer, float Duration);
    
    UFUNCTION(NetMulticast, Reliable, WithValidation)
    void Server_SetMovementComponentPlanarMovement(AOMDProjectile* projectile, bool constrainToPlane, FVector PlaneConstraintOrigin, FVector PlaneConstraintNormal, EPlaneConstraintAxisSetting PlaneConstraintAxisSetting);
    
    UFUNCTION(Reliable, Server, WithValidation)
    void Server_SetCharacterGravity(AOMDCharacter* Character, float GravityScale, bool enableMeshGravity);
    
public:
    UFUNCTION(Server, Unreliable, WithValidation)
    void Server_ResetProjectile(TSubclassOf<AOMDProjectile> projectile, AActor* Owner, APawn* Instigator, FVector Origin, FVector Velocity, float lifetime, int32 pierceCount, AActor* homingTarget, float HomingAccelerationMagnitude, bool useVisualSpawnRotation, FRotator visualSpawnRotation, bool constrainToPlane, FVector PlaneConstraintOrigin, FVector PlaneConstraintNormal, EPlaneConstraintAxisSetting PlaneConstraintAxisSetting, int32 replicatedExplosionID);
    
protected:
    UFUNCTION(Reliable, Server, WithValidation)
    void Server_RemoveStatusEffect(FGuid request, AActor* Target, int32 ID, EStatusEffectCategory Category);
    
    UFUNCTION(Server, Unreliable, WithValidation)
    void Server_PlayMontage(USkeletalMeshComponent* SkeletalMesh, UAnimMontage* Montage, float Rate, float StartPosition, FName startSection, bool Queue, FGuid montageGuid);
    
    UFUNCTION(Reliable, Server, WithValidation)
    void Server_PlaceTrap(AOMDTrapGrid* trapGrid, UOMDTrapGridBoxComponent* trapGridBox, FTransform SpawnTransform, FOMDSoftProtoPtr trapProtoPtr, const TArray<AOMDTrapGrid*>& seamedTrapGrids);
    
    UFUNCTION(Server, Unreliable, WithValidation)
    void Server_LaunchProjectile(TSubclassOf<AOMDProjectile> projectile, FVector Origin, FVector Velocity, float lifetime, int32 pierceCount, AActor* homingTarget, float HomingAccelerationMagnitude, bool useVisualSpawnRotation, FRotator visualSpawnRotation, bool constrainToPlane, FVector PlaneConstraintOrigin, FVector PlaneConstraintNormal, EPlaneConstraintAxisSetting PlaneConstraintAxisSetting, int32 replicatedExplosionID);
    
    UFUNCTION(Reliable, Server, WithValidation)
    void Server_LaunchCharacter(AOMDCharacter* Character, FOMDSoftProtoPtr Source, AActor* Causer, FVector Direction, float strength, ECharacterWeightClass maxAffectedWeightClass, bool useRagdoll, FVector meshImpulseLocation, FName BoneName);
    
    UFUNCTION(Reliable, Server, WithValidation)
    void Server_HasVisualStatusEffect(FGuid request, AOMDCharacter* Target, EStatusEffectCategory categoryToCheck);
    
    UFUNCTION(Server, Unreliable, WithValidation)
    void Server_FadeOutSound(FGuid audioId);
    
    UFUNCTION(Reliable, Server, WithValidation)
    void Server_ExplodeProjectile(int32 replicatedExplosionID);
    
    UFUNCTION(Server, Unreliable, WithValidation)
    void Server_DetachFromActor(AActor* actorToDetach, EDetachmentRule locRule, EDetachmentRule rotRule, EDetachmentRule ScaleRule);
    
    UFUNCTION(Reliable, Server, WithValidation)
    void Server_ChangeElement(EChromaticaElements element, AOMDAIFlyerCharacter* Target);
    
    UFUNCTION(Reliable, Server, WithValidation)
    void Server_AttachToComponent(AActor* actorToAttach, USceneComponent* ParentComponent, FName SocketName, EAttachmentRule locRule, EAttachmentRule rotRule, EAttachmentRule ScaleRule, bool weldBodies);
    
    UFUNCTION(Reliable, Server, WithValidation)
    void Server_ApplyStatusEffect(FGuid request, AActor* Target, FOMDSoftProtoPtr StatusEffect, float overrideDuration);
    
public:
    void Server_LaunchProjectile_Implementation(TSubclassOf<AOMDProjectile> projectile, FVector Origin,
                                                FVector Velocity,
                                                float lifetime, int32 pierceCount, AActor* homingTarget,
                                                float HomingAccelerationMagnitude, bool useVisualSpawnRotation,
                                                FRotator visualSpawnRotation, bool constrainToPlane,
                                                FVector PlaneConstraintOrigin, FVector PlaneConstraintNormal,
                                                EPlaneConstraintAxisSetting PlaneConstraintAxisSetting,
                                                int32 replicatedExplosionID);
    UFUNCTION(BlueprintCallable)
    void ResetAbility(FOMDSoftProtoPtr OMDAbilityProto);
    
    UFUNCTION(BlueprintCallable)
    void ReloadAbility(FOMDSoftProtoPtr OMDAbilityProto);
    
protected:
    UFUNCTION(NetMulticast, Reliable)
    void NetMulticast_TriggerPlayerAttachmentEvent(AOMDPlayerCharacter* Player, EPlayerAttachmentEventType playerAttachmentEventType, EPlayerAttachmentSelectionMethod playerAttachmentSelectionMethod, FName AttachmentName, int32 attachmentIndex);
    
    UFUNCTION(NetMulticast, Unreliable)
    void NetMulticast_StopMontage(USkeletalMeshComponent* SkeletalMesh, FGuid montageGuid);
    
    //UFUNCTION(NetMulticast, Unreliable)
    //void NetMulticast_SpawnSoundAttached(USoundBase* Sound, USceneComponent* AttachToComponent, const FString& AttachPointName, const FVector_NetQuantize& Location, FRotator Rotation, TEnumAsByte<EAttachLocation::Type> LocationType, bool bStopWhenAttachedToDestroyed, float VolumeMultiplier, float PitchMultiplier, float StartTime, USoundAttenuation* AttenuationSettings, USoundConcurrency* ConcurrencySettings, bool bAutoDestroy, FGuid audioId);
    
    UFUNCTION(NetMulticast, Unreliable)
    void NetMulticast_SpawnSoundAtLocation(USoundBase* Sound, const FVector_NetQuantize& Location, const FRotator& Rotation, float VolumeMultiplier, float PitchMultiplier, float StartTime, USoundAttenuation* AttenuationSettings, USoundConcurrency* ConcurrencySettings, bool bAutoDestroy);
    
    //UFUNCTION(NetMulticast, Unreliable)
    //void NetMulticast_SpawnEmitterAttached(UParticleSystem* emitterTemplate, USceneComponent* AttachToComponent, const FString& AttachPointName, const FVector_NetQuantize& Location, const FRotator& Rotation, const FVector_NetQuantize& Scale, TEnumAsByte<EAttachLocation::Type> LocationType, bool bAutoDestroy, EPSCPoolMethod PoolingMethod, bool bUseAbsoluteRotation);
    
    UFUNCTION(NetMulticast, Reliable)
    void NetMulticast_SpawnEmitterAtLocation(UParticleSystem* emitterTemplate, const FVector_NetQuantize& Location, const FRotator& Rotation, const FVector_NetQuantize& Scale, bool bAutoDestroy, EPSCPoolMethod PoolingMethod);
    
    UFUNCTION(NetMulticast, Reliable)
    void NetMulticast_SpawnBeamEmitterAtLocation(UParticleSystem* emitterTemplate, const FVector_NetQuantize& Location, const FRotator& Rotation, const FVector_NetQuantize& Scale, bool bAutoDestroy, EPSCPoolMethod PoolingMethod, const FBeamPointStructWrapper& sourcePoints, const FBeamPointStructWrapper& targetPoints);
    
    UFUNCTION(NetMulticast, Reliable, WithValidation)
    void NetMulticast_SetMovementComponentPlanarMovement(AOMDProjectile* projectile, bool constrainToPlane, FVector PlaneConstraintOrigin, FVector PlaneConstraintNormal, EPlaneConstraintAxisSetting PlaneConstraintAxisSetting);
    
    UFUNCTION(NetMulticast, Reliable)
    void NetMulticast_SetCharacterGravity(AOMDCharacter* Character, float GravityScale, bool enableMeshGravity);
    
    UFUNCTION(NetMulticast, Unreliable)
    void NetMulticast_PlayMontage(USkeletalMeshComponent* SkeletalMesh, UAnimMontage* Montage, float Rate, float StartPosition, FName startSection, bool Queue, FGuid montageGuid);
    
    UFUNCTION(NetMulticast, Reliable)
    void NetMulticast_LaunchCharacter(AOMDCharacter* Character, FOMDSoftProtoPtr Source, AActor* Causer, FVector Direction, float strength, ECharacterWeightClass maxAffectedWeightClass, bool useRagdoll, FVector meshImpulseLocation, FName BoneName);
    
    UFUNCTION(NetMulticast, Unreliable)
    void NetMulticast_FadeOutSound(FGuid audioId);
    
    UFUNCTION(NetMulticast, Reliable)
    void NetMulticast_ExplodeProjectile(int32 replicatedExplosionID);
    
    UFUNCTION(NetMulticast, Reliable)
    void NetMulticast_ChangeElement(EChromaticaElements element, AOMDAIFlyerCharacter* Target);
    
    UFUNCTION(NetMulticast, Reliable)
    void NetMulticast_AttachToComponent(AActor* actorToAttach, USceneComponent* ParentComponent, FName SocketName, EAttachmentRule locRule, EAttachmentRule rotRule, EAttachmentRule ScaleRule, bool weldBodies);
    
public:
    UFUNCTION(BlueprintPure)
    bool IsReloadingAbility(FOMDSoftProtoPtr OMDAbilityProto) const;
    
    UFUNCTION(BlueprintPure)
    bool IsAbilityActive(FOMDSoftProtoPtr OMDAbilityProto) const;
    
    UFUNCTION(BlueprintCallable)
    void GiveAbility(FOMDSoftProtoPtr OMDAbilityProto);
    
    UFUNCTION(BlueprintPure)
    float GetRemainingCooldownTime(FOMDSoftProtoPtr OMDAbilityProto) const;
    
    UFUNCTION(BlueprintPure)
    int32 GetRemainingAmmo(FOMDSoftProtoPtr OMDAbilityProto) const;
    
    UFUNCTION(BlueprintPure)
    float GetReloadTime(FOMDSoftProtoPtr OMDAbilityProto) const;
    
    UFUNCTION(BlueprintPure)
    int32 GetMaxAmmo(FOMDSoftProtoPtr OMDAbilityProto) const;
    
    UFUNCTION(BlueprintPure)
    float GetLastReloadTime(FOMDSoftProtoPtr OMDAbilityProto) const;
    
    UFUNCTION(BlueprintPure)
    float GetLastActivationTime(FOMDSoftProtoPtr OMDAbilityProto) const;
    
    UFUNCTION(BlueprintPure)
    float GetCooldownTime(FOMDSoftProtoPtr OMDAbilityProto) const;
    
    UFUNCTION(BlueprintPure)
    UOMDAbility* GetAbilityPrimaryInstanceOfType(FOMDSoftProtoPtr OMDAbilityProto) const;
    
    UFUNCTION(BlueprintPure)
    int32 GetAbilityActiveInstancesCount(FOMDSoftProtoPtr OMDAbilityProto) const;
    
    UFUNCTION(BlueprintCallable)
    void DisableAbility(FOMDSoftProtoPtr OMDAbilityProto, bool Disabled);
    
    UFUNCTION(BlueprintCallable)
    void DeactivateAbility(FOMDSoftProtoPtr OMDAbilityProto);
    
protected:
    UFUNCTION(Client, Reliable)
    void Client_StatusEffectRemoved(FGuid request, bool didRemove);
    
    UFUNCTION(Client, Reliable)
    void Client_StatusEffectApplied(FGuid request, int32 ID);
    
    UFUNCTION(Client, Unreliable)
    void Client_PlayCameraShake(TSubclassOf<UMatineeCameraShake> CameraShake, float Scale);
    
    UFUNCTION(Client, Reliable)
    void Client_HasVisualStatusEffect(FGuid request, int32 ID);
    
public:
    UFUNCTION(BlueprintCallable)
    void CleanupAbility(FOMDSoftProtoPtr OMDAbilityProto);
    
    UFUNCTION(BlueprintCallable)
    void CancelAbility(FOMDSoftProtoPtr OMDAbilityProto);
    
    UFUNCTION(BlueprintCallable)
    void ActivateAbility(FOMDSoftProtoPtr OMDAbilityProto, UObject* Source, UOMDAbilityParameters* Params);
    
};

