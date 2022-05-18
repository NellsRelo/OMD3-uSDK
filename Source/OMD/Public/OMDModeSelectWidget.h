#pragma once
#include "CoreMinimal.h"
#include "OMDUserWidget.h"
#include "OMDModeSelectWidget.generated.h"

UCLASS(EditInlineNew)
class OMD_API UOMDModeSelectWidget : public UOMDUserWidget {
    GENERATED_BODY()
public:
    UOMDModeSelectWidget();
protected:
    UFUNCTION(BlueprintImplementableEvent)
    void BP_EntitlementsChanged();
    
};

