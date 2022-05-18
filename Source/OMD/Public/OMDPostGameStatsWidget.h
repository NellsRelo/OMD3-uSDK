#pragma once
#include "CoreMinimal.h"
#include "OMDModalWidget.h"
#include "OMDGameStats.h"
#include "OMDPostGameStatsWidget.generated.h"

UCLASS(EditInlineNew)
class OMD_API UOMDPostGameStatsWidget : public UOMDModalWidget {
    GENERATED_BODY()
public:
    UOMDPostGameStatsWidget();
protected:
    UFUNCTION(BlueprintCallable)
    void SetGameStats(const FOMDGameStats& stats);
    
};

