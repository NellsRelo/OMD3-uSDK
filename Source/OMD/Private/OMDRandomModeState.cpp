#include "OMDRandomModeState.h"
#include "Net/UnrealNetwork.h"

AOMDRandomModeState::AOMDRandomModeState(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->bAlwaysRelevant = true;
    this->bReplicates = true;
    const FProperty* p_RemoteRole = GetClass()->FindPropertyByName("RemoteRole");
    (*p_RemoteRole->ContainerPtrToValuePtr<TEnumAsByte<ENetRole>>(this)) = ROLE_SimulatedProxy;
    this->HeadshotDamageModifier = 1.00f;
    this->HeadshotHealAmount = 0.00f;
    this->HeadshotRestoreManaAmount = 0.00f;
    this->HeadshotAdditionalCoinAmount = 0;
    this->bHeadshotsKillsGuaranteeDrops = false;
    this->PickupDropChanceModifier = 1.00f;
    this->ComboRewardCoinModifier = 1.00f;
    this->KillstreakRewardCoinModifier = 1.00f;
    this->InitialAdditionalCoin = 0;
    this->AdditionalKillstreakDuration = 0.00f;
    this->PlayerManaRegenRateModifier = 1.00f;
    this->PlayerMaxManaModifier = 1.00f;
    this->PlayerMaxHealthModifier = 1.00f;
    this->PlayerSpeedModifier = 1.00f;
    this->bMinionsBleedOnHitPlayer = false;
    this->bRiftRushIsEnabled = true;
    this->bUseRandomDamageTypePulseOnPlayer = false;
    this->bUseConstantPhysicalPulseOnPlayer = false;
    this->MinionHealthModifier = 1.00f;
    this->MinionMoveSpeedModifier = 1.00f;
    this->MinionDamageModifier = 1.00f;
    this->bUseMinionRiftPointOverride = false;
    this->MinionRiftPointOverride = 0;
    this->RiftRushDurationModifier = 1.00f;
    this->bMinionsAlwaysHaveRiftRush = false;
    this->bPlayerHealthIsAlwaysOne = false;
    this->RiftPointsLostOnPlayerDeath = 0;
    this->GrantedCoinsPerInterval = 0;
    this->GrantedCoinsInterval = 5.00f;
    this->LoadoutHandicap = 0;
    this->WarMachineLoadoutHandicap = 0;
}

void AOMDRandomModeState::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const {
    Super::GetLifetimeReplicatedProps(OutLifetimeProps);
    
    DOREPLIFETIME(AOMDRandomModeState, HeadshotDamageModifier);
    DOREPLIFETIME(AOMDRandomModeState, HeadshotHealAmount);
    DOREPLIFETIME(AOMDRandomModeState, HeadshotRestoreManaAmount);
    DOREPLIFETIME(AOMDRandomModeState, HeadshotAdditionalCoinAmount);
    DOREPLIFETIME(AOMDRandomModeState, bHeadshotsKillsGuaranteeDrops);
    DOREPLIFETIME(AOMDRandomModeState, PickupDropChanceModifier);
    DOREPLIFETIME(AOMDRandomModeState, DropReplaceModifiers);
    DOREPLIFETIME(AOMDRandomModeState, ComboRewardCoinModifier);
    DOREPLIFETIME(AOMDRandomModeState, KillstreakRewardCoinModifier);
    DOREPLIFETIME(AOMDRandomModeState, InitialAdditionalCoin);
    DOREPLIFETIME(AOMDRandomModeState, AdditionalKillstreakDuration);
    DOREPLIFETIME(AOMDRandomModeState, PlayerManaRegenRateModifier);
    DOREPLIFETIME(AOMDRandomModeState, PlayerMaxManaModifier);
    DOREPLIFETIME(AOMDRandomModeState, PlayerMaxHealthModifier);
    DOREPLIFETIME(AOMDRandomModeState, PlayerSpeedModifier);
    DOREPLIFETIME(AOMDRandomModeState, bMinionsBleedOnHitPlayer);
    DOREPLIFETIME(AOMDRandomModeState, bRiftRushIsEnabled);
    DOREPLIFETIME(AOMDRandomModeState, bUseRandomDamageTypePulseOnPlayer);
    DOREPLIFETIME(AOMDRandomModeState, bUseConstantPhysicalPulseOnPlayer);
    DOREPLIFETIME(AOMDRandomModeState, MinionHealthIndividualModifiers);
    DOREPLIFETIME(AOMDRandomModeState, MinionHealthModifier);
    DOREPLIFETIME(AOMDRandomModeState, MinionMoveSpeedIndividualModifiers);
    DOREPLIFETIME(AOMDRandomModeState, MinionMoveSpeedModifier);
    DOREPLIFETIME(AOMDRandomModeState, MinionDamageIndividualModifiers);
    DOREPLIFETIME(AOMDRandomModeState, MinionDamageModifier);
    DOREPLIFETIME(AOMDRandomModeState, MinionAbilityCooldownIndividualModifiers);
    DOREPLIFETIME(AOMDRandomModeState, AdditionalMinionsPerWave);
    DOREPLIFETIME(AOMDRandomModeState, bUseMinionRiftPointOverride);
    DOREPLIFETIME(AOMDRandomModeState, MinionRiftPointOverride);
    DOREPLIFETIME(AOMDRandomModeState, AllMinionStatusEffectImmunities);
    DOREPLIFETIME(AOMDRandomModeState, AllMinionDamageTypeImmunities);
    DOREPLIFETIME(AOMDRandomModeState, RiftRushDurationModifier);
    DOREPLIFETIME(AOMDRandomModeState, bMinionsAlwaysHaveRiftRush);
    DOREPLIFETIME(AOMDRandomModeState, bPlayerHealthIsAlwaysOne);
    DOREPLIFETIME(AOMDRandomModeState, RiftPointsLostOnPlayerDeath);
    DOREPLIFETIME(AOMDRandomModeState, InventoryItemUpgrades);
    DOREPLIFETIME(AOMDRandomModeState, AllMinionStatusEffectModifiers);
    DOREPLIFETIME(AOMDRandomModeState, AllMinionDamageVulnerabilityModifiers);
    DOREPLIFETIME(AOMDRandomModeState, GrantedCoinsPerInterval);
    DOREPLIFETIME(AOMDRandomModeState, GrantedCoinsInterval);
    DOREPLIFETIME(AOMDRandomModeState, LoadoutHandicap);
    DOREPLIFETIME(AOMDRandomModeState, WarMachineLoadoutHandicap);
    DOREPLIFETIME(AOMDRandomModeState, PlayerOnDamageDealtAbilitiesProtoData);
    DOREPLIFETIME(AOMDRandomModeState, MinionRangeIndividualModifiers);
    DOREPLIFETIME(AOMDRandomModeState, AbilityRestoreHealthOnHitProtoData);
    DOREPLIFETIME(AOMDRandomModeState, AbilityRestoreManaOnHitProtoData);
}


