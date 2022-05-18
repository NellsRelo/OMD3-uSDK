#pragma once
#include "CoreMinimal.h"
#include "OMDMapColors.h"
#include "GameFramework/GameUserSettings.h"
#include "EOMDLoadoutStyle.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=InputCore -ObjectName=Key -FallbackName=Key
#include "EOMDCameraStyle.h"
#include "GameFramework/PlayerInput.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=InputActionKeyMapping -FallbackName=InputActionKeyMapping
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=InputAxisKeyMapping -FallbackName=InputAxisKeyMapping
#include "OMDGameUserSettings.generated.h"

class USoundClass;
class USoundMix;

UCLASS()
class OMD_API UOMDGameUserSettings : public UGameUserSettings {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(Config)
    float LookSensitivityX;
    
    UPROPERTY(Config)
    float LookSensitivityY;
    
    UPROPERTY(Config)
    float TargetingSensitivity;
    
    UPROPERTY(Config)
    float FieldOfView;
    
    UPROPERTY(Config)
    bool bInvertView;
    
    UPROPERTY(Config)
    bool bInvertViewHorizontally;
    
    UPROPERTY(Config)
    bool bHoldToSprint;
    
    UPROPERTY(Config)
    bool bShowTrapGrid;
    
    UPROPERTY(Config)
    bool bSwitchToWeaponOnTrinketActivation;
    
    UPROPERTY(Config)
    bool bShowParTime;
    
    UPROPERTY(Config)
    bool bRequireKeyPressAfterLoadScreen;
    
    UPROPERTY(Config)
    bool bAllowForceFeedback;
    
    UPROPERTY(Config)
    bool bUsingDefaultAxisBinding;
    
    UPROPERTY(Config)
    EOMDLoadoutStyle LoadoutStyle;
    
    UPROPERTY(Config)
    EOMDCameraStyle CameraOffset;
    
    UPROPERTY(Config)
    bool bGoreVisibility;
    
    UPROPERTY(Config)
    bool bShowNearbyEnemyHealthBars;
    
    UPROPERTY(Config)
    bool bEnableStreamConnectBroadcast;
    
    UPROPERTY(Config)
    bool bLeaderboardOptOut;
    
public:
    UPROPERTY(Config)
    FOMDMapColors MapColors;
    
protected:
    UPROPERTY(Config)
    bool bPlayScenarioDialogue;
    
    UPROPERTY(Config)
    bool bShowClosedCaptioning;
    
    UPROPERTY(Config)
    float MasterVolumeModifier;
    
    UPROPERTY(Config)
    float MusicVolumeModifier;
    
    UPROPERTY(Config)
    float EffectsVolumeModifier;
    
    UPROPERTY(Config)
    float VoiceVolumeModifier;
    
    UPROPERTY(Config)
    bool bMasterVolumeMuted;
    
    UPROPERTY(Config)
    bool bMusicVolumeMuted;
    
    UPROPERTY(Config)
    bool bEffectsVolumeMuted;
    
    UPROPERTY(Config)
    bool bVoiceVolumeMuted;
    
private:
    UPROPERTY()
    USoundMix* OptionsMix;
    
    UPROPERTY()
    USoundClass* MasterClass;
    
    UPROPERTY()
    USoundClass* MusicClass;
    
    UPROPERTY()
    USoundClass* EffectsClass;
    
    UPROPERTY()
    USoundClass* VoiceClass;
    
    UPROPERTY(Config)
    float Gamma_V2;
    
    UPROPERTY(Config)
    float GammaHDR_V2;
    
    UPROPERTY(Config)
    float ShadowsGamma;
    
    UPROPERTY(Config)
    float MidtonesGamma;
    
    UPROPERTY(Config)
    float HighlightsGamma;
    
    UPROPERTY(Config)
    float SafeZoneRatio;
    
    UPROPERTY(Config)
    bool bHasSetFrameRateLimit;
    
public:
    UOMDGameUserSettings();
    UFUNCTION(BlueprintCallable)
    void SetVoiceVolumeMuted(bool bMuted, bool bApplyImmediately);
    
