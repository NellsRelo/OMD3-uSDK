#pragma once
#include "CoreMinimal.h"
#include "OMDUserWidget.h"
#include "OMDModeSelectWidget.generated.h"

UCLASS(Blueprintable, EditInlineNew)
class OMD_API UOMDModeSelectWidget : public UOMDUserWidget {
    GENERATED_BODY()
public:
    UOMDModeSelectWidget();

protected:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void BP_EntitlementsChanged();
    
};

