#pragma once
#include "CoreMinimal.h"
#include "Blueprint/UserWidget.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=UMG -ObjectName=UserWidget -FallbackName=UserWidget
#include "OMDComboFlyoffWidget.generated.h"

UCLASS(EditInlineNew)
class OMD_API UOMDComboFlyoffWidget : public UUserWidget {
    GENERATED_BODY()
public:
    UOMDComboFlyoffWidget();
    UFUNCTION(BlueprintImplementableEvent)
    void SetData(int32 comboLength);
    
};

