#pragma once
#include "CoreMinimal.h"
#include "OMDModalWidget.h"
#include "OMDOverscanOptionsWidget.generated.h"

UCLASS(EditInlineNew)
class OMD_API UOMDOverscanOptionsWidget : public UOMDModalWidget {
    GENERATED_BODY()
public:
    UOMDOverscanOptionsWidget();
protected:
    UFUNCTION(BlueprintCallable)
    void SetSafeZoneScale(float Scale);
    
    UFUNCTION(BlueprintPure)
    float GetSafeZoneScale() const;
    
    UFUNCTION(BlueprintImplementableEvent)
    void BP_SafeZoneChanged();
    
};

