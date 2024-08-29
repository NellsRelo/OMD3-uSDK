#pragma once
#include "CoreMinimal.h"
#include "GameFramework/OnlineReplStructs.h"
#include "OnlineBeaconClient.h"
#include "EBeaconAckStatus.h"
#include "EBeaconDisconnectReason.h"
#include "EGameDifficulty.h"
#include "OMDRandomModeClientInfo.h"
#include "OMDSoftProtoPtr.h"
#include "OMDOnlineBeaconClient.generated.h"

class AOMDLobbyBeaconState;

UCLASS(Blueprintable, NonTransient, Config=Engine)
class OMD_API AOMDOnlineBeaconClient : public AOnlineBeaconClient {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 ClientBeaconPort;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, ReplicatedUsing=OnRep_LobbyState, meta=(AllowPrivateAccess=true))
    TWeakObjectPtr<AOMDLobbyBeaconState> LobbyState;
    
public:
    AOMDOnlineBeaconClient(const FObjectInitializer& ObjectInitializer);

    virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;

protected:
    UFUNCTION(BlueprintCallable, Reliable, Server, WithValidation)
    void Server_SetReadyToTravel(const FUniqueNetIdRepl& PlayerId, bool IsReady);
    
    UFUNCTION(BlueprintCallable, Reliable, Server, WithValidation)
    void Server_SetCharacter(const FUniqueNetIdRepl& PlayerId, FOMDSoftProtoPtr Character, FOMDSoftProtoPtr Skin);
    
    UFUNCTION(BlueprintCallable, Reliable, Server, WithValidation)
    void Server_RequestDisconnection();
    
    UFUNCTION(Reliable, Server, WithValidation)
    void Server_NotifyStreamSubscriptionReady(const int64& PlayerId, const FString& streamUrl);
    
    UFUNCTION(BlueprintCallable, Reliable, Server, WithValidation)
    void Server_LoginPlayer(const FUniqueNetIdRepl& UniqueId, const FString& urlString);
    
    UFUNCTION(BlueprintCallable, Reliable, Server, WithValidation)
    void Server_AckMissionChange(FOMDSoftProtoPtr Mission, EBeaconAckStatus Status);
    
    UFUNCTION(BlueprintCallable)
    void OnRep_LobbyState();
    
    UFUNCTION(BlueprintCallable, Client, Reliable)
    void Client_PlayerJoined(const FString& PlayerName, const FUniqueNetIdRepl& UniqueId, FOMDSoftProtoPtr campaign, FOMDSoftProtoPtr Mission, EGameDifficulty Difficulty, const TArray<FOMDSoftProtoPtr>& HostUnlockedMissions, const TArray<int32>& entitleIndexCollection, FOMDRandomModeClientInfo randomModeInfo);
    
public:
    UFUNCTION(BlueprintCallable, Client, Reliable)
    void Client_NotifyRandomModeMissionAndDebuffChosen(int32 tier, int32 missionIndex, int32 debuffIndex);
    
    UFUNCTION(BlueprintCallable, Client, Reliable)
    void Client_NotifyRandomModeInitialize(int32 newSeed);
    
    UFUNCTION(BlueprintCallable, Client, Reliable)
    void Client_NotifyRandomModeDebuffRerolled(int32 tier, int32 newDebuffIndex);
    
    UFUNCTION(BlueprintCallable, Client, Reliable)
    void Client_NotifyRandomModeBuffChosen(int32 tier, int32 buffIndex);
    
protected:
    UFUNCTION(BlueprintCallable, Client, Reliable)
    void Client_NotifyMissionChanged(FOMDSoftProtoPtr Mission);
    
    UFUNCTION(BlueprintCallable, Client, Reliable)
    void Client_NotifyGameWillLaunch();
    
    UFUNCTION(BlueprintCallable, Client, Reliable)
    void Client_NotifyDisconnectReason(EBeaconDisconnectReason DisconnectReason);
    
    UFUNCTION(BlueprintCallable, Client, Reliable)
    void Client_NotifyDifficultyChanged(EGameDifficulty Difficulty);
    
public:
    UFUNCTION(BlueprintCallable, Client, Reliable)
    void Client_NotifyDebuffChoices();
    
    UFUNCTION(BlueprintCallable, Client, Reliable)
    void Client_LaunchGame(int32 serverPort);
    
};

