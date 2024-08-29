#pragma once
#include "CoreMinimal.h"
#include "OMDModalWidget.h"
#include "OMDOnlineSearchResult.h"
#include "OMDHostedGamesListWidget.generated.h"

UCLASS(Blueprintable, EditInlineNew)
class OMD_API UOMDHostedGamesListWidget : public UOMDModalWidget {
    GENERATED_BODY()
public:
    UOMDHostedGamesListWidget();

protected:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void BP_OnGameJoined(bool success);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void BP_JoiningGame(const FOMDOnlineSearchResult& searchResult);
    
};

