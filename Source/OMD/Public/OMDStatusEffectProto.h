#pragma once
#include "CoreMinimal.h"
#include "OMDProtoBase.h"
#include "EDeathAnimationCategory.h"
#include "EStatusEffectCategory.h"
#include "EGenericTeams.h"
#include "GenericTeamAgentInterface.h"
#include "OMDDamageVulnerability.h"
#include "EStatusEffectToggleID.h"
#include "OMDStatusEffectProto.generated.h"

class UBehaviorTree;
class UOMDStatusEffect;
class UOMDDamageType;
class UOMDStatsProcessor;

USTRUCT(BlueprintType)
struct OMD_API FOMDStatusEffectProto : public FOMDProtoBase {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    TSoftClassPtr<UOMDStatusEffect> StatusEffectClass;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    EStatusEffectCategory VisualCategory;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    bool bIsUnique;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    bool bIsPermanent;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    bool bIsHardCrowdControl;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    bool bCanGiveComboPoint;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    EDeathAnimationCategory DeathAnimationCategory;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    TSoftObjectPtr<UBehaviorTree> AIBehavior;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    float DefaultDuration;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    TArray<EGenericTeams> TeamsToIgnore;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    TArray<TEnumAsByte<ETeamAttitude::Type>> AttitudesToIgnore;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    float MovementModValue;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    uint8 bContinuousDamage: 1;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    float DOTInterval;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    float DamagePerTick;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    TSoftClassPtr<UOMDDamageType> DamageType;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    uint8 bContinuousMana: 1;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    float ManaInterval;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    float ManaPerTick;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    TArray<FOMDDamageVulnerability> Vulnerabilties;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    TArray<EStatusEffectCategory> VisualCategoryImmunities;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    int32 AnimationWeight;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    int32 VFXWeight;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    TSoftClassPtr<UOMDStatsProcessor> StatsProcessorClass;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    uint8 bUsesToggleID: 1;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    EStatusEffectToggleID ToggleID;
    
public:
    FOMDStatusEffectProto();
};

