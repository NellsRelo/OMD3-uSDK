#pragma once
#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "EBeaconAckStatus.h"
#include "EBeaconDisconnectReason.h"
#include "EBeaconType.h"
#include "EGameDifficulty.h"
#include "EJoinFailureReason.h"
#include "ESessionFailureReason.h"
#include "OMDOnlinePlayer.h"
#include "OMDOnlineSearchResult.h"
#include "OMDSingletonInterface.h"
#include "OMDSoftProtoPtr.h"
#include "OMDOnlineManager.generated.h"

class AOMDOnlineBeaconClient;
class AOMDOnlineBeaconHostObj;
class AOnlineBeaconHost;

UCLASS(Abstract, Blueprintable)
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
    DECLARE_DYNAMIC_MULTICAST_DELEGATE(FOnJoinSessionCompleteExternalDelegate);
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
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnHostGameBeganDelegate OnHostGameBegan;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnHostGameCompleteDelegate OnHostGameComplete;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnFindGamesCompleteDelegate OnFindGamesComplete;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnFriendInviteAcceptedDelegate OnFriendInviteAccepted;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnJoinGameBeganDelegate OnJoinGameBegan;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnJoinGameCompleteDelegate OnJoinGameComplete;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnJoinSessionCompleteExternalDelegate OnJoinSessionCompleteExternal;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnDestroyGameCompleteDelegate OnDestroyGameComplete;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnReceivedHostMissionDelegate OnReceivedHostMission;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnReceivedHostDifficultyDelegate OnReceivedHostDifficulty;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnJoinedAsClientDelegate OnJoinedAsClientDelegate;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnReceivedClientAck OnReceivedClientAck;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnReceivedBeaconPlayerNameDelegate OnReceivedBeaconPlayerName;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnReceivedBeaconPlayerReadyDelegate OnReceivedBeaconPlayerReady;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnReceivedHostStreamSubscriptionReady OnReceivedHostStreamSubscriptionReady;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnBeaconPlayerDisconnectedDelegate OnBeaconPlayerDisconnected;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnBeaconPlayerDisconnectedNonTravelDelegate OnBeaconPlayerDisconnectedNonTravel;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnBeaconPlayerConnectedDelegate OnBeaconPlayerConnected;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnBeaconFailedToConnectDelegate OnBeaconFailedToConnect;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnBeaconLaunchGameDelegate OnBeaconLaunchGame;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnBeaconAdvanceCinematicDelegate OnBeaconAdvanceCinematic;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnReceivedSessionFailureDelegate OnReceivedSessionFailure;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    AOnlineBeaconHost* BeaconHost;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    AOMDOnlineBeaconHostObj* BeaconHostObj;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    AOMDOnlineBeaconClient* LocalBeaconClient;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FOMDOnlinePlayer> ReservedPlayers;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float SessionFailureDelay;
    
public:
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOMDSessionParticipantChangedDelegate OnSessionParticipantJoined;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOMDSessionParticipantChangedDelegate OnSessionParticipantLeft;
    
    UOMDOnlineManager();

protected:
    UFUNCTION(BlueprintCallable)
    void OnReceivedPlayerReady(bool IsReady);
    
    UFUNCTION(BlueprintCallable)
    void OnReceivedPlayerName(const FString& PlayerName, const FString& playerNetID);
    
    UFUNCTION(BlueprintCallable)
    void OnPlayerDisconnectedNonTravel(const FString& PlayerName);
    
    UFUNCTION(BlueprintCallable)
    void OnPlayerDisconnected(const FString& PlayerName);
    
    UFUNCTION(BlueprintCallable)
    void OnPlayerConnected(const FString& PlayerName);
    
public:
    UFUNCTION()
    void HostStreamSubscriptionReady(const int64& PlayerId, const FString& streamUrl);
    

    // Fix for true pure virtual functions not being implemented
};

