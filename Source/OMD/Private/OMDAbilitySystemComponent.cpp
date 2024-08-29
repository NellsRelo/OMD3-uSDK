#include "OMDAbilitySystemComponent.h"
#include "Templates/SubclassOf.h"

UOMDAbilitySystemComponent::UOMDAbilitySystemComponent(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->ReActivationDelay = 0.00f;
    this->bAutoReload = false;
}

void UOMDAbilitySystemComponent::Server_TriggerPlayerAttachmentEvent_Implementation(AOMDPlayerCharacter* Player, EPlayerAttachmentEventType playerAttachmentEventType, EPlayerAttachmentSelectionMethod playerAttachmentSelectionMethod, FName AttachmentName, int32 attachmentIndex) {
}
bool UOMDAbilitySystemComponent::Server_TriggerPlayerAttachmentEvent_Validate(AOMDPlayerCharacter* Player, EPlayerAttachmentEventType playerAttachmentEventType, EPlayerAttachmentSelectionMethod playerAttachmentSelectionMethod, FName AttachmentName, int32 attachmentIndex) {
    return true;
}

void UOMDAbilitySystemComponent::Server_StopMontage_Implementation(USkeletalMeshComponent* SkeletalMesh, FGuid montageGuid) {
}
bool UOMDAbilitySystemComponent::Server_StopMontage_Validate(USkeletalMeshComponent* SkeletalMesh, FGuid montageGuid) {
    return true;
}

void UOMDAbilitySystemComponent::Server_SpawnSoundAttached_Implementation(USoundBase* Sound, USceneComponent* AttachToComponent, const FString& AttachPointName, const FVector_NetQuantize& Location, FRotator Rotation, EAttachLocation::Type LocationType, bool bStopWhenAttachedToDestroyed, float VolumeMultiplier, float PitchMultiplier, float StartTime, USoundAttenuation* AttenuationSettings, USoundConcurrency* ConcurrencySettings, bool bAutoDestroy, FGuid audioId) {
}
bool UOMDAbilitySystemComponent::Server_SpawnSoundAttached_Validate(USoundBase* Sound, USceneComponent* AttachToComponent, const FString& AttachPointName, const FVector_NetQuantize& Location, FRotator Rotation, EAttachLocation::Type LocationType, bool bStopWhenAttachedToDestroyed, float VolumeMultiplier, float PitchMultiplier, float StartTime, USoundAttenuation* AttenuationSettings, USoundConcurrency* ConcurrencySettings, bool bAutoDestroy, FGuid audioId) {
    return true;
}

void UOMDAbilitySystemComponent::Server_SpawnSoundAtLocation_Implementation(USoundBase* Sound, const FVector_NetQuantize& Location, const FRotator& Rotation, float VolumeMultiplier, float PitchMultiplier, float StartTime, USoundAttenuation* AttenuationSettings, USoundConcurrency* ConcurrencySettings, bool bAutoDestroy) {
}
bool UOMDAbilitySystemComponent::Server_SpawnSoundAtLocation_Validate(USoundBase* Sound, const FVector_NetQuantize& Location, const FRotator& Rotation, float VolumeMultiplier, float PitchMultiplier, float StartTime, USoundAttenuation* AttenuationSettings, USoundConcurrency* ConcurrencySettings, bool bAutoDestroy) {
    return true;
}

void UOMDAbilitySystemComponent::Server_SpawnEmitterAttached_Implementation(UParticleSystem* emitterTemplate, USceneComponent* AttachToComponent, const FString& AttachPointName, const FVector_NetQuantize& Location, const FRotator& Rotation, const FVector_NetQuantize& Scale, EAttachLocation::Type LocationType, bool bAutoDestroy, EPSCPoolMethod PoolingMethod, bool bUseAbsoluteRotation) {
}
bool UOMDAbilitySystemComponent::Server_SpawnEmitterAttached_Validate(UParticleSystem* emitterTemplate, USceneComponent* AttachToComponent, const FString& AttachPointName, const FVector_NetQuantize& Location, const FRotator& Rotation, const FVector_NetQuantize& Scale, EAttachLocation::Type LocationType, bool bAutoDestroy, EPSCPoolMethod PoolingMethod, bool bUseAbsoluteRotation) {
    return true;
}

