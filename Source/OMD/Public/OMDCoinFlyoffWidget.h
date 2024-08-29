#pragma once
#include "CoreMinimal.h"
#include "Blueprint/UserWidget.h"
#include "OMDCoinFlyoffWidget.generated.h"

UCLASS(Blueprintable, EditInlineNew)
class OMD_API UOMDCoinFlyoffWidget : public UUserWidget {
    GENERATED_BODY()
public:
    UOMDCoinFlyoffWidget();

    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void SetData(int32 coinAmount);
    
};

