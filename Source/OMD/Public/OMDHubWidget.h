#pragma once
#include "CoreMinimal.h"
#include "OMDUserWidget.h"
#include "OMDOnlineSearchResult.h"
#include "OMDHubWidget.generated.h"

UCLASS(EditInlineNew)
class OMD_API UOMDHubWidget : public UOMDUserWidget {
    GENERATED_BODY()
public:
    UOMDHubWidget();
protected:
    UFUNCTION(BlueprintPure)
    bool IsPlayerReadyToTravel() const;
    
    UFUNCTION(BlueprintPure)
    bool CanLaunchGame() const;
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void BP_OnRandomModeMissionAndDebuffChosen();
    
    UFUNCTION(BlueprintImplementableEvent)
    void BP_OnPlayerConnected();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void BP_OnNotifiedOfDebuffChoices();
    
    UFUNCTION(BlueprintImplementableEvent)
    void BP_JoiningGame(const FOMDOnlineSearchResult& searchResult);
    
    UFUNCTION(BlueprintImplementableEvent)
    void BP_GameWillLaunch();
    
    UFUNCTION(BlueprintImplementableEvent)
    void BP_GameJoined(bool bSuccess);
    
    UFUNCTION(BlueprintImplementableEvent)
    void BP_GameHosted();
    
    UFUNCTION(BlueprintImplementableEvent)
    void BP_GameDestroyed(bool bSuccess);
    
    UFUNCTION(BlueprintImplementableEvent)
    void BP_FriendInviteSent();
    
    UFUNCTION(BlueprintImplementableEvent)
    void BP_BeaconFailedToConnect();
    
};

