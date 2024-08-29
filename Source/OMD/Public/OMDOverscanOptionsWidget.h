#pragma once
#include "CoreMinimal.h"
#include "OMDModalWidget.h"
#include "OMDOverscanOptionsWidget.generated.h"

UCLASS(Blueprintable, EditInlineNew)
class OMD_API UOMDOverscanOptionsWidget : public UOMDModalWidget {
    GENERATED_BODY()
public:
    UOMDOverscanOptionsWidget();

protected:
    UFUNCTION(BlueprintCallable)
    void SetSafeZoneScale(float Scale);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetSafeZoneScale() const;
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void BP_SafeZoneChanged();
    
};