void UOMDAbilitySystemComponent::Server_SpawnEmitterAtLocation_Implementation(UParticleSystem* emitterTemplate, const FVector_NetQuantize& Location, const FRotator& Rotation, const FVector_NetQuantize& Scale, bool bAutoDestroy, EPSCPoolMethod PoolingMethod) {
}
bool UOMDAbilitySystemComponent::Server_SpawnEmitterAtLocation_Validate(UParticleSystem* emitterTemplate, const FVector_NetQuantize& Location, const FRotator& Rotation, const FVector_NetQuantize& Scale, bool bAutoDestroy, EPSCPoolMethod PoolingMethod) {
    return true;
}

void UOMDAbilitySystemComponent::Server_SpawnBeamEmitterAtLocation_Implementation(UParticleSystem* emitterTemplate, const FVector_NetQuantize& Location, const FRotator& Rotation, const FVector_NetQuantize& Scale, bool bAutoDestroy, EPSCPoolMethod PoolingMethod, const FBeamPointStructWrapper& sourcePoints, const FBeamPointStructWrapper& targetPoints) {
}
bool UOMDAbilitySystemComponent::Server_SpawnBeamEmitterAtLocation_Validate(UParticleSystem* emitterTemplate, const FVector_NetQuantize& Location, const FRotator& Rotation, const FVector_NetQuantize& Scale, bool bAutoDestroy, EPSCPoolMethod PoolingMethod, const FBeamPointStructWrapper& sourcePoints, const FBeamPointStructWrapper& targetPoints) {
    return true;
}

void UOMDAbilitySystemComponent::Server_SpawnActorAttached_Implementation(TSubclassOf<AOMDAbilityActor> spawnClass, const FTransform& SpawnTransform, ESpawnActorCollisionHandlingMethod collisionHandlingOverride, float LifeSpan, USceneComponent* ParentComponent, FName SocketName, EAttachmentRule locRule, EAttachmentRule rotRule, EAttachmentRule ScaleRule, bool weldBodies) {
}
bool UOMDAbilitySystemComponent::Server_SpawnActorAttached_Validate(TSubclassOf<AOMDAbilityActor> spawnClass, const FTransform& SpawnTransform, ESpawnActorCollisionHandlingMethod collisionHandlingOverride, float LifeSpan, USceneComponent* ParentComponent, FName SocketName, EAttachmentRule locRule, EAttachmentRule rotRule, EAttachmentRule ScaleRule, bool weldBodies) {
    return true;
}

void UOMDAbilitySystemComponent::Server_SpawnActor_Implementation(TSubclassOf<AOMDAbilityActor> spawnClass, const FTransform& SpawnTransform, ESpawnActorCollisionHandlingMethod collisionHandlingOverride, float LifeSpan) {
}
bool UOMDAbilitySystemComponent::Server_SpawnActor_Validate(TSubclassOf<AOMDAbilityActor> spawnClass, const FTransform& SpawnTransform, ESpawnActorCollisionHandlingMethod collisionHandlingOverride, float LifeSpan) {
    return true;
}

void UOMDAbilitySystemComponent::Server_SetTrapEnabledState_Implementation(AOMDTrap* targetTrap, AActor* Causer, float Duration) {
}
bool UOMDAbilitySystemComponent::Server_SetTrapEnabledState_Validate(AOMDTrap* targetTrap, AActor* Causer, float Duration) {
    return true;
}

