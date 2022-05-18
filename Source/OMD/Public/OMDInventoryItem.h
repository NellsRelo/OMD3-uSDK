#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Object -FallbackName=Object
#include "OMDSoftProtoPtr.h"
#include "OMDAbilitySourceInterface.h"
#include "OMDItemAttachment.h"
#include "OMDBloomSettings.h"
#include "EOMDPlayerMaterialModifiers.h"
#include "EUpgradeType.h"
#include "OMDInventoryItem.generated.h"

class UOMDReticleWidget;
class UOMDAbilityAttributes;
class AActor;
class UTexture2D;

UCLASS(Abstract, BlueprintType)
class OMD_API UOMDInventoryItem : public UObject, public IOMDAbilitySourceInterface {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadOnly)
    FOMDSoftProtoPtr protodata;
    
    UPROPERTY(BlueprintReadOnly)
    TArray<FOMDSoftProtoPtr> EquippedUpgrades;
    
    UPROPERTY(BlueprintReadOnly)
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
    UFUNCTION(BlueprintPure)
    bool IsWarScenarioExclusive() const;
    
    UFUNCTION(BlueprintPure)
    bool IsUpgradeEquipped(FOMDSoftProtoPtr upgrade) const;
    
    UFUNCTION(BlueprintPure)
    bool IsDevelopmentOnly() const;
    
    UFUNCTION(BlueprintPure)
    uint8 GetWarMachineType() const;
    
    UFUNCTION(BlueprintPure)
    float GetTriggerDurationModifier() const;
    
    UFUNCTION(BlueprintPure)
    float GetSightRadiusModifier() const;
    
    UFUNCTION(BlueprintPure)
    FOMDSoftProtoPtr GetSecondaryTriggerEffect() const;
    
    UFUNCTION(BlueprintPure)
    float GetSecondaryLastActivationTime() const;
    
    UFUNCTION(BlueprintPure)
    float GetSecondaryCooldownMultiplier() const;
    
    UFUNCTION(BlueprintPure)
    float GetSecondaryCooldownModifier() const;
    
    UFUNCTION(BlueprintPure)
    float GetSecondaryCooldown();
    
    UFUNCTION(BlueprintPure)
    FOMDSoftProtoPtr GetSecondaryAbility() const;
    
    UFUNCTION(BlueprintPure)
    TSoftClassPtr<UOMDReticleWidget> GetReticleWidgetClassPath() const;
    
    UFUNCTION(BlueprintPure)
    float GetResetDelayModifier() const;
    
    UFUNCTION(BlueprintPure)
    float GetReloadSpeedModifier(bool primary) const;
    
    UFUNCTION(BlueprintPure)
    FOMDSoftProtoPtr GetPrimaryTriggerEffect() const;
    
    UFUNCTION(BlueprintPure)
    float GetPrimaryLastActivationTime() const;
    
    UFUNCTION(BlueprintPure)
    float GetPrimaryCooldownMultiplier() const;
    
    UFUNCTION(BlueprintPure)
    float GetPrimaryCooldownModifier() const;
    
    UFUNCTION(BlueprintPure)
    float GetPrimaryCooldown();
    
    UFUNCTION(BlueprintPure)
    FOMDSoftProtoPtr GetPrimaryAbility() const;
    
    UFUNCTION(BlueprintPure)
    EOMDPlayerMaterialModifiers GetPlayerMaterialModifier() const;
    
    UFUNCTION(BlueprintPure)
    uint8 GetPlacementType() const;
    
    UFUNCTION(BlueprintPure)
    int32 GetMaxChargesModifier() const;
    
    UFUNCTION(BlueprintPure)
    TSoftObjectPtr<UTexture2D> GetIconTexture() const;
    
    UFUNCTION(BlueprintPure)
    void GetEquippedUpgradesOfType(EUpgradeType Type, TArray<FOMDSoftProtoPtr>& Upgrades) const;
    
    UFUNCTION(BlueprintPure)
    FText GetDisplayName() const;
    
    UFUNCTION(BlueprintPure)
    FText GetDescription() const;
    
    UFUNCTION(BlueprintPure)
    float GetCooldownMultiplier() const;
    
    UFUNCTION(BlueprintPure)
    float GetCooldownModifier() const;
    
    UFUNCTION(BlueprintPure)
    float GetCollateralDamageValueModifier() const;
    
    UFUNCTION(BlueprintPure)
    float GetCoinValueMultiplier() const;
    
    UFUNCTION(BlueprintPure)
    int32 GetCoinValueModifier() const;
    
    UFUNCTION(BlueprintPure)
    int32 GetCoinValue() const;
    
    UFUNCTION(BlueprintPure)
    FOMDBloomSettings GetBloomModifier() const;
    
    UFUNCTION(BlueprintPure)
    float GetBaseHealthMultiplier() const;
    
    UFUNCTION(BlueprintPure)
    float GetBaseHealthModifier() const;
    
    UFUNCTION(BlueprintPure)
    TArray<FOMDItemAttachment> GetAttachments() const;
    
    
    // Fix for true pure virtual functions not being implemented
};

