#pragma once
#include "CoreMinimal.h"
#include "Blueprint/UserWidget.h"
#include "OMDComboFlyoffWidget.generated.h"

UCLASS(Blueprintable, EditInlineNew)
class OMD_API UOMDComboFlyoffWidget : public UUserWidget {
    GENERATED_BODY()
public:
    UOMDComboFlyoffWidget();

    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void SetData(int32 comboLength);
    
};

