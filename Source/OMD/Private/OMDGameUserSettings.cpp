#include "OMDGameUserSettings.h"

UOMDGameUserSettings::UOMDGameUserSettings() {
    this->bUseDynamicResolution = true;
    this->LookSensitivityX = 0.25f;
    this->LookSensitivityY = 0.25f;
    this->TargetingSensitivity = 0.50f;
    this->FieldOfView = 80.00f;
    this->bInvertView = false;
    this->bInvertViewHorizontally = false;
    this->bHoldToSprint = false;
    this->bLinkToExternalAccount = false;
    this->bShowTrapGrid = true;
    this->bSwitchToWeaponOnTrinketActivation = true;
    this->bShowParTime = true;
    this->bRequireKeyPressAfterLoadScreen = false;
    this->bAllowForceFeedback = true;
    this->bUsingDefaultAxisBinding = true;
    this->LoadoutStyle = EOMDLoadoutStyle::Flat;
    this->CameraOffset = EOMDCameraStyle::Center;
    this->bGoreVisibility = true;
    this->bShowNearbyEnemyHealthBars = false;
    this->bEnableStreamConnectBroadcast = true;
    this->bLeaderboardOptOut = true;
    this->bPlayScenarioDialogue = true;
    this->bShowClosedCaptioning = true;
    this->MasterVolumeModifier = 0.94f;
    this->MusicVolumeModifier = 0.13f;
    this->EffectsVolumeModifier = 0.03f;
    this->VoiceVolumeModifier = 0.00f;
    this->bMasterVolumeMuted = false;
    this->bMusicVolumeMuted = false;
    this->bEffectsVolumeMuted = false;
    this->bVoiceVolumeMuted = false;
    this->Gamma_V2 = 1.00f;
    this->GammaHDR_V2 = 1.00f;
    this->ShadowsGamma = 1.00f;
    this->MidtonesGamma = 1.00f;
    this->HighlightsGamma = 1.00f;
    this->SafeZoneRatio = 1.00f;
    this->bHasSetFrameRateLimit = true;
}

void UOMDGameUserSettings::SetVoiceVolumeMuted(bool bMuted, bool bApplyImmediately) {
}

void UOMDGameUserSettings::SetVoiceVolumeModifier(float Value, bool bApplyImmediately) {
}

void UOMDGameUserSettings::SetViewInvertedHorizontally(bool Value) {
}

void UOMDGameUserSettings::SetViewInverted(bool Value) {
}

void UOMDGameUserSettings::SetUsingDefaultAxisBinding(bool Value) {
}

void UOMDGameUserSettings::SetTrapGridVisible(bool Value) {
}

void UOMDGameUserSettings::SetTargetingSensitivity(float Value) {
}

void UOMDGameUserSettings::SetSwitchToWeaponOnTrinketActivation(bool Value) {
}

void UOMDGameUserSettings::SetShowParTime(bool Value) {
}

void UOMDGameUserSettings::SetShowNearbyEnemyHealthBars(bool Value) {
}

void UOMDGameUserSettings::SetShowClosedCaptioning(bool Value) {
}

void UOMDGameUserSettings::SetShadowsGamma(float Value) {
}

void UOMDGameUserSettings::SetRequireKeyPressAfterLoadScreen(bool Value) {
}

void UOMDGameUserSettings::SetPlayScenarioDialogue(bool Value) {
}

void UOMDGameUserSettings::SetMusicVolumeMuted(bool bMuted, bool bApplyImmediately) {
}

void UOMDGameUserSettings::SetMusicVolumeModifier(float Value, bool bApplyImmediately) {
}

void UOMDGameUserSettings::SetMidtonesGamma(float Value) {
}

void UOMDGameUserSettings::SetMasterVolumeMuted(bool bMuted, bool bApplyImmediately) {
}

void UOMDGameUserSettings::SetMasterVolumeModifier(float Value, bool bApplyImmediately) {
}

void UOMDGameUserSettings::SetLookSensitivityY(float Value) {
}

void UOMDGameUserSettings::SetLookSensitivityX(float Value) {
}

void UOMDGameUserSettings::SetLoadoutStyle(EOMDLoadoutStyle Value) {
}

void UOMDGameUserSettings::SetLinkToExternalAccount(bool Value) {
}

void UOMDGameUserSettings::SetLeaderboardOptOut(bool Value) {
}

void UOMDGameUserSettings::SetHoldToSprint(bool Value) {
}

void UOMDGameUserSettings::SetHighlightsGamma(float Value) {
}

void UOMDGameUserSettings::SetGoreVisibility(bool Value) {
}

void UOMDGameUserSettings::SetGammaHDR(float Value) {
}

void UOMDGameUserSettings::SetGamma(float Value) {
}

void UOMDGameUserSettings::SetGameplaySettingsToDefaults() {
}

void UOMDGameUserSettings::SetGameplayKeyBindingsToDefaults() {
}

bool UOMDGameUserSettings::SetGameplayKeyBinding(FName ActionName, FKey Key, bool isGameplayBinding) {
    return false;
}

