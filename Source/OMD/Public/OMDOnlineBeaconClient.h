#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=OnlineSubsystemUtils -ObjectName=OnlineBeaconClient -FallbackName=OnlineBeaconClient
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=UniqueNetIdRepl -FallbackName=UniqueNetIdRepl
#include "OMDSoftProtoPtr.h"
#include "EBeaconDisconnectReason.h"
#include "EBeaconAckStatus.h"
#include "EGameDifficulty.h"
#include "OMDRandomModeClientInfo.h"
#include "OnlineBeaconClient.h"
#include "OMDOnlineBeaconClient.generated.h"

class AOMDLobbyBeaconState;

UCLASS(NonTransient)
class OMD_API AOMDOnlineBeaconClient : public AOnlineBeaconClient {
    GENERATED_BODY()
public:
    UPROPERTY(Config)
    int32 ClientBeaconPort;
    
protected:
    UPROPERTY(ReplicatedUsing=OnRep_LobbyState)
    TWeakObjectPtr<AOMDLobbyBeaconState> LobbyState;
    
public:
    AOMDOnlineBeaconClient();
    virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;
    
protected:
    UFUNCTION(Reliable, Server, WithValidation)
    void Server_SetReadyToTravel(const FUniqueNetIdRepl& PlayerId, bool IsReady);
    
    UFUNCTION(Reliable, Server, WithValidation)
    void Server_SetCharacter(const FUniqueNetIdRepl& PlayerId, FOMDSoftProtoPtr Character, FOMDSoftProtoPtr Skin);
    
    UFUNCTION(Reliable, Server, WithValidation)
    void Server_RequestDisconnection();
    
    UFUNCTION(Reliable, Server, WithValidation)
    void Server_NotifyStreamSubscriptionReady(const int64& PlayerId, const FString& streamUrl);
    
    UFUNCTION(Reliable, Server, WithValidation)
    void Server_LoginPlayer(const FUniqueNetIdRepl& UniqueId, const FString& urlString);
    
    UFUNCTION(Reliable, Server, WithValidation)
    void Server_AckMissionChange(FOMDSoftProtoPtr Mission, EBeaconAckStatus Status);
    
    UFUNCTION()
    void OnRep_LobbyState();
    
    UFUNCTION(Client, Reliable)
    void Client_PlayerJoined(const FString& PlayerName, const FUniqueNetIdRepl& UniqueId, FOMDSoftProtoPtr Mission, EGameDifficulty Difficulty, const TArray<FOMDSoftProtoPtr>& HostUnlockedMissions, const TArray<int32>& entitleIndexCollection, FOMDRandomModeClientInfo randomModeInfo);
    
public:
    UFUNCTION(Client, Reliable)
    void Client_NotifyRandomModeMissionAndDebuffChosen(int32 tier, int32 missionIndex, int32 debuffIndex);
    
    UFUNCTION(Client, Reliable)
    void Client_NotifyRandomModeInitialize(int32 newSeed);
    
    UFUNCTION(Client, Reliable)
    void Client_NotifyRandomModeDebuffRerolled(int32 tier, int32 newDebuffIndex);
    
    UFUNCTION(Client, Reliable)
    void Client_NotifyRandomModeBuffChosen(int32 tier, int32 buffIndex);
    
protected:
    UFUNCTION(Client, Reliable)
    void Client_NotifyMissionChanged(FOMDSoftProtoPtr Mission);
    
    UFUNCTION(Client, Reliable)
    void Client_NotifyGameWillLaunch();
    
    UFUNCTION(Client, Reliable)
    void Client_NotifyDisconnectReason(EBeaconDisconnectReason DisconnectReason);
    
    UFUNCTION(Client, Reliable)
    void Client_NotifyDifficultyChanged(EGameDifficulty Difficulty);
    
public:
    UFUNCTION(Client, Reliable)
    void Client_NotifyDebuffChoices();
    
    UFUNCTION(Client, Reliable)
    void Client_LaunchGame(int32 serverPort);
    
};

