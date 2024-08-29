#include "OMDOnlineBeaconClient.h"
#include "Net/UnrealNetwork.h"

AOMDOnlineBeaconClient::AOMDOnlineBeaconClient(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->ClientBeaconPort = 15000;
}

void AOMDOnlineBeaconClient::Server_SetReadyToTravel_Implementation(const FUniqueNetIdRepl& PlayerId, bool IsReady) {
}
bool AOMDOnlineBeaconClient::Server_SetReadyToTravel_Validate(const FUniqueNetIdRepl& PlayerId, bool IsReady) {
    return true;
}

void AOMDOnlineBeaconClient::Server_SetCharacter_Implementation(const FUniqueNetIdRepl& PlayerId, FOMDSoftProtoPtr Character, FOMDSoftProtoPtr Skin) {
}
bool AOMDOnlineBeaconClient::Server_SetCharacter_Validate(const FUniqueNetIdRepl& PlayerId, FOMDSoftProtoPtr Character, FOMDSoftProtoPtr Skin) {
    return true;
}

void AOMDOnlineBeaconClient::Server_RequestDisconnection_Implementation() {
}
bool AOMDOnlineBeaconClient::Server_RequestDisconnection_Validate() {
    return true;
}

void AOMDOnlineBeaconClient::Server_NotifyStreamSubscriptionReady_Implementation(const int64& PlayerId, const FString& streamUrl) {
}
bool AOMDOnlineBeaconClient::Server_NotifyStreamSubscriptionReady_Validate(const int64& PlayerId, const FString& streamUrl) {
    return true;
}

void AOMDOnlineBeaconClient::Server_LoginPlayer_Implementation(const FUniqueNetIdRepl& UniqueId, const FString& urlString) {
}
bool AOMDOnlineBeaconClient::Server_LoginPlayer_Validate(const FUniqueNetIdRepl& UniqueId, const FString& urlString) {
    return true;
}

void AOMDOnlineBeaconClient::Server_AckMissionChange_Implementation(FOMDSoftProtoPtr Mission, EBeaconAckStatus Status) {
}
bool AOMDOnlineBeaconClient::Server_AckMissionChange_Validate(FOMDSoftProtoPtr Mission, EBeaconAckStatus Status) {
    return true;
}

void AOMDOnlineBeaconClient::OnRep_LobbyState() {
}

void AOMDOnlineBeaconClient::Client_PlayerJoined_Implementation(const FString& PlayerName, const FUniqueNetIdRepl& UniqueId, FOMDSoftProtoPtr campaign, FOMDSoftProtoPtr Mission, EGameDifficulty Difficulty, const TArray<FOMDSoftProtoPtr>& HostUnlockedMissions, const TArray<int32>& entitleIndexCollection, FOMDRandomModeClientInfo randomModeInfo) {
}

void AOMDOnlineBeaconClient::Client_NotifyRandomModeMissionAndDebuffChosen_Implementation(int32 tier, int32 missionIndex, int32 debuffIndex) {
}

void AOMDOnlineBeaconClient::Client_NotifyRandomModeInitialize_Implementation(int32 newSeed) {
}

void AOMDOnlineBeaconClient::Client_NotifyRandomModeDebuffRerolled_Implementation(int32 tier, int32 newDebuffIndex) {
}

void AOMDOnlineBeaconClient::Client_NotifyRandomModeBuffChosen_Implementation(int32 tier, int32 buffIndex) {
}

void AOMDOnlineBeaconClient::Client_NotifyMissionChanged_Implementation(FOMDSoftProtoPtr Mission) {
}

void AOMDOnlineBeaconClient::Client_NotifyGameWillLaunch_Implementation() {
}

void AOMDOnlineBeaconClient::Client_NotifyDisconnectReason_Implementation(EBeaconDisconnectReason DisconnectReason) {
}

void AOMDOnlineBeaconClient::Client_NotifyDifficultyChanged_Implementation(EGameDifficulty Difficulty) {
}

void AOMDOnlineBeaconClient::Client_NotifyDebuffChoices_Implementation() {
}

void AOMDOnlineBeaconClient::Client_LaunchGame_Implementation(int32 serverPort) {
}

void AOMDOnlineBeaconClient::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const {
    Super::GetLifetimeReplicatedProps(OutLifetimeProps);
    
    DOREPLIFETIME(AOMDOnlineBeaconClient, LobbyState);
}


