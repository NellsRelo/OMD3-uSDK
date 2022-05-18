#pragma once
#include "CoreMinimal.h"
#include "OMDModalWidget.h"
#include "OMDOnlineSearchResult.h"
#include "OMDHostedGamesListWidget.generated.h"

UCLASS(EditInlineNew)
class OMD_API UOMDHostedGamesListWidget : public UOMDModalWidget {
    GENERATED_BODY()
public:
    UOMDHostedGamesListWidget();
protected:
    UFUNCTION(BlueprintImplementableEvent)
    void BP_OnGameJoined(bool success);
    
    UFUNCTION(BlueprintImplementableEvent)
    void BP_JoiningGame(const FOMDOnlineSearchResult& searchResult);
    
};

