#include "OMDInventoryItem.h"

UOMDInventoryItem::UOMDInventoryItem() {
    this->Attributes = NULL;
}

void UOMDInventoryItem::SetWarMachineType(uint8 Value) {
}

void UOMDInventoryItem::SetTriggerDurationModifier(float Value) {
}

void UOMDInventoryItem::SetTrapRemovalFXClassOverrride(TSoftClassPtr<AActor> trapRemovalFXClassOverride) {
}

void UOMDInventoryItem::SetTrapPlacementFXClassOverrride(TSoftClassPtr<AActor> trapPlacementFXClassOverride) {
}

void UOMDInventoryItem::SetTrapGaurdiansOverrride(TArray<FOMDSoftProtoPtr> trapGuardiansOverride) {
}

void UOMDInventoryItem::SetTrapClassOverrride(TSoftClassPtr<AActor> trapClassOverride) {
}

void UOMDInventoryItem::SetSightRadiusModifier(float Value) {
}

void UOMDInventoryItem::SetSecondaryLastActivationTime(float newValue) {
}

void UOMDInventoryItem::SetSecondaryCooldownMultiplier(float newValue) {
}

void UOMDInventoryItem::SetSecondaryCooldownModifier(float newValue) {
}

void UOMDInventoryItem::SetReticleWidget(TSoftClassPtr<UOMDReticleWidget> reticle) {
}

void UOMDInventoryItem::SetResetDelayModifier(float Value) {
}

void UOMDInventoryItem::SetReloadSpeedModifier(float Value, bool primary) {
}

void UOMDInventoryItem::SetPrimaryLastActivationTime(float newValue) {
}

void UOMDInventoryItem::SetPrimaryCooldownMultiplier(float newValue) {
}

void UOMDInventoryItem::SetPrimaryCooldownModifier(float newValue) {
}

void UOMDInventoryItem::SetPlacementType(uint8 Value) {
}

void UOMDInventoryItem::SetMaxChargesModifier(int32 Value) {
}

void UOMDInventoryItem::SetCooldownMultiplier(float Value) {
}

void UOMDInventoryItem::SetCooldownModifier(float Value) {
}

void UOMDInventoryItem::SetCollateralDamageValueModifier(float Value) {
}

void UOMDInventoryItem::SetCoinValueMultiplier(float Value) {
}

void UOMDInventoryItem::SetCoinValueModifier(int32 Value) {
}

void UOMDInventoryItem::SetBloomModifier(FOMDBloomSettings Value) {
}

void UOMDInventoryItem::SetBaseHealthMultiplier(float Value) {
}

void UOMDInventoryItem::SetBaseHealthModifier(float Value) {
}

void UOMDInventoryItem::SetAttachments(TArray<FOMDItemAttachment> Attachments) {
}

void UOMDInventoryItem::OnSecondaryWasActivated() {
}

void UOMDInventoryItem::OnPrimaryWasActivated() {
}

bool UOMDInventoryItem::IsWarScenarioExclusive() const {
    return false;
}

bool UOMDInventoryItem::IsUpgradeEquipped(FOMDSoftProtoPtr upgrade) const {
    return false;
}

bool UOMDInventoryItem::IsDevelopmentOnly() const {
    return false;
}

uint8 UOMDInventoryItem::GetWarMachineType() const {
    return 0;
}

float UOMDInventoryItem::GetTriggerDurationModifier() const {
    return 0.0f;
}

float UOMDInventoryItem::GetSightRadiusModifier() const {
    return 0.0f;
}

FOMDSoftProtoPtr UOMDInventoryItem::GetSecondaryTriggerEffect() const {
    return FOMDSoftProtoPtr{};
}

float UOMDInventoryItem::GetSecondaryLastActivationTime() const {
    return 0.0f;
}

float UOMDInventoryItem::GetSecondaryCooldownMultiplier() const {
    return 0.0f;
}

float UOMDInventoryItem::GetSecondaryCooldownModifier() const {
    return 0.0f;
}

float UOMDInventoryItem::GetSecondaryCooldown() {
    return 0.0f;
}

FOMDSoftProtoPtr UOMDInventoryItem::GetSecondaryAbility() const {
    return FOMDSoftProtoPtr{};
}

TSoftClassPtr<UOMDReticleWidget> UOMDInventoryItem::GetReticleWidgetClassPath() const {
    return NULL;
}

float UOMDInventoryItem::GetResetDelayModifier() const {
    return 0.0f;
}

float UOMDInventoryItem::GetReloadSpeedModifier(bool primary) const {
    return 0.0f;
}

FOMDSoftProtoPtr UOMDInventoryItem::GetPrimaryTriggerEffect() const {
    return FOMDSoftProtoPtr{};
}

float UOMDInventoryItem::GetPrimaryLastActivationTime() const {
    return 0.0f;
}

float UOMDInventoryItem::GetPrimaryCooldownMultiplier() const {
    return 0.0f;
}

float UOMDInventoryItem::GetPrimaryCooldownModifier() const {
    return 0.0f;
}

float UOMDInventoryItem::GetPrimaryCooldown() {
    return 0.0f;
}

FOMDSoftProtoPtr UOMDInventoryItem::GetPrimaryAbility() const {
    return FOMDSoftProtoPtr{};
}

EOMDPlayerMaterialModifiers UOMDInventoryItem::GetPlayerMaterialModifier() const {
    return EOMDPlayerMaterialModifiers::None;
}

uint8 UOMDInventoryItem::GetPlacementType() const {
    return 0;
}

int32 UOMDInventoryItem::GetMaxChargesModifier() const {
    return 0;
}

TSoftObjectPtr<UTexture2D> UOMDInventoryItem::GetIconTexture() const {
    return NULL;
}

void UOMDInventoryItem::GetEquippedUpgradesOfType(EUpgradeType Type, TArray<FOMDSoftProtoPtr>& Upgrades) const {
}

FText UOMDInventoryItem::GetDisplayName() const {
    return FText::GetEmpty();
}

FText UOMDInventoryItem::GetDescription() const {
    return FText::GetEmpty();
}

float UOMDInventoryItem::GetCooldownMultiplier() const {
    return 0.0f;
}

float UOMDInventoryItem::GetCooldownModifier() const {
    return 0.0f;
}

float UOMDInventoryItem::GetCollateralDamageValueModifier() const {
    return 0.0f;
}

float UOMDInventoryItem::GetCoinValueMultiplier() const {
    return 0.0f;
}

int32 UOMDInventoryItem::GetCoinValueModifier() const {
    return 0;
}

int32 UOMDInventoryItem::GetCoinValue() const {
    return 0;
}

FOMDBloomSettings UOMDInventoryItem::GetBloomModifier() const {
    return FOMDBloomSettings{};
}

float UOMDInventoryItem::GetBaseHealthMultiplier() const {
    return 0.0f;
}

float UOMDInventoryItem::GetBaseHealthModifier() const {
    return 0.0f;
}

TArray<FOMDItemAttachment> UOMDInventoryItem::GetAttachments() const {
    return TArray<FOMDItemAttachment>();
}


