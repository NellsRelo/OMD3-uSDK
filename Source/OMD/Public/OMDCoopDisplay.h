#pragma once
#include "CoreMinimal.h"
#include "OMDUserWidget.h"
#include "EMissionLaunchMode.h"
#include "OMDCoopDisplay.generated.h"

class AOMDLobbyPlayerState;

UCLASS(EditInlineNew)
class OMD_API UOMDCoopDisplay : public UOMDUserWidget {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadOnly)
    TWeakObjectPtr<AOMDLobbyPlayerState> PlayerState;
    
public:
    UOMDCoopDisplay();
protected:
    UFUNCTION(BlueprintImplementableEvent)
    void BP_SkinChanged(AOMDLobbyPlayerState* NewPlayerState);
    
    UFUNCTION(BlueprintImplementableEvent)
    void BP_ReadyChanged(AOMDLobbyPlayerState* NewPlayerState);
    
    UFUNCTION(BlueprintImplementableEvent)
    void BP_PlayerRemoved(AOMDLobbyPlayerState* NewPlayerState);
    
    UFUNCTION(BlueprintImplementableEvent)
    void BP_PlayerAdded(AOMDLobbyPlayerState* NewPlayerState);
    
    UFUNCTION(BlueprintImplementableEvent)
    void BP_LaunchModeChanged(EMissionLaunchMode launchMode);
    
    UFUNCTION(BlueprintImplementableEvent)
    void BP_CharacterChanged(AOMDLobbyPlayerState* NewPlayerState);
    
};

