#pragma once
#include "CoreMinimal.h"
#include "EMissionLaunchMode.h"
#include "OMDUserWidget.h"
#include "OMDCoopDisplay.generated.h"

class AOMDLobbyPlayerState;

UCLASS(Blueprintable, EditInlineNew)
class OMD_API UOMDCoopDisplay : public UOMDUserWidget {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TWeakObjectPtr<AOMDLobbyPlayerState> PlayerState;
    
public:
    UOMDCoopDisplay();

protected:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void BP_SkinChanged(AOMDLobbyPlayerState* NewPlayerState);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void BP_ReadyChanged(AOMDLobbyPlayerState* NewPlayerState);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void BP_PlayerRemoved(AOMDLobbyPlayerState* NewPlayerState);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void BP_PlayerAdded(AOMDLobbyPlayerState* NewPlayerState);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void BP_LaunchModeChanged(EMissionLaunchMode launchMode);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void BP_CharacterChanged(AOMDLobbyPlayerState* NewPlayerState);
    
};

