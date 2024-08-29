#pragma once
#include "CoreMinimal.h"
#include "OMDOnlineSearchResult.h"
#include "OMDUserWidget.h"
#include "OMDHubWidget.generated.h"

UCLASS(Blueprintable, EditInlineNew)
class OMD_API UOMDHubWidget : public UOMDUserWidget {
    GENERATED_BODY()
public:
    UOMDHubWidget();

protected:
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsPlayerReadyToTravel() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool CanLaunchGame() const;
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void BP_OnRandomModeMissionAndDebuffChosen();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void BP_OnPlayerConnected();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void BP_OnNotifiedOfDebuffChoices();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void BP_JoiningGame(const FOMDOnlineSearchResult& searchResult);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void BP_GameWillLaunch();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void BP_GameJoined(bool bSuccess);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void BP_GameHosted();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void BP_GameDestroyed(bool bSuccess);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void BP_FriendInviteSent();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void BP_BeaconFailedToConnect();
    
};

