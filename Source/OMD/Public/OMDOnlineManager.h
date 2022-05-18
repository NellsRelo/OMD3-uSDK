#pragma once
#include "CoreMinimal.h"
#include "OMDSoftProtoPtr.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Object -FallbackName=Object
#include "OMDSingletonInterface.h"
#include "ESessionFailureReason.h"
#include "EGameDifficulty.h"
#include "EBeaconDisconnectReason.h"
#include "EBeaconAckStatus.h"
#include "EJoinFailureReason.h"
#include "OMDOnlineSearchResult.h"
#include "EBeaconType.h"
#include "OMDOnlinePlayer.h"
#include "OMDOnlineManager.generated.h"

class AOMDOnlineBeaconClient;
class AOnlineBeaconHost;
class AOMDOnlineBeaconHostObj;

UCLASS(Abstract, BlueprintType, Blueprintable)
class OMD_API UOMDOnlineManager : public UObject, public IOMDSingletonInterface {
    GENERATED_BODY()
public:
    DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnReceivedSessionFailureDelegate, ESessionFailureReason, failureReason);
    DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FOnReceivedHostStreamSubscriptionReady, const int64&, ClientPlayerId, const FString&, streamUrl);
    DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnReceivedHostMissionDelegate, FOMDSoftProtoPtr, Mission);
    DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnReceivedHostDifficultyDelegate, EGameDifficulty, Difficulty);
    DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnReceivedClientAck, EBeaconAckStatus, Status);
    DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnReceivedBeaconPlayerReadyDelegate, bool, bPlayerReady);
    DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnReceivedBeaconPlayerNameDelegate, const FString&, PlayerName);
    DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FOnJoinGameCompleteDelegate, bool, bWasSuccessful, EJoinFailureReason, Result);
    DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnJoinGameBeganDelegate, bool, bPendingJoin);
    DECLARE_DYNAMIC_MULTICAST_DELEGATE(FOnJoinedAsClientDelegate);
    DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnHostGameCompleteDelegate, bool, bWasSuccessful);
    DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnHostGameBeganDelegate, bool, bPendingCreate);
    DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnFriendInviteAcceptedDelegate, const FOMDOnlineSearchResult&, searchResult);
    DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnFindGamesCompleteDelegate, const TArray<FOMDOnlineSearchResult>&, SearchResults);
    DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnDestroyGameCompleteDelegate, bool, bWasSuccessful);
    DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnBeaconPlayerDisconnectedNonTravelDelegate, const FString&, PlayerName);
    DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnBeaconPlayerDisconnectedDelegate, const FString&, PlayerName);
    DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnBeaconPlayerConnectedDelegate, const FString&, PlayerName);
    DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnBeaconLaunchGameDelegate, const FString&, travelURL);
    DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FOnBeaconFailedToConnectDelegate, EBeaconType, BeaconType, EBeaconDisconnectReason, DisconnectReason);
    DECLARE_DYNAMIC_MULTICAST_DELEGATE(FOnBeaconAdvanceCinematicDelegate);
    DECLARE_DYNAMIC_MULTICAST_DELEGATE(FOMDSessionParticipantChangedDelegate);
    
    UPROPERTY(BlueprintAssignable)
    FOnHostGameBeganDelegate OnHostGameBegan;
    
    UPROPERTY(BlueprintAssignable)
    FOnHostGameCompleteDelegate OnHostGameComplete;
    
    UPROPERTY(BlueprintAssignable)
    FOnFindGamesCompleteDelegate OnFindGamesComplete;
    
    UPROPERTY(BlueprintAssignable)
    FOnFriendInviteAcceptedDelegate OnFriendInviteAccepted;
    
    UPROPERTY(BlueprintAssignable)
    FOnJoinGameBeganDelegate OnJoinGameBegan;
    
    UPROPERTY(BlueprintAssignable)
    FOnJoinGameCompleteDelegate OnJoinGameComplete;
    
    UPROPERTY(BlueprintAssignable)
    FOnDestroyGameCompleteDelegate OnDestroyGameComplete;
    
    UPROPERTY(BlueprintAssignable)
    FOnReceivedHostMissionDelegate OnReceivedHostMission;
    
    UPROPERTY(BlueprintAssignable)
    FOnReceivedHostDifficultyDelegate OnReceivedHostDifficulty;
    
    UPROPERTY(BlueprintAssignable)
    FOnJoinedAsClientDelegate OnJoinedAsClientDelegate;
    
    UPROPERTY(BlueprintAssignable)
    FOnReceivedClientAck OnReceivedClientAck;
    
    UPROPERTY(BlueprintAssignable)
    FOnReceivedBeaconPlayerNameDelegate OnReceivedBeaconPlayerName;
    
    UPROPERTY(BlueprintAssignable)
    FOnReceivedBeaconPlayerReadyDelegate OnReceivedBeaconPlayerReady;
    
    UPROPERTY(BlueprintAssignable)
    FOnReceivedHostStreamSubscriptionReady OnReceivedHostStreamSubscriptionReady;
    
    UPROPERTY(BlueprintAssignable)
    FOnBeaconPlayerDisconnectedDelegate OnBeaconPlayerDisconnected;
    
    UPROPERTY(BlueprintAssignable)
    FOnBeaconPlayerDisconnectedNonTravelDelegate OnBeaconPlayerDisconnectedNonTravel;
    
    UPROPERTY(BlueprintAssignable)
    FOnBeaconPlayerConnectedDelegate OnBeaconPlayerConnected;
    
    UPROPERTY(BlueprintAssignable)
    FOnBeaconFailedToConnectDelegate OnBeaconFailedToConnect;
    
    UPROPERTY(BlueprintAssignable)
    FOnBeaconLaunchGameDelegate OnBeaconLaunchGame;
    
    UPROPERTY(BlueprintAssignable)
    FOnBeaconAdvanceCinematicDelegate OnBeaconAdvanceCinematic;
    
    UPROPERTY(BlueprintAssignable)
    FOnReceivedSessionFailureDelegate OnReceivedSessionFailure;
    
protected:
    UPROPERTY()
    AOnlineBeaconHost* BeaconHost;
    
    UPROPERTY()
    AOMDOnlineBeaconHostObj* BeaconHostObj;
    
    UPROPERTY()
    AOMDOnlineBeaconClient* LocalBeaconClient;
    
    UPROPERTY()
    TArray<FOMDOnlinePlayer> ReservedPlayers;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    float SessionFailureDelay;
    
public:
    UPROPERTY(BlueprintAssignable)
    FOMDSessionParticipantChangedDelegate OnSessionParticipantJoined;
    
    UPROPERTY(BlueprintAssignable)
    FOMDSessionParticipantChangedDelegate OnSessionParticipantLeft;
    
    UOMDOnlineManager();
protected:
    UFUNCTION()
    void OnReceivedPlayerReady(bool IsReady);
    
    UFUNCTION()
    void OnReceivedPlayerName(const FString& PlayerName, const FString& playerNetID);
    
    UFUNCTION()
    void OnPlayerDisconnectedNonTravel(const FString& PlayerName);
    
    UFUNCTION()
    void OnPlayerDisconnected(const FString& PlayerName);
    
    UFUNCTION()
    void OnPlayerConnected(const FString& PlayerName);
    
public:
    UFUNCTION()
    void HostStreamSubscriptionReady(const int64& PlayerId, const FString& streamUrl);
    
    
    // Fix for true pure virtual functions not being implemented
};

