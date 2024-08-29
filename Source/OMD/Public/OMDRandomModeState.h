#pragma once
#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "EAggroGroup.h"
#include "EStatusEffectCategory.h"
#include "OMDDamageVulnerability.h"
#include "OMDRandomModeAbilityRestoredOnHit.h"
#include "OMDRandomModeDropReplaceEntry.h"
#include "OMDRandomModeInventoryItemUpgradeModifier.h"
#include "OMDRandomModeMinionAbilityList.h"
#include "OMDRandomModeMinionFloatModifier.h"
#include "OMDRandomModeMinionIntModifier.h"
#include "OMDRandomModeMinionStatusEffectModifier.h"
#include "OMDSoftProtoPtr.h"
#include "OMDRandomModeState.generated.h"

class UOMDDamageType;

UCLASS(Blueprintable)
class OMD_API AOMDRandomModeState : public AActor {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated, meta=(AllowPrivateAccess=true))
    float HeadshotDamageModifier;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated, meta=(AllowPrivateAccess=true))
    float HeadshotHealAmount;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated, meta=(AllowPrivateAccess=true))
    float HeadshotRestoreManaAmount;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated, meta=(AllowPrivateAccess=true))
    int32 HeadshotAdditionalCoinAmount;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated, meta=(AllowPrivateAccess=true))
    uint8 bHeadshotsKillsGuaranteeDrops: 1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated, meta=(AllowPrivateAccess=true))
    float PickupDropChanceModifier;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated, meta=(AllowPrivateAccess=true))
    TArray<FOMDRandomModeDropReplaceEntry> DropReplaceModifiers;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated, meta=(AllowPrivateAccess=true))
    float ComboRewardCoinModifier;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated, meta=(AllowPrivateAccess=true))
    float KillstreakRewardCoinModifier;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated, meta=(AllowPrivateAccess=true))
    int32 InitialAdditionalCoin;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated, meta=(AllowPrivateAccess=true))
    float AdditionalKillstreakDuration;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated, meta=(AllowPrivateAccess=true))
    float PlayerManaRegenRateModifier;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated, meta=(AllowPrivateAccess=true))
    float PlayerMaxManaModifier;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated, meta=(AllowPrivateAccess=true))
    float PlayerMaxHealthModifier;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated, meta=(AllowPrivateAccess=true))
    float PlayerSpeedModifier;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated, meta=(AllowPrivateAccess=true))
    uint8 bMinionsBleedOnHitPlayer: 1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated, meta=(AllowPrivateAccess=true))
    uint8 bRiftRushIsEnabled: 1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated, meta=(AllowPrivateAccess=true))
    uint8 bUseRandomDamageTypePulseOnPlayer: 1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated, meta=(AllowPrivateAccess=true))
    uint8 bUseConstantPhysicalPulseOnPlayer: 1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated, meta=(AllowPrivateAccess=true))
    TArray<FOMDRandomModeMinionFloatModifier> MinionHealthIndividualModifiers;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated, meta=(AllowPrivateAccess=true))
    float MinionHealthModifier;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated, meta=(AllowPrivateAccess=true))
    TArray<FOMDRandomModeMinionFloatModifier> MinionMoveSpeedIndividualModifiers;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated, meta=(AllowPrivateAccess=true))
    float MinionMoveSpeedModifier;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated, meta=(AllowPrivateAccess=true))
    TArray<FOMDRandomModeMinionFloatModifier> MinionDamageIndividualModifiers;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated, meta=(AllowPrivateAccess=true))
    float MinionDamageModifier;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated, meta=(AllowPrivateAccess=true))
    TArray<FOMDRandomModeMinionFloatModifier> MinionAbilityCooldownIndividualModifiers;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated, meta=(AllowPrivateAccess=true))
    TArray<FOMDRandomModeMinionIntModifier> AdditionalMinionsPerWave;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated, meta=(AllowPrivateAccess=true))
    uint8 bUseMinionRiftPointOverride: 1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated, meta=(AllowPrivateAccess=true))
    int32 MinionRiftPointOverride;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated, meta=(AllowPrivateAccess=true))
    TArray<EStatusEffectCategory> AllMinionStatusEffectImmunities;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated, meta=(AllowPrivateAccess=true))
    TArray<TSoftClassPtr<UOMDDamageType>> AllMinionDamageTypeImmunities;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated, meta=(AllowPrivateAccess=true))
    float RiftRushDurationModifier;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated, meta=(AllowPrivateAccess=true))
    uint8 bMinionsAlwaysHaveRiftRush: 1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated, meta=(AllowPrivateAccess=true))
    uint8 bPlayerHealthIsAlwaysOne: 1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated, meta=(AllowPrivateAccess=true))
    int32 RiftPointsLostOnPlayerDeath;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated, meta=(AllowPrivateAccess=true))
    TArray<FOMDRandomModeInventoryItemUpgradeModifier> InventoryItemUpgrades;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated, meta=(AllowPrivateAccess=true))
    TArray<FOMDRandomModeMinionStatusEffectModifier> AllMinionStatusEffectModifiers;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated, meta=(AllowPrivateAccess=true))
    TArray<FOMDDamageVulnerability> AllMinionDamageVulnerabilityModifiers;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated, meta=(AllowPrivateAccess=true))
    int32 GrantedCoinsPerInterval;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated, meta=(AllowPrivateAccess=true))
    float GrantedCoinsInterval;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated, meta=(AllowPrivateAccess=true))
    int32 LoadoutHandicap;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated, meta=(AllowPrivateAccess=true))
    int32 WarMachineLoadoutHandicap;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<EAggroGroup, int32> AggroGroupCanIgnore;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated, meta=(AllowPrivateAccess=true))
    TArray<FOMDSoftProtoPtr> PlayerOnDamageDealtAbilitiesProtoData;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<FOMDSoftProtoPtr, FOMDRandomModeMinionAbilityList> MinionOnDeathAbilitiesProtoData;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated, meta=(AllowPrivateAccess=true))
    TArray<FOMDRandomModeMinionFloatModifier> MinionRangeIndividualModifiers;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated, meta=(AllowPrivateAccess=true))
    TArray<FOMDRandomModeAbilityRestoredOnHit> AbilityRestoreHealthOnHitProtoData;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated, meta=(AllowPrivateAccess=true))
    TArray<FOMDRandomModeAbilityRestoredOnHit> AbilityRestoreManaOnHitProtoData;
    
    AOMDRandomModeState(const FObjectInitializer& ObjectInitializer);

    virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;

};

