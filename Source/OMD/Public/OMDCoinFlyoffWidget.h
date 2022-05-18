#pragma once
#include "CoreMinimal.h"
#include "Blueprint/UserWidget.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=UMG -ObjectName=UserWidget -FallbackName=UserWidget
#include "OMDCoinFlyoffWidget.generated.h"

UCLASS(EditInlineNew)
class OMD_API UOMDCoinFlyoffWidget : public UUserWidget {
    GENERATED_BODY()
public:
    UOMDCoinFlyoffWidget();
    UFUNCTION(BlueprintImplementableEvent)
    void SetData(int32 coinAmount);
    
};