    UFUNCTION(BlueprintCallable)
    void SetVoiceVolumeModifier(float Value, bool bApplyImmediately);
    
    UFUNCTION(BlueprintCallable)
    void SetViewInvertedHorizontally(bool Value);
    
    UFUNCTION(BlueprintCallable)
    void SetViewInverted(bool Value);
    
    UFUNCTION(BlueprintCallable)
    void SetUsingDefaultAxisBinding(bool Value);
    
    UFUNCTION(BlueprintCallable)
    void SetTrapGridVisible(bool Value);
    
    UFUNCTION(BlueprintCallable)
    void SetTargetingSensitivity(float Value);
    
    UFUNCTION(BlueprintCallable)
    void SetSwitchToWeaponOnTrinketActivation(bool Value);
    
    UFUNCTION(BlueprintCallable)
    void SetShowParTime(bool Value);
    
    UFUNCTION(BlueprintCallable)
    void SetShowNearbyEnemyHealthBars(bool Value);
    
    UFUNCTION(BlueprintCallable)
    void SetShowClosedCaptioning(bool Value);
    
    UFUNCTION(BlueprintCallable)
    void SetShadowsGamma(float Value);
    
    UFUNCTION(BlueprintCallable)
    void SetRequireKeyPressAfterLoadScreen(bool Value);
    
    UFUNCTION(BlueprintCallable)
    void SetPlayScenarioDialogue(bool Value);
    
    UFUNCTION(BlueprintCallable)
    void SetMusicVolumeMuted(bool bMuted, bool bApplyImmediately);
    
    UFUNCTION(BlueprintCallable)
    void SetMusicVolumeModifier(float Value, bool bApplyImmediately);
    
    UFUNCTION(BlueprintCallable)
    void SetMidtonesGamma(float Value);
    
    UFUNCTION(BlueprintCallable)
    void SetMasterVolumeMuted(bool bMuted, bool bApplyImmediately);
    
    UFUNCTION(BlueprintCallable)
    void SetMasterVolumeModifier(float Value, bool bApplyImmediately);
    
    UFUNCTION(BlueprintCallable)
    void SetLookSensitivityY(float Value);
    
    UFUNCTION(BlueprintCallable)
    void SetLookSensitivityX(float Value);
    
    UFUNCTION(BlueprintCallable)
    void SetLoadoutStyle(EOMDLoadoutStyle Value);
    
    UFUNCTION(BlueprintCallable)
    void SetLeaderboardOptOut(bool Value);
    
    UFUNCTION(BlueprintCallable)
    void SetHoldToSprint(bool Value);
    
    UFUNCTION(BlueprintCallable)
    void SetHighlightsGamma(float Value);
    
    UFUNCTION(BlueprintCallable)
    void SetGoreVisibility(bool Value);
    
    UFUNCTION(BlueprintCallable)
    void SetGammaHDR(float Value);
    
    UFUNCTION(BlueprintCallable)
    void SetGamma(float Value);
    
    UFUNCTION(BlueprintCallable)
    void SetGameplaySettingsToDefaults();
    
    UFUNCTION(BlueprintCallable)
    void SetGameplayKeyBindingsToDefaults();
    
    UFUNCTION(BlueprintCallable)
    bool SetGameplayKeyBinding(FName ActionName, FKey Key, bool isGameplayBinding);
    
    UFUNCTION(BlueprintCallable)
    void SetFieldOfView(float Value);
    
    UFUNCTION(BlueprintCallable)
    void SetEnableStreamConnectBroadcast(bool Value);
    
    UFUNCTION(BlueprintCallable)
    void SetEffectsVolumeMuted(bool bMuted, bool bApplyImmediately);
    
    UFUNCTION(BlueprintCallable)
    void SetEffectsVolumeModifier(float Value, bool bApplyImmediately);
    
    UFUNCTION(BlueprintCallable)
    void SetCameraStyle(EOMDCameraStyle Value);
    
    UFUNCTION(BlueprintCallable)
    bool SetAxisKeyMapping(FName axisName, FKey Key, float Scale);
    
    UFUNCTION(BlueprintCallable)
    void SetAudioSettingsToDefaults();
    
