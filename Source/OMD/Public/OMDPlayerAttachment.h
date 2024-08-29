#pragma once
#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "EStatusEffectCategory.h"
#include "OMDPlayerAttachment.generated.h"

UCLASS(Blueprintable)
class OMD_API AOMDPlayerAttachment : public AActor {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName AttachmentName;
    
public:
    AOMDPlayerAttachment(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable)
    void RemoveStatusEffectVisuals(EStatusEffectCategory StatusEffect);
    
protected:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void BP_SecondaryFired();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void BP_RemoveStatusEffectVisuals(EStatusEffectCategory StatusEffect);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void BP_PrimaryFired();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void BP_Deactivated();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void BP_ChargeStarted();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void BP_ChargeLevelIncreased();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void BP_ChargeEnded();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void BP_Cancelled();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void BP_AttachmentUnequipped();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void BP_AttachmentEquipped();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void BP_ApplyStatusEffectVisuals(EStatusEffectCategory StatusEffect);
    
public:
    UFUNCTION(BlueprintCallable)
    void ApplyStatusEffectVisuals(EStatusEffectCategory StatusEffect);
    
};

