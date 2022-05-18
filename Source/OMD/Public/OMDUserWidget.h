#pragma once
#include "CoreMinimal.h"
#include "Blueprint/UserWidget.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=UMG -ObjectName=UserWidget -FallbackName=UserWidget
#include "OMDUserWidget.generated.h"

UCLASS(EditInlineNew)
class OMD_API UOMDUserWidget : public UUserWidget {
    GENERATED_BODY()
public:
    UOMDUserWidget();
protected:
    UFUNCTION(BlueprintImplementableEvent)
    void BP_SynchronizeProperties();
    
};