    UFUNCTION(BlueprintCallable)
    void SetAllowForceFeedback(bool Value);
    
    UFUNCTION(BlueprintPure)
    bool IsViewInvertedHorizontally() const;
    
    UFUNCTION(BlueprintPure)
    bool IsViewInverted() const;
    
    UFUNCTION(BlueprintPure)
    bool IsTrapGridVisible() const;
    
    UFUNCTION(BlueprintPure)
    bool GetVoiceVolumeMuted() const;
    
    UFUNCTION(BlueprintPure)
    float GetVoiceVolumeModifier() const;
    
    UFUNCTION(BlueprintPure)
    bool GetUsingDefaultAxisBinding() const;
    
    UFUNCTION(BlueprintPure)
    float GetTargetingSensitivity() const;
    
    UFUNCTION(BlueprintPure)
    bool GetSwitchToWeaponOnTrinketActivation() const;
    
    UFUNCTION(BlueprintPure)
    bool GetShowParTime() const;
    
    UFUNCTION(BlueprintPure)
    bool GetShowNearbyEnemyHealthBars() const;
    
    UFUNCTION(BlueprintPure)
    bool GetShowClosedCaptioning() const;
    
    UFUNCTION(BlueprintPure)
    float GetShadowsGamma() const;
    
    UFUNCTION(BlueprintPure)
    bool GetRequireKeyPressAfterLoadScreen() const;
    
    UFUNCTION(BlueprintPure)
    bool GetPlayScenarioDialogue() const;
    
    UFUNCTION(BlueprintPure)
    bool GetMusicVolumeMuted() const;
    
    UFUNCTION(BlueprintPure)
    float GetMusicVolumeModifier() const;
    
    UFUNCTION(BlueprintPure)
    float GetMidtonesGamma() const;
    
    UFUNCTION(BlueprintPure)
    bool GetMasterVolumeMuted() const;
    
    UFUNCTION(BlueprintPure)
    float GetMasterVolumeModifier() const;
    
    UFUNCTION(BlueprintPure)
    float GetLookSensitivityY() const;
    
    UFUNCTION(BlueprintPure)
    float GetLookSensitivityX() const;
    
    UFUNCTION(BlueprintPure)
    EOMDLoadoutStyle GetLoadoutStyle() const;
    
    UFUNCTION(BlueprintPure)
    bool GetLeaderboardOptOut() const;
    
    UFUNCTION(BlueprintPure)
    bool GetHoldToSprint() const;
    
    UFUNCTION(BlueprintPure)
    float GetHighlightsGamma() const;
    
    UFUNCTION(BlueprintPure)
    bool GetGoreVisibility() const;
    
    UFUNCTION(BlueprintPure)
    float GetGammaHDR() const;
    
    UFUNCTION(BlueprintPure)
    float GetGamma() const;
    
    UFUNCTION(BlueprintPure)
    void GetGameplayKeyBinding(FName ActionName, FInputActionKeyMapping& keyBinding, bool gamepadKey) const;
    
    UFUNCTION(BlueprintPure)
    float GetFieldOfView() const;
    
    UFUNCTION(BlueprintPure)
    bool GetEnableStreamConnectBroadcast() const;
    
    UFUNCTION(BlueprintPure)
    bool GetEffectsVolumeMuted() const;
    
    UFUNCTION(BlueprintPure)
    float GetEffectsVolumeModifier() const;
    
    UFUNCTION(BlueprintPure)
    TArray<FInputActionKeyMapping> GetDefaultGameplayKeyBindings() const;
    
    UFUNCTION(BlueprintPure)
    TArray<FInputAxisKeyMapping> GetDefaultGameplayAxisMappings() const;
    
    UFUNCTION(BlueprintPure)
    EOMDCameraStyle GetCameraStyle() const;
    
    UFUNCTION(BlueprintPure)
    void GetAxisKeyMapping(FName ActionName, float Scale, FInputAxisKeyMapping& keyBinding, bool gamepadKey) const;
    
    UFUNCTION(BlueprintPure)
    bool GetAllowForceFeedback() const;
    
};

