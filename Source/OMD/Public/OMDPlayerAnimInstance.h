#pragma once
#include "CoreMinimal.h"
#include "OMDStatusEffectCategoryBools.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=AnimInstance -FallbackName=AnimInstance
#include "ECharacterMovementAbilities.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Vector -FallbackName=Vector
#include "ESide.h"
#include "EStatusEffectCategory.h"
#include "OMDMovementAbilityMontages.h"
#include "OMDSoftProtoPtr.h"
#include "OMDPlayerAnimInstance.generated.h"

class UBlendSpace;
class UAnimSequence;
class UAimOffsetBlendSpace;
class UAnimMontage;
class UOMDInventoryItem;

UCLASS(NonTransient)
class OMD_API UOMDPlayerAnimInstance : public UAnimInstance {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly, Transient)
    float Speed;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly, Transient)
    float NormalizedSpeed;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly, Transient)
    bool bIsInAir;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly, Transient)
    bool bMovementAbilityActive;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly, Transient)
    bool bUseMovementAbilityLowerBodyLocomotion;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly, Transient)
    ECharacterMovementAbilities MovementAbility;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly, Transient)
    bool bIsCombatReady;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient)
    bool bUseFrozenPoseSnapshot;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly, Transient)
    FVector Direction;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly, Transient)
    float ForwardLocomotionValue;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly, Transient)
    float RightLocomotionValue;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly, Transient)
    float PelvisTwist;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly, Transient)
    float AimPitch;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly, Transient)
    float AimYaw;
    
    UPROPERTY(BlueprintReadWrite, EditDefaultsOnly, Transient)
    float RootYawOffset;
    
    UPROPERTY(BlueprintReadWrite, EditDefaultsOnly, Transient)
    bool bIsFlinching;
    
    UPROPERTY(BlueprintReadWrite, EditDefaultsOnly, Transient)
    bool bInMountableTrap;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient)
    EStatusEffectCategory StatusEffectCategory;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly, Transient)
    FOMDStatusEffectCategoryBools StatusEffectCategoryBools;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly, Transient)
    ESide HandToIK;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly, Transient)
    bool bUseFootIK;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly, Transient)
    FVector LeftFootIKPosition;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly, Transient)
    FVector RightFootIKPosition;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly, Transient)
    UAnimSequence* IdleUpperBodyAnimation;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly, Transient)
    UAnimSequence* IdleUpperBodyCombatReadyAnimation;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly, Transient)
    UBlendSpace* LocomotionUpperBodyAnimation;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly, Transient)
    UBlendSpace* StopUpperBodyAnimation;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly, Transient)
    UBlendSpace* LocomotionUpperBodyCombatReadyAnimation;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly, Transient)
    float LocomotionUpperBodyCombatReadyTimerLength;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly, Transient)
    UAimOffsetBlendSpace* AimOffsetUpperBodyAnimation;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly, Transient)
    UAimOffsetBlendSpace* AimOffsetUpperBodyCombatReadyAnimation;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly, Transient)
    UAnimSequence* JumpEnterUpperBodyAnimation;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly, Transient)
    UAnimSequence* JumpIdleUpperBodyAnimation;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly, Transient)
    UAnimSequence* JumpLandUpperBodyAnimation;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly, Transient)
    UAnimSequence* StunAnimation;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly, Transient)
    FOMDMovementAbilityMontages MovementAbilityMontages;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    TSoftObjectPtr<UAnimSequence> IdleUpperBodyNoItemAnimation;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    TSoftObjectPtr<UBlendSpace> LocomotionUpperBodyNoItemAnimation;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    TSoftObjectPtr<UBlendSpace> StopUpperBodyNoItemAnimation;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    TSoftObjectPtr<UAimOffsetBlendSpace> AimOffsetUpperBodyNoItemAnimation;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    TSoftObjectPtr<UAnimSequence> JumpEnterUpperBodyNoItemAnimation;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    TSoftObjectPtr<UAnimSequence> JumpIdleUpperBodyNoItemAnimation;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    TSoftObjectPtr<UAnimSequence> JumpLandUpperBodyNoItemAnimation;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    TSoftObjectPtr<UAnimSequence> StunNoItemAnimation;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    TSoftObjectPtr<UAnimMontage> EquipNoItemMontage;
    
public:
    UOMDPlayerAnimInstance();
protected:
    UFUNCTION()
    void UpdateItemData(UOMDInventoryItem* Item);
    
public:
    UFUNCTION(BlueprintCallable)
    void SetStatusEffectCategory(EStatusEffectCategory newCategory);
    
protected:
    UFUNCTION()
    void LoadAnimationSet(FOMDSoftProtoPtr animationSet);
    
    UFUNCTION()
    void EquipNewItem(UAnimMontage* equipMontage);
    
};

