#pragma once
#include "CoreMinimal.h"
#include "OMDUserWidget.h"
#include "OMDLeaderboardRowWidget.generated.h"

UCLASS(EditInlineNew)
class OMD_API UOMDLeaderboardRowWidget : public UOMDUserWidget {
    GENERATED_BODY()
public:
    UOMDLeaderboardRowWidget();
    UFUNCTION(BlueprintCallable)
    void SetLeaderboardRowInfo(int32 Rank, const FString& Username, int64 Score);
    
    UFUNCTION(BlueprintCallable)
    void SetLeaderboardRowEndlessWaves(int64 wavesCompleted);
    
protected:
    UFUNCTION(BlueprintImplementableEvent)
    void BP_SetLeaderboardRowInfo(const FString& Rank, const FString& Username, const FString& Score);
    
    UFUNCTION(BlueprintImplementableEvent)
    void BP_SetLeaderboardRowEndlessWaves(const FString& wavesCompleted);
    
};

