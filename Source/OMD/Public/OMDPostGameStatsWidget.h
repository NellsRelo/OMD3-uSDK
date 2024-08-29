#pragma once
#include "CoreMinimal.h"
#include "OMDGameStats.h"
#include "OMDModalWidget.h"
#include "OMDPostGameStatsWidget.generated.h"

UCLASS(Blueprintable, EditInlineNew)
class OMD_API UOMDPostGameStatsWidget : public UOMDModalWidget {
    GENERATED_BODY()
public:
    UOMDPostGameStatsWidget();

protected:
    UFUNCTION(BlueprintCallable)
    void SetGameStats(const FOMDGameStats& stats);
    
};

