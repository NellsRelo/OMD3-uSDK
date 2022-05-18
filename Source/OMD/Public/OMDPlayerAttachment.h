#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=Actor -FallbackName=Actor
#include "EStatusEffectCategory.h"
#include "OMDPlayerAttachment.generated.h"

UCLASS()
class OMD_API AOMDPlayerAttachment : public AActor {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadOnly)
    FName AttachmentName;
    
public:
    AOMDPlayerAttachment();
    UFUNCTION(BlueprintCallable)
    void RemoveStatusEffectVisuals(EStatusEffectCategory StatusEffect);
    
protected:
    UFUNCTION(BlueprintImplementableEvent)
    void BP_SecondaryFired();
    
    UFUNCTION(BlueprintImplementableEvent)
    void BP_RemoveStatusEffectVisuals(EStatusEffectCategory StatusEffect);
    
    UFUNCTION(BlueprintImplementableEvent)
    void BP_PrimaryFired();
    
    UFUNCTION(BlueprintImplementableEvent)
    void BP_Deactivated();
    
    UFUNCTION(BlueprintImplementableEvent)
    void BP_ChargeStarted();
    
    UFUNCTION(BlueprintImplementableEvent)
    void BP_ChargeLevelIncreased();
    
    UFUNCTION(BlueprintImplementableEvent)
    void BP_ChargeEnded();
    
    UFUNCTION(BlueprintImplementableEvent)
    void BP_Cancelled();
    
    UFUNCTION(BlueprintImplementableEvent)
    void BP_AttachmentUnequipped();
    
    UFUNCTION(BlueprintImplementableEvent)
    void BP_AttachmentEquipped();
    
    UFUNCTION(BlueprintImplementableEvent)
    void BP_ApplyStatusEffectVisuals(EStatusEffectCategory StatusEffect);
    
public:
    UFUNCTION(BlueprintCallable)
    void ApplyStatusEffectVisuals(EStatusEffectCategory StatusEffect);
    
};

