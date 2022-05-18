#pragma once
#include "CoreMinimal.h"
#include "OMDUserWidget.h"
#include "OMDCinematicWidget.generated.h"

UCLASS(EditInlineNew)
class OMD_API UOMDCinematicWidget : public UOMDUserWidget {
    GENERATED_BODY()
public:
    UOMDCinematicWidget();
protected:
    UFUNCTION(BlueprintCallable)
    void SkipCinematic();
    
    UFUNCTION()
    void OnAllModalsDismissed();
    
    UFUNCTION(BlueprintImplementableEvent)
    void BP_OnAllModalsDismissed();
    
};

