#include "OMDTrapProto.h"

FOMDTrapProto::FOMDTrapProto() {
    this->PlacementFlags = 0;
    this->WarMachineFlags = 0;
    this->ActivationType = ETrapActivationType::Timed;
    this->TargetAcquisitionType = ETrapTargetAcquisitionType::Overlap;
    this->TickInterval = 0.00f;
    this->AlwaysGenerateOverlaps = false;
    this->bCanRotate = false;
    this->bFlatBounceNormal = false;
    this->bPlayerCharacterCollision = false;
    this->bAICharacterCollision = false;
    this->bResetOnGoBreaks = false;
    this->bHealOnStateReset = false;
    this->bActivateOnCooldownComplete = false;
    this->bDynamicTriggerVolume = false;
    this->bClampTriggerVolumeLength = false;
    this->DynamicTriggerVolumeAxis = EAxis::None;
    this->InteractionDistance = 0.00f;
    this->bShootable = false;
    this->bUsesCustomInteractionLogic = false;
    this->TriggerDelay = 0.00f;
    this->TriggerDuration = 0.00f;
    this->ResetDelay = 0.00f;
    this->cooldown = 0.00f;
    this->ChargeCooldown = 0.00f;
    this->MaxCharges = 0;
    this->CoinValue = 0;
    this->bDisableable = false;
    this->bDamageable = false;
    this->bHasAggroCap = false;
    this->BaseHealth = 0.00f;
    this->CollateralDamageValue = 0.00f;
    this->CausesCollateralDamage = false;
    this->DestroyedOnDeath = false;
    this->bDamageAffectsCoinValue = false;
    this->SightRadius = 0.00f;
    this->SightRadiusMinimum = 0.00f;
    this->SensedTargetSelectionType = ESensedTargetSelectionType::Random;
    this->bKeepTarget = false;
    this->bCanBeReset = false;
    this->bUseParentTrapsAttributes = false;
}

