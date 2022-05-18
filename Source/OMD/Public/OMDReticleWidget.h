#pragma once
#include "CoreMinimal.h"
#include "OMDUserWidget.h"
#include "OMDReticleWidget.generated.h"

UCLASS(EditInlineNew)
class OMD_API UOMDReticleWidget : public UOMDUserWidget {
    GENERATED_BODY()
public:
    UOMDReticleWidget();
    UFUNCTION(BlueprintCallable)
    void OnChangeAbilityCharge(int32 Value);
    
    UFUNCTION(BlueprintCallable)
    void OnBeginAbilityReload();
    
protected:
    UFUNCTION(BlueprintImplementableEvent)
    void BP_ChangeAbilityCharge(int32 Value);
    
    UFUNCTION(BlueprintImplementableEvent)
    void BP_BeganAbilityReload();
    
};

