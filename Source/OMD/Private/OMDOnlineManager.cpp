#include "OMDOnlineManager.h"

UOMDOnlineManager::UOMDOnlineManager() {
    this->BeaconHost = NULL;
    this->BeaconHostObj = NULL;
    this->LocalBeaconClient = NULL;
    this->SessionFailureDelay = 0.20f;
}

void UOMDOnlineManager::OnReceivedPlayerReady(bool IsReady) {
}

void UOMDOnlineManager::OnReceivedPlayerName(const FString& PlayerName, const FString& playerNetID) {
}

void UOMDOnlineManager::OnPlayerDisconnectedNonTravel(const FString& PlayerName) {
}

void UOMDOnlineManager::OnPlayerDisconnected(const FString& PlayerName) {
}

void UOMDOnlineManager::OnPlayerConnected(const FString& PlayerName) {
}

void UOMDOnlineManager::HostStreamSubscriptionReady(const int64& PlayerId, const FString& streamUrl) {
}


