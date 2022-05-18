#pragma once
#include "CoreMinimal.h"
#include "OMDRandomModeMinionFloatModifier.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=Actor -FallbackName=Actor
#include "OMDRandomModeDropReplaceEntry.h"
#include "OMDRandomModeInventoryItemUpgradeModifier.h"
#include "OMDRandomModeMinionIntModifier.h"
#include "OMDRandomModeMinionStatusEffectModifier.h"
#include "EStatusEffectCategory.h"
#include "OMDDamageVulnerability.h"
#include "EAggroGroup.h"
#include "OMDSoftProtoPtr.h"
#include "OMDRandomModeMinionAbilityList.h"
#include "OMDRandomModeAbilityRestoredOnHit.h"
#include "OMDRandomModeState.generated.h"

class UOMDDamageType;

UCLASS()
class OMD_API AOMDRandomModeState : public AActor {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated)
    float HeadshotDamageModifier;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated)
    float HeadshotHealAmount;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated)
    float HeadshotRestoreManaAmount;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated)
    int32 HeadshotAdditionalCoinAmount;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated)
    uint8 bHeadshotsKillsGuaranteeDrops: 1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated)
    float PickupDropChanceModifier;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated)
    TArray<FOMDRandomModeDropReplaceEntry> DropReplaceModifiers;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated)
    float ComboRewardCoinModifier;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated)
    float KillstreakRewardCoinModifier;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated)
    int32 InitialAdditionalCoin;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated)
    float AdditionalKillstreakDuration;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated)
    float PlayerManaRegenRateModifier;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated)
    float PlayerMaxManaModifier;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated)
    float PlayerMaxHealthModifier;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated)
    float PlayerSpeedModifier;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated)
    uint8 bMinionsBleedOnHitPlayer: 1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated)
    uint8 bRiftRushIsEnabled: 1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated)
    uint8 bUseRandomDamageTypePulseOnPlayer: 1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated)
    uint8 bUseConstantPhysicalPulseOnPlayer: 1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated)
    TArray<FOMDRandomModeMinionFloatModifier> MinionHealthIndividualModifiers;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated)
    float MinionHealthModifier;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated)
    TArray<FOMDRandomModeMinionFloatModifier> MinionMoveSpeedIndividualModifiers;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated)
    float MinionMoveSpeedModifier;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated)
    TArray<FOMDRandomModeMinionFloatModifier> MinionDamageIndividualModifiers;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated)
    float MinionDamageModifier;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated)
    TArray<FOMDRandomModeMinionFloatModifier> MinionAbilityCooldownIndividualModifiers;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated)
    TArray<FOMDRandomModeMinionIntModifier> AdditionalMinionsPerWave;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated)
    uint8 bUseMinionRiftPointOverride: 1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated)
    int32 MinionRiftPointOverride;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated)
    TArray<EStatusEffectCategory> AllMinionStatusEffectImmunities;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated)
    TArray<TSoftClassPtr<UOMDDamageType>> AllMinionDamageTypeImmunities;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated)
    float RiftRushDurationModifier;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated)
    uint8 bMinionsAlwaysHaveRiftRush: 1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated)
    uint8 bPlayerHealthIsAlwaysOne: 1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated)
    int32 RiftPointsLostOnPlayerDeath;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated)
    TArray<FOMDRandomModeInventoryItemUpgradeModifier> InventoryItemUpgrades;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated)
    TArray<FOMDRandomModeMinionStatusEffectModifier> AllMinionStatusEffectModifiers;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated)
    TArray<FOMDDamageVulnerability> AllMinionDamageVulnerabilityModifiers;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated)
    int32 GrantedCoinsPerInterval;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated)
    float GrantedCoinsInterval;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated)
    int32 LoadoutHandicap;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated)
    int32 WarMachineLoadoutHandicap;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    TMap<EAggroGroup, int32> AggroGroupCanIgnore;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated)
    TArray<FOMDSoftProtoPtr> PlayerOnDamageDealtAbilitiesProtoData;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    TMap<FOMDSoftProtoPtr, FOMDRandomModeMinionAbilityList> MinionOnDeathAbilitiesProtoData;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated)
    TArray<FOMDRandomModeMinionFloatModifier> MinionRangeIndividualModifiers;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated)
    TArray<FOMDRandomModeAbilityRestoredOnHit> AbilityRestoreHealthOnHitProtoData;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated)
    TArray<FOMDRandomModeAbilityRestoredOnHit> AbilityRestoreManaOnHitProtoData;
    
    AOMDRandomModeState();
    virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;
    
};