void UOMDGameUserSettings::SetFieldOfView(float Value) {
}

void UOMDGameUserSettings::SetEnableStreamConnectBroadcast(bool Value) {
}

void UOMDGameUserSettings::SetEffectsVolumeMuted(bool bMuted, bool bApplyImmediately) {
}

void UOMDGameUserSettings::SetEffectsVolumeModifier(float Value, bool bApplyImmediately) {
}

void UOMDGameUserSettings::SetCameraStyle(EOMDCameraStyle Value) {
}

bool UOMDGameUserSettings::SetAxisKeyMapping(FName axisName, FKey Key, float Scale) {
    return false;
}

void UOMDGameUserSettings::SetAudioSettingsToDefaults() {
}

void UOMDGameUserSettings::SetAllowForceFeedback(bool Value) {
}

bool UOMDGameUserSettings::IsViewInvertedHorizontally() const {
    return false;
}

bool UOMDGameUserSettings::IsViewInverted() const {
    return false;
}

bool UOMDGameUserSettings::IsTrapGridVisible() const {
    return false;
}

bool UOMDGameUserSettings::GetVoiceVolumeMuted() const {
    return false;
}

float UOMDGameUserSettings::GetVoiceVolumeModifier() const {
    return 0.0f;
}

bool UOMDGameUserSettings::GetUsingDefaultAxisBinding() const {
    return false;
}

float UOMDGameUserSettings::GetTargetingSensitivity() const {
    return 0.0f;
}

bool UOMDGameUserSettings::GetSwitchToWeaponOnTrinketActivation() const {
    return false;
}

bool UOMDGameUserSettings::GetShowParTime() const {
    return false;
}

bool UOMDGameUserSettings::GetShowNearbyEnemyHealthBars() const {
    return false;
}

bool UOMDGameUserSettings::GetShowClosedCaptioning() const {
    return false;
}

float UOMDGameUserSettings::GetShadowsGamma() const {
    return 0.0f;
}

bool UOMDGameUserSettings::GetRequireKeyPressAfterLoadScreen() const {
    return false;
}

bool UOMDGameUserSettings::GetPlayScenarioDialogue() const {
    return false;
}

bool UOMDGameUserSettings::GetMusicVolumeMuted() const {
    return false;
}

float UOMDGameUserSettings::GetMusicVolumeModifier() const {
    return 0.0f;
}

float UOMDGameUserSettings::GetMidtonesGamma() const {
    return 0.0f;
}

bool UOMDGameUserSettings::GetMasterVolumeMuted() const {
    return false;
}

float UOMDGameUserSettings::GetMasterVolumeModifier() const {
    return 0.0f;
}

float UOMDGameUserSettings::GetLookSensitivityY() const {
    return 0.0f;
}

float UOMDGameUserSettings::GetLookSensitivityX() const {
    return 0.0f;
}

EOMDLoadoutStyle UOMDGameUserSettings::GetLoadoutStyle() const {
    return EOMDLoadoutStyle::Flat;
}

bool UOMDGameUserSettings::GetLinkToExternalAccount() const {
    return false;
}

bool UOMDGameUserSettings::GetLeaderboardOptOut() const {
    return false;
}

bool UOMDGameUserSettings::GetHoldToSprint() const {
    return false;
}

float UOMDGameUserSettings::GetHighlightsGamma() const {
    return 0.0f;
}

bool UOMDGameUserSettings::GetGoreVisibility() const {
    return false;
}

float UOMDGameUserSettings::GetGammaHDR() const {
    return 0.0f;
}

float UOMDGameUserSettings::GetGamma() const {
    return 0.0f;
}

void UOMDGameUserSettings::GetGameplayKeyBinding(FName ActionName, FInputActionKeyMapping& keyBinding, bool gamepadKey) const {
}

float UOMDGameUserSettings::GetFieldOfView() const {
    return 0.0f;
}

bool UOMDGameUserSettings::GetEnableStreamConnectBroadcast() const {
    return false;
}

bool UOMDGameUserSettings::GetEffectsVolumeMuted() const {
    return false;
}

float UOMDGameUserSettings::GetEffectsVolumeModifier() const {
    return 0.0f;
}

TArray<FInputActionKeyMapping> UOMDGameUserSettings::GetDefaultGameplayKeyBindings() const {
    return TArray<FInputActionKeyMapping>();
}

TArray<FInputAxisKeyMapping> UOMDGameUserSettings::GetDefaultGameplayAxisMappings() const {
    return TArray<FInputAxisKeyMapping>();
}

EOMDCameraStyle UOMDGameUserSettings::GetCameraStyle() const {
    return EOMDCameraStyle::Left;
}

void UOMDGameUserSettings::GetAxisKeyMapping(FName ActionName, float Scale, FInputAxisKeyMapping& keyBinding, bool gamepadKey) const {
}

bool UOMDGameUserSettings::GetAllowForceFeedback() const {
    return false;
}