void UOMDAbilitySystemComponent::Server_SetMovementComponentPlanarMovement_Implementation(AOMDProjectile* projectile, bool constrainToPlane, FVector PlaneConstraintOrigin, FVector PlaneConstraintNormal, EPlaneConstraintAxisSetting PlaneConstraintAxisSetting) {
}
bool UOMDAbilitySystemComponent::Server_SetMovementComponentPlanarMovement_Validate(AOMDProjectile* projectile, bool constrainToPlane, FVector PlaneConstraintOrigin, FVector PlaneConstraintNormal, EPlaneConstraintAxisSetting PlaneConstraintAxisSetting) {
    return true;
}

void UOMDAbilitySystemComponent::Server_SetCharacterGravity_Implementation(AOMDCharacter* Character, float GravityScale, bool enableMeshGravity) {
}
bool UOMDAbilitySystemComponent::Server_SetCharacterGravity_Validate(AOMDCharacter* Character, float GravityScale, bool enableMeshGravity) {
    return true;
}

void UOMDAbilitySystemComponent::Server_ResetProjectile_Implementation(TSubclassOf<AOMDProjectile> projectile, AActor* Owner, APawn* Instigator, FVector Origin, FVector Velocity, float lifetime, int32 pierceCount, AActor* homingTarget, float HomingAccelerationMagnitude, bool useVisualSpawnRotation, FRotator visualSpawnRotation, bool constrainToPlane, FVector PlaneConstraintOrigin, FVector PlaneConstraintNormal, EPlaneConstraintAxisSetting PlaneConstraintAxisSetting, int32 replicatedExplosionID) {
}
bool UOMDAbilitySystemComponent::Server_ResetProjectile_Validate(TSubclassOf<AOMDProjectile> projectile, AActor* Owner, APawn* Instigator, FVector Origin, FVector Velocity, float lifetime, int32 pierceCount, AActor* homingTarget, float HomingAccelerationMagnitude, bool useVisualSpawnRotation, FRotator visualSpawnRotation, bool constrainToPlane, FVector PlaneConstraintOrigin, FVector PlaneConstraintNormal, EPlaneConstraintAxisSetting PlaneConstraintAxisSetting, int32 replicatedExplosionID) {
    return true;
}

void UOMDAbilitySystemComponent::Server_RemoveStatusEffect_Implementation(FGuid request, AActor* Target, int32 ID, EStatusEffectCategory Category) {
}
bool UOMDAbilitySystemComponent::Server_RemoveStatusEffect_Validate(FGuid request, AActor* Target, int32 ID, EStatusEffectCategory Category) {
    return true;
}

void UOMDAbilitySystemComponent::Server_PlayMontage_Implementation(USkeletalMeshComponent* SkeletalMesh, UAnimMontage* Montage, float Rate, float StartPosition, FName startSection, bool Queue, FGuid montageGuid) {
}
bool UOMDAbilitySystemComponent::Server_PlayMontage_Validate(USkeletalMeshComponent* SkeletalMesh, UAnimMontage* Montage, float Rate, float StartPosition, FName startSection, bool Queue, FGuid montageGuid) {
    return true;
}

void UOMDAbilitySystemComponent::Server_PlaceTrap_Implementation(AOMDTrapGrid* trapGrid, UOMDTrapGridBoxComponent* trapGridBox, FTransform SpawnTransform, FOMDSoftProtoPtr trapProtoPtr, const TArray<AOMDTrapGrid*>& seamedTrapGrids) {
}
bool UOMDAbilitySystemComponent::Server_PlaceTrap_Validate(AOMDTrapGrid* trapGrid, UOMDTrapGridBoxComponent* trapGridBox, FTransform SpawnTransform, FOMDSoftProtoPtr trapProtoPtr, const TArray<AOMDTrapGrid*>& seamedTrapGrids) {
    return true;
}

