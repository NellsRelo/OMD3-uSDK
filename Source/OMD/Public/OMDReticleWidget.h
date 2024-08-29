#pragma once
#include "CoreMinimal.h"
#include "OMDUserWidget.h"
#include "OMDReticleWidget.generated.h"

UCLASS(Blueprintable, EditInlineNew)
class OMD_API UOMDReticleWidget : public UOMDUserWidget {
    GENERATED_BODY()
public:
    UOMDReticleWidget();

    UFUNCTION(BlueprintCallable)
    void OnChangeAbilityCharge(int32 Value);
    
    UFUNCTION(BlueprintCallable)
    void OnBeginAbilityReload();
    
protected:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void BP_ChangeAbilityCharge(int32 Value);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void BP_BeganAbilityReload();
    
};

