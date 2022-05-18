#pragma once
#include "CoreMinimal.h"
#include "EAggroGroup.h"
#include "OMDProtoBase.h"
#include "OMDDamageVulnerability.h"
#include "OMDSoftProtoPtr.h"
#include "ECharacterWeightClass.h"
#include "OMDGibInformation.h"
#include "OMDAIAttachments.h"
#include "OMDVectorLimits.h"
#include "OMDTrapTriggerRules.h"
#include "OMDAICharacterProto.generated.h"

class UBehaviorTree;
class UTexture2D;
class AOMDAICharacter;
class UAnimMontage;
class UPhysicsAsset;

USTRUCT(BlueprintType)
struct OMD_API FOMDAICharacterProto : public FOMDProtoBase {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    FText DisplayName;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    FText Description;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    TSoftObjectPtr<UTexture2D> UIIcon;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    TSoftObjectPtr<UTexture2D> UIIconForegroundMask;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    uint8 bShowMiniMapMarkerByDefault: 1;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    TSoftClassPtr<AOMDAICharacter> AICharacterClass;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    TSoftClassPtr<AOMDAICharacter> AICharacterOptimizedClass;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    TSoftObjectPtr<UBehaviorTree> AIBehavior;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    float BaseHealth;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    float BaseSpeed;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    bool bRunsOverBarricades;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    bool bHasRunnerMovement;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    int32 BaseCoinValue;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    int32 ScoreOnDeath;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    float LifeSpan;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    int32 RiftPoints;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    float HeadshotDamageScale;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    uint8 bHasDamageCap: 1;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    float DamageCap;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    float ChanceToDropPickup;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    FOMDSoftProtoPtr GuaranteedPickup;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    float LaunchCollisionDamageThreshold;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    float LaunchCollisionBaseDamage;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    ECharacterWeightClass WeightClass;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    uint8 bEffectedByCyclopeanRaceAbility: 1;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    EAggroGroup AggroGroup;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    float AggroRadius;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    float AggroDropDelay;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    bool bTargetClosestPlayerIfNoTarget;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    FOMDSoftProtoPtr PrimaryAbilityProto;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    TArray<FOMDSoftProtoPtr> SpecialAbilitiesProtos;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    TArray<FOMDSoftProtoPtr> OnDeathAbilitiesProtos;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    TArray<FOMDDamageVulnerability> Vulnerabilities;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    TArray<FOMDDamageVulnerability> Strengths;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    TArray<FOMDSoftProtoPtr> InitialStatusEffectsProtos;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    FOMDAIAttachments Shield;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    FOMDSoftProtoPtr SpawnOnDeathAICharacter;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    int32 SpawnOnDeathCount;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    TArray<FOMDGibInformation> WeaponGibs;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    FOMDGibInformation TorsoGib;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    TArray<FOMDGibInformation> Gibs;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    uint8 bAlwaysGib: 1;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    uint8 bAlwaysFullyGib: 1;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    uint8 bCanDropTail: 1;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    float DropTailChance;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    float DropTailDamageThresholdMin;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    float DropTailDamageThresholdMax;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    TSoftObjectPtr<UAnimMontage> LaunchAnimation;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    TSoftObjectPtr<UAnimMontage> FaceDownGetUpAnimation;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    TSoftObjectPtr<UAnimMontage> FaceUpGetUpAnimation;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    TArray<FOMDAIAttachments> WeaponAttachments;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    TArray<FOMDAIAttachments> ArmourAttachments;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    FOMDVectorLimits SkinColorAdjustmentLimits;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    int32 VoiceCount;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    uint8 bIsBoss: 1;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    uint8 bIsBarricadeDestroyer: 1;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    uint8 bIsFlyer: 1;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    TArray<FOMDTrapTriggerRules> TrapPlacementTriggerRules;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    TSoftObjectPtr<UPhysicsAsset> OptimizedPhysicsAsset;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    TSoftObjectPtr<UPhysicsAsset> SimplifiedPhysicsAsset;
    
public:
    FOMDAICharacterProto();
};