void UOMDAbilitySystemComponent::Server_LaunchProjectile_Implementation(TSubclassOf<AOMDProjectile> projectile, FVector Origin, FVector Velocity, float lifetime, int32 pierceCount, AActor* homingTarget, float HomingAccelerationMagnitude, bool useVisualSpawnRotation, FRotator visualSpawnRotation, bool constrainToPlane, FVector PlaneConstraintOrigin, FVector PlaneConstraintNormal, EPlaneConstraintAxisSetting PlaneConstraintAxisSetting, int32 replicatedExplosionID) {
}
bool UOMDAbilitySystemComponent::Server_LaunchProjectile_Validate(TSubclassOf<AOMDProjectile> projectile, FVector Origin, FVector Velocity, float lifetime, int32 pierceCount, AActor* homingTarget, float HomingAccelerationMagnitude, bool useVisualSpawnRotation, FRotator visualSpawnRotation, bool constrainToPlane, FVector PlaneConstraintOrigin, FVector PlaneConstraintNormal, EPlaneConstraintAxisSetting PlaneConstraintAxisSetting, int32 replicatedExplosionID) {
    return true;
}

void UOMDAbilitySystemComponent::Server_LaunchCharacter_Implementation(AOMDCharacter* Character, FOMDSoftProtoPtr Source, AActor* Causer, FVector Direction, float strength, ECharacterWeightClass maxAffectedWeightClass, bool useRagdoll, FVector meshImpulseLocation, FName BoneName) {
}
bool UOMDAbilitySystemComponent::Server_LaunchCharacter_Validate(AOMDCharacter* Character, FOMDSoftProtoPtr Source, AActor* Causer, FVector Direction, float strength, ECharacterWeightClass maxAffectedWeightClass, bool useRagdoll, FVector meshImpulseLocation, FName BoneName) {
    return true;
}

void UOMDAbilitySystemComponent::Server_FadeOutSound_Implementation(FGuid audioId) {
}
bool UOMDAbilitySystemComponent::Server_FadeOutSound_Validate(FGuid audioId) {
    return true;
}

void UOMDAbilitySystemComponent::Server_ExplodeProjectile_Implementation(int32 replicatedExplosionID) {
}
bool UOMDAbilitySystemComponent::Server_ExplodeProjectile_Validate(int32 replicatedExplosionID) {
    return true;
}

void UOMDAbilitySystemComponent::Server_DetachFromActor_Implementation(AActor* actorToDetach, EDetachmentRule locRule, EDetachmentRule rotRule, EDetachmentRule ScaleRule) {
}
bool UOMDAbilitySystemComponent::Server_DetachFromActor_Validate(AActor* actorToDetach, EDetachmentRule locRule, EDetachmentRule rotRule, EDetachmentRule ScaleRule) {
    return true;
}

void UOMDAbilitySystemComponent::Server_ChangeElement_Implementation(EChromaticaElements element, AOMDAIFlyerCharacter* Target) {
}
bool UOMDAbilitySystemComponent::Server_ChangeElement_Validate(EChromaticaElements element, AOMDAIFlyerCharacter* Target) {
    return true;
}

void UOMDAbilitySystemComponent::Server_AttachToComponent_Implementation(AActor* actorToAttach, USceneComponent* ParentComponent, FName SocketName, EAttachmentRule locRule, EAttachmentRule rotRule, EAttachmentRule ScaleRule, bool weldBodies) {
}
bool UOMDAbilitySystemComponent::Server_AttachToComponent_Validate(AActor* actorToAttach, USceneComponent* ParentComponent, FName SocketName, EAttachmentRule locRule, EAttachmentRule rotRule, EAttachmentRule ScaleRule, bool weldBodies) {
    return true;
}

void UOMDAbilitySystemComponent::Server_ApplyStatusEffect_Implementation(FGuid request, AActor* Target, FOMDSoftProtoPtr StatusEffect, float overrideDuration) {
}
bool UOMDAbilitySystemComponent::Server_ApplyStatusEffect_Validate(FGuid request, AActor* Target, FOMDSoftProtoPtr StatusEffect, float overrideDuration) {
    return true;
}

void UOMDAbilitySystemComponent::ResetAbility(FOMDSoftProtoPtr OMDAbilityProto) {
}

void UOMDAbilitySystemComponent::ReloadAbility(FOMDSoftProtoPtr OMDAbilityProto) {
}

