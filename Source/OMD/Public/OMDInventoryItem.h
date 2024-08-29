#pragma once
#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "EOMDPlayerMaterialModifiers.h"
#include "EUpgradeType.h"
#include "OMDAbilitySourceInterface.h"
#include "OMDBloomSettings.h"
#include "OMDItemAttachment.h"
#include "OMDSoftProtoPtr.h"
#include "OMDInventoryItem.generated.h"

class AActor;
class UOMDAbilityAttributes;
class UOMDReticleWidget;
class UTexture2D;

UCLASS(Abstract, Blueprintable)
class OMD_API UOMDInventoryItem : public UObject, public IOMDAbilitySourceInterface {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOMDSoftProtoPtr protodata;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FOMDSoftProtoPtr> EquippedUpgrades;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UOMDAbilityAttributes* Attributes;
    
public:
    UOMDInventoryItem();

    UFUNCTION(BlueprintCallable)
    void SetWarMachineType(uint8 Value);
    
    UFUNCTION(BlueprintCallable)
    void SetTriggerDurationModifier(float Value);
    
    UFUNCTION(BlueprintCallable)
    void SetTrapRemovalFXClassOverrride(TSoftClassPtr<AActor> trapRemovalFXClassOverride);
    
    UFUNCTION(BlueprintCallable)
    void SetTrapPlacementFXClassOverrride(TSoftClassPtr<AActor> trapPlacementFXClassOverride);
    
    UFUNCTION(BlueprintCallable)
    void SetTrapGaurdiansOverrride(TArray<FOMDSoftProtoPtr> trapGuardiansOverride);
    
    UFUNCTION(BlueprintCallable)
    void SetTrapClassOverrride(TSoftClassPtr<AActor> trapClassOverride);
    
    UFUNCTION(BlueprintCallable)
    void SetSightRadiusModifier(float Value);
    
    UFUNCTION(BlueprintCallable)
    void SetSecondaryLastActivationTime(float newValue);
    
    UFUNCTION(BlueprintCallable)
    void SetSecondaryCooldownMultiplier(float newValue);
    
    UFUNCTION(BlueprintCallable)
    void SetSecondaryCooldownModifier(float newValue);
    
    UFUNCTION(BlueprintCallable)
    void SetReticleWidget(TSoftClassPtr<UOMDReticleWidget> reticle);
    
    UFUNCTION(BlueprintCallable)
    void SetResetDelayModifier(float Value);
    
    UFUNCTION(BlueprintCallable)
    void SetReloadSpeedModifier(float Value, bool primary);
    
    UFUNCTION(BlueprintCallable)
    void SetPrimaryLastActivationTime(float newValue);
    
    UFUNCTION(BlueprintCallable)
    void SetPrimaryCooldownMultiplier(float newValue);
    
    UFUNCTION(BlueprintCallable)
    void SetPrimaryCooldownModifier(float newValue);
    
    UFUNCTION(BlueprintCallable)
    void SetPlacementType(uint8 Value);
    
    UFUNCTION(BlueprintCallable)
    void SetMaxChargesModifier(int32 Value);
    
    UFUNCTION(BlueprintCallable)
    void SetCooldownMultiplier(float Value);
    
    UFUNCTION(BlueprintCallable)
    void SetCooldownModifier(float Value);
    
    UFUNCTION(BlueprintCallable)
    void SetCollateralDamageValueModifier(float Value);
    
    UFUNCTION(BlueprintCallable)
    void SetCoinValueMultiplier(float Value);
    
    UFUNCTION(BlueprintCallable)
    void SetCoinValueModifier(int32 Value);
    
    UFUNCTION(BlueprintCallable)
    void SetBloomModifier(FOMDBloomSettings Value);
    
    UFUNCTION(BlueprintCallable)
    void SetBaseHealthMultiplier(float Value);
    
    UFUNCTION(BlueprintCallable)
    void SetBaseHealthModifier(float Value);
    
    UFUNCTION(BlueprintCallable)
    void SetAttachments(TArray<FOMDItemAttachment> Attachments);
    
protected:
    UFUNCTION(BlueprintCallable)
    void OnSecondaryWasActivated();
    
    UFUNCTION(BlueprintCallable)
    void OnPrimaryWasActivated();
    
public:
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsWarScenarioExclusive() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsUpgradeEquipped(FOMDSoftProtoPtr upgrade) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsDevelopmentOnly() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    uint8 GetWarMachineType() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetTriggerDurationModifier() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetSightRadiusModifier() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FOMDSoftProtoPtr GetSecondaryTriggerEffect() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetSecondaryLastActivationTime() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetSecondaryCooldownMultiplier() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetSecondaryCooldownModifier() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetSecondaryCooldown();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FOMDSoftProtoPtr GetSecondaryAbility() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    TSoftClassPtr<UOMDReticleWidget> GetReticleWidgetClassPath() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetResetDelayModifier() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetReloadSpeedModifier(bool primary) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FOMDSoftProtoPtr GetPrimaryTriggerEffect() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetPrimaryLastActivationTime() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetPrimaryCooldownMultiplier() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetPrimaryCooldownModifier() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetPrimaryCooldown();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FOMDSoftProtoPtr GetPrimaryAbility() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    EOMDPlayerMaterialModifiers GetPlayerMaterialModifier() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    uint8 GetPlacementType() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetMaxChargesModifier() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    TSoftObjectPtr<UTexture2D> GetIconTexture() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    void GetEquippedUpgradesOfType(EUpgradeType Type, TArray<FOMDSoftProtoPtr>& Upgrades) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FText GetDisplayName() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FText GetDescription() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetCooldownMultiplier() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetCooldownModifier() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetCollateralDamageValueModifier() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetCoinValueMultiplier() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetCoinValueModifier() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetCoinValue() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FOMDBloomSettings GetBloomModifier() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetBaseHealthMultiplier() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetBaseHealthModifier() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    TArray<FOMDItemAttachment> GetAttachments() const;
    

    // Fix for true pure virtual functions not being implemented
};

