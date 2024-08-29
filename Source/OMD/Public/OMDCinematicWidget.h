#pragma once
#include "CoreMinimal.h"
#include "OMDUserWidget.h"
#include "OMDCinematicWidget.generated.h"

UCLASS(Blueprintable, EditInlineNew)
class OMD_API UOMDCinematicWidget : public UOMDUserWidget {
    GENERATED_BODY()
public:
    UOMDCinematicWidget();

protected:
    UFUNCTION(BlueprintCallable)
    void SkipCinematic();
    
    UFUNCTION(BlueprintCallable)
    void OnAllModalsDismissed();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void BP_OnAllModalsDismissed();
    
};