void UOMDAbilitySystemComponent::NetMulticast_TriggerPlayerAttachmentEvent_Implementation(AOMDPlayerCharacter* Player, EPlayerAttachmentEventType playerAttachmentEventType, EPlayerAttachmentSelectionMethod playerAttachmentSelectionMethod, FName AttachmentName, int32 attachmentIndex) {
}

void UOMDAbilitySystemComponent::NetMulticast_StopMontage_Implementation(USkeletalMeshComponent* SkeletalMesh, FGuid montageGuid) {
}

void UOMDAbilitySystemComponent::NetMulticast_SpawnSoundAttached_Implementation(USoundBase* Sound, USceneComponent* AttachToComponent, const FString& AttachPointName, const FVector_NetQuantize& Location, FRotator Rotation, EAttachLocation::Type LocationType, bool bStopWhenAttachedToDestroyed, float VolumeMultiplier, float PitchMultiplier, float StartTime, USoundAttenuation* AttenuationSettings, USoundConcurrency* ConcurrencySettings, bool bAutoDestroy, FGuid audioId) {
}

void UOMDAbilitySystemComponent::NetMulticast_SpawnSoundAtLocation_Implementation(USoundBase* Sound, const FVector_NetQuantize& Location, const FRotator& Rotation, float VolumeMultiplier, float PitchMultiplier, float StartTime, USoundAttenuation* AttenuationSettings, USoundConcurrency* ConcurrencySettings, bool bAutoDestroy) {
}

void UOMDAbilitySystemComponent::NetMulticast_SpawnEmitterAttached_Implementation(UParticleSystem* emitterTemplate, USceneComponent* AttachToComponent, const FString& AttachPointName, const FVector_NetQuantize& Location, const FRotator& Rotation, const FVector_NetQuantize& Scale, EAttachLocation::Type LocationType, bool bAutoDestroy, EPSCPoolMethod PoolingMethod, bool bUseAbsoluteRotation) {
}

void UOMDAbilitySystemComponent::NetMulticast_SpawnEmitterAtLocation_Implementation(UParticleSystem* emitterTemplate, const FVector_NetQuantize& Location, const FRotator& Rotation, const FVector_NetQuantize& Scale, bool bAutoDestroy, EPSCPoolMethod PoolingMethod) {
}

void UOMDAbilitySystemComponent::NetMulticast_SpawnBeamEmitterAtLocation_Implementation(UParticleSystem* emitterTemplate, const FVector_NetQuantize& Location, const FRotator& Rotation, const FVector_NetQuantize& Scale, bool bAutoDestroy, EPSCPoolMethod PoolingMethod, const FBeamPointStructWrapper& sourcePoints, const FBeamPointStructWrapper& targetPoints) {
}

void UOMDAbilitySystemComponent::NetMulticast_SetMovementComponentPlanarMovement_Implementation(AOMDProjectile* projectile, bool constrainToPlane, FVector PlaneConstraintOrigin, FVector PlaneConstraintNormal, EPlaneConstraintAxisSetting PlaneConstraintAxisSetting) {
}
bool UOMDAbilitySystemComponent::NetMulticast_SetMovementComponentPlanarMovement_Validate(AOMDProjectile* projectile, bool constrainToPlane, FVector PlaneConstraintOrigin, FVector PlaneConstraintNormal, EPlaneConstraintAxisSetting PlaneConstraintAxisSetting) {
    return true;
}

void UOMDAbilitySystemComponent::NetMulticast_SetCharacterGravity_Implementation(AOMDCharacter* Character, float GravityScale, bool enableMeshGravity) {
}

void UOMDAbilitySystemComponent::NetMulticast_PlayMontage_Implementation(USkeletalMeshComponent* SkeletalMesh, UAnimMontage* Montage, float Rate, float StartPosition, FName startSection, bool Queue, FGuid montageGuid) {
}

