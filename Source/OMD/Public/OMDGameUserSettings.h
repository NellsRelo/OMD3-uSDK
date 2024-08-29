#pragma once
#include "CoreMinimal.h"
#include "GameFramework/GameUserSettings.h"
#include "GameFramework/PlayerInput.h"
#include "GameFramework/PlayerInput.h"
#include "InputCoreTypes.h"
#include "EOMDCameraStyle.h"
#include "EOMDLoadoutStyle.h"
#include "OMDMapColors.h"
#include "OMDGameUserSettings.generated.h"

class USoundClass;
class USoundMix;

UCLASS(Blueprintable, Config=Engine)
class OMD_API UOMDGameUserSettings : public UGameUserSettings {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    float LookSensitivityX;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    float LookSensitivityY;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    float TargetingSensitivity;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    float FieldOfView;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bInvertView;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bInvertViewHorizontally;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bHoldToSprint;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bLinkToExternalAccount;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bShowTrapGrid;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bSwitchToWeaponOnTrinketActivation;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bShowParTime;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bRequireKeyPressAfterLoadScreen;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bAllowForceFeedback;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bUsingDefaultAxisBinding;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    EOMDLoadoutStyle LoadoutStyle;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    EOMDCameraStyle CameraOffset;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bGoreVisibility;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bShowNearbyEnemyHealthBars;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bEnableStreamConnectBroadcast;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bLeaderboardOptOut;
    
public:
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOMDMapColors MapColors;
    
protected:
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bPlayScenarioDialogue;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bShowClosedCaptioning;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    float MasterVolumeModifier;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    float MusicVolumeModifier;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    float EffectsVolumeModifier;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    float VoiceVolumeModifier;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bMasterVolumeMuted;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bMusicVolumeMuted;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bEffectsVolumeMuted;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bVoiceVolumeMuted;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    USoundMix* OptionsMix;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    USoundClass* MasterClass;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    USoundClass* MusicClass;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    USoundClass* EffectsClass;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    USoundClass* VoiceClass;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    float Gamma_V2;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    float GammaHDR_V2;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    float ShadowsGamma;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    float MidtonesGamma;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    float HighlightsGamma;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    float SafeZoneRatio;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
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
    void SetLinkToExternalAccount(bool Value);
    
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
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsViewInvertedHorizontally() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsViewInverted() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsTrapGridVisible() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool GetVoiceVolumeMuted() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetVoiceVolumeModifier() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool GetUsingDefaultAxisBinding() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetTargetingSensitivity() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool GetSwitchToWeaponOnTrinketActivation() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool GetShowParTime() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool GetShowNearbyEnemyHealthBars() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool GetShowClosedCaptioning() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetShadowsGamma() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool GetRequireKeyPressAfterLoadScreen() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool GetPlayScenarioDialogue() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool GetMusicVolumeMuted() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetMusicVolumeModifier() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetMidtonesGamma() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool GetMasterVolumeMuted() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetMasterVolumeModifier() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetLookSensitivityY() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetLookSensitivityX() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    EOMDLoadoutStyle GetLoadoutStyle() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool GetLinkToExternalAccount() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool GetLeaderboardOptOut() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool GetHoldToSprint() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetHighlightsGamma() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool GetGoreVisibility() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetGammaHDR() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetGamma() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    void GetGameplayKeyBinding(FName ActionName, FInputActionKeyMapping& keyBinding, bool gamepadKey) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetFieldOfView() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool GetEnableStreamConnectBroadcast() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool GetEffectsVolumeMuted() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetEffectsVolumeModifier() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    TArray<FInputActionKeyMapping> GetDefaultGameplayKeyBindings() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    TArray<FInputAxisKeyMapping> GetDefaultGameplayAxisMappings() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    EOMDCameraStyle GetCameraStyle() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    void GetAxisKeyMapping(FName ActionName, float Scale, FInputAxisKeyMapping& keyBinding, bool gamepadKey) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool GetAllowForceFeedback() const;
    
};

