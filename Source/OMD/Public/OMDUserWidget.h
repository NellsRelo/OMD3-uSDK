#pragma once
#include "CoreMinimal.h"
#include "Blueprint/UserWidget.h"
#include "OMDUserWidget.generated.h"

UCLASS(Blueprintable, EditInlineNew)
class OMD_API UOMDUserWidget : public UUserWidget {
    GENERATED_BODY()
public:
    UOMDUserWidget();

protected:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void BP_SynchronizeProperties();
    
};