void UOMDAbilitySystemComponent::NetMulticast_LaunchCharacter_Implementation(AOMDCharacter* Character, FOMDSoftProtoPtr Source, AActor* Causer, FVector Direction, float strength, ECharacterWeightClass maxAffectedWeightClass, bool useRagdoll, FVector meshImpulseLocation, FName BoneName) {
}

void UOMDAbilitySystemComponent::NetMulticast_FadeOutSound_Implementation(FGuid audioId) {
}

void UOMDAbilitySystemComponent::NetMulticast_ExplodeProjectile_Implementation(int32 replicatedExplosionID) {
}

void UOMDAbilitySystemComponent::NetMulticast_ChangeElement_Implementation(EChromaticaElements element, AOMDAIFlyerCharacter* Target) {
}

void UOMDAbilitySystemComponent::NetMulticast_AttachToComponent_Implementation(AActor* actorToAttach, USceneComponent* ParentComponent, FName SocketName, EAttachmentRule locRule, EAttachmentRule rotRule, EAttachmentRule ScaleRule, bool weldBodies) {
}

bool UOMDAbilitySystemComponent::IsReloadingAbility(FOMDSoftProtoPtr OMDAbilityProto) const {
    return false;
}

bool UOMDAbilitySystemComponent::IsAbilityActive(FOMDSoftProtoPtr OMDAbilityProto) const {
    return false;
}

void UOMDAbilitySystemComponent::GiveAbility(FOMDSoftProtoPtr OMDAbilityProto) {
}

float UOMDAbilitySystemComponent::GetRemainingCooldownTime(FOMDSoftProtoPtr OMDAbilityProto) const {
    return 0.0f;
}

int32 UOMDAbilitySystemComponent::GetRemainingAmmo(FOMDSoftProtoPtr OMDAbilityProto) const {
    return 0;
}

float UOMDAbilitySystemComponent::GetReloadTime(FOMDSoftProtoPtr OMDAbilityProto) const {
    return 0.0f;
}

int32 UOMDAbilitySystemComponent::GetMaxAmmo(FOMDSoftProtoPtr OMDAbilityProto) const {
    return 0;
}

float UOMDAbilitySystemComponent::GetLastReloadTime(FOMDSoftProtoPtr OMDAbilityProto) const {
    return 0.0f;
}

float UOMDAbilitySystemComponent::GetLastActivationTime(FOMDSoftProtoPtr OMDAbilityProto) const {
    return 0.0f;
}

float UOMDAbilitySystemComponent::GetCooldownTime(FOMDSoftProtoPtr OMDAbilityProto) const {
    return 0.0f;
}

UOMDAbility* UOMDAbilitySystemComponent::GetAbilityPrimaryInstanceOfType(FOMDSoftProtoPtr OMDAbilityProto) const {
    return NULL;
}

int32 UOMDAbilitySystemComponent::GetAbilityActiveInstancesCount(FOMDSoftProtoPtr OMDAbilityProto) const {
    return 0;
}

void UOMDAbilitySystemComponent::DisableAbility(FOMDSoftProtoPtr OMDAbilityProto, bool Disabled) {
}

void UOMDAbilitySystemComponent::DeactivateAbility(FOMDSoftProtoPtr OMDAbilityProto) {
}

void UOMDAbilitySystemComponent::Client_StatusEffectRemoved_Implementation(FGuid request, bool didRemove) {
}

void UOMDAbilitySystemComponent::Client_StatusEffectApplied_Implementation(FGuid request, int32 ID) {
}

void UOMDAbilitySystemComponent::Client_PlayCameraShake_Implementation(TSubclassOf<UMatineeCameraShake> CameraShake, float Scale) {
}

void UOMDAbilitySystemComponent::CleanupAbility(FOMDSoftProtoPtr OMDAbilityProto) {
}

void UOMDAbilitySystemComponent::CancelAbility(FOMDSoftProtoPtr OMDAbilityProto) {
}

void UOMDAbilitySystemComponent::ActivateAbility(FOMDSoftProtoPtr OMDAbilityProto, UObject* Source, UOMDAbilityParameters* Params) {
}


