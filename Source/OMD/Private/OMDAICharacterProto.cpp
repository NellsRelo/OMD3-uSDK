#include "OMDAICharacterProto.h"

FOMDAICharacterProto::FOMDAICharacterProto() {
    this->bShowMiniMapMarkerByDefault = false;
    this->BaseHealth = 0.00f;
    this->BaseSpeed = 0.00f;
    this->bRunsOverBarricades = false;
    this->bHasRunnerMovement = false;
    this->BaseCoinValue = 0;
    this->ScoreOnDeath = 0;
    this->LifeSpan = 0.00f;
    this->RiftPoints = 0;
    this->HeadshotDamageScale = 0.00f;
    this->bHasDamageCap = false;
    this->DamageCap = 0.00f;
    this->ChanceToDropPickup = 0.00f;
    this->LaunchCollisionDamageThreshold = 0.00f;
    this->LaunchCollisionBaseDamage = 0.00f;
    this->WeightClass = ECharacterWeightClass::Light;
    this->bEffectedByCyclopeanRaceAbility = false;
    this->AggroGroup = EAggroGroup::NormalMelee;
    this->AggroRadius = 0.00f;
    this->AggroDropDelay = 0.00f;
    this->bTargetClosestPlayerIfNoTarget = false;
    this->SpawnOnDeathCount = 0;
    this->bAlwaysGib = false;
    this->bAlwaysFullyGib = false;
    this->bCanDropTail = false;
    this->DropTailChance = 0.00f;
    this->DropTailDamageThresholdMin = 0.00f;
    this->DropTailDamageThresholdMax = 0.00f;
    this->VoiceCount = 0;
    this->bIsBoss = false;
    this->bIsBarricadeDestroyer = false;
    this->bIsFlyer = false;
}

