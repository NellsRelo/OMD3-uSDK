#pragma once
#include "CoreMinimal.h"
#include "UObject/Interface.h"
#include "EComboPointType.h"
#include "EStatusEffectCategory.h"
#include "OMDSoftProtoPtr.h"
#include "OMDStatusEffectInterface.generated.h"

class AActor;
class AController;

UINTERFACE(BlueprintType, MinimalAPI, meta=(CannotImplementInterfaceInBlueprint))
class UOMDStatusEffectInterface : public UInterface {
    GENERATED_BODY()
};

class IOMDStatusEffectInterface : public IInterface {
    GENERATED_BODY()
public:
    UFUNCTION(BlueprintAuthorityOnly, BlueprintCallable)
    virtual void RemoveStatusEffectComboPoint(UClass* StatusEffectClass, EComboPointType comboPointType) PURE_VIRTUAL(RemoveStatusEffectComboPoint,);
    
    UFUNCTION(BlueprintAuthorityOnly, BlueprintCallable)
    virtual bool RemoveStatusEffect(int32 ID) PURE_VIRTUAL(RemoveStatusEffect, return false;);
    
    UFUNCTION(BlueprintAuthorityOnly, BlueprintCallable)
    virtual bool HasVisualStatusEffect(EStatusEffectCategory StatusEffectCategory) const PURE_VIRTUAL(HasVisualStatusEffect, return false;);
    
    UFUNCTION(BlueprintAuthorityOnly, BlueprintCallable)
    virtual void HasStatusEffect(TArray<int32>& outArray, FOMDSoftProtoPtr statusEffectProtoData) const PURE_VIRTUAL(HasStatusEffect,);
    
    UFUNCTION(BlueprintAuthorityOnly, BlueprintCallable)
    virtual int32 GetStatusEffectIdByVisualCategory(EStatusEffectCategory StatusEffectCategory) const PURE_VIRTUAL(GetStatusEffectIdByVisualCategory, return 0;);
    
    UFUNCTION(BlueprintAuthorityOnly, BlueprintCallable)
    virtual AActor* GetStatusEffectCauser(int32 ID) const PURE_VIRTUAL(GetStatusEffectCauser, return NULL;);
    
    UFUNCTION(BlueprintAuthorityOnly, BlueprintCallable)
    virtual bool CanRemoveStatusEffect(int32 ID) const PURE_VIRTUAL(CanRemoveStatusEffect, return false;);
    
    UFUNCTION(BlueprintAuthorityOnly, BlueprintCallable)
    virtual bool CanApplyStatusEffect(FOMDSoftProtoPtr protodata, AActor* effectCauser, AController* Instigator) const PURE_VIRTUAL(CanApplyStatusEffect, return false;);
    
    UFUNCTION(BlueprintAuthorityOnly, BlueprintCallable)
    virtual void ApplyStatusEffectComboPoint(UClass* StatusEffectClass, EComboPointType comboPointType) PURE_VIRTUAL(ApplyStatusEffectComboPoint,);
    
    UFUNCTION(BlueprintAuthorityOnly, BlueprintCallable)
    virtual int32 ApplyStatusEffect(FOMDSoftProtoPtr protodata, AActor* effectCauser, AController* Instigator, float overrideDuration) PURE_VIRTUAL(ApplyStatusEffect, return 0;);
    
};

