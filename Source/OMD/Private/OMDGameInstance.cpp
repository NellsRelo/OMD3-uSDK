#include "OMDGameInstance.h"

UOMDGameInstance::UOMDGameInstance() {
    this->DefaultSaveGame = NULL;
    this->SaveGame = NULL;
    this->bDidWin = false;
    this->bDidCompleteCampaign = false;
    this->bDidGrantItem = false;
    this->RiftPointSkulls = 0;
    this->BonusSkulls = 0;
    this->bBonusSkullHighScore = false;
    this->bBonusSkullHighCombo = false;
    this->bBonusSkullKillStreak = false;
    this->bBonusSkullCompletionTime = false;
    this->bBonusSkullPerfectVictory = false;
    this->bBonusSkullPerfectVictoryNoDamage = false;
    this->bBonusSkullEndlessWavesCompleted = false;
    this->BonusSkullsMinionsKilled = 0;
    this->BonusSkullsEndlessWaves = 0;
    this->ApprenticeBonusSkulls = 0;
    this->WarMageBonusSkulls = 0;
    this->initialRiftPoints = 0;
    this->bGameHasUserFocus = true;
    this->bIsInPostGameMenus = false;
    this->ActiveWeeklyChallengeCount = 1;
    this->WeeklyChallengeUTCOffset = -8;
    this->WeeklyChallengeStartYear = 2020;
    this->WeeklyChallengeStartMonth = 8;
    this->WeeklyChallengeStartDay = 11;
    this->DaysInWeeklyChallengeWeek = 7;
    this->EntitlementCache = NULL;
    this->bJustFinishedRandomModeCampaign = false;
    this->bRandomModeSetupAsClient = false;
    this->AIOverlapPerfMode = false;
    this->AIMovementComponentMaxSkippedFrames = 0;
    this->AILerpmeshSpeed = 0.00f;
    this->AITargetingEnabled = true;
    this->ProjUsePool = true;
    this->PerfShowHUD = false;
}

void UOMDGameInstance::UpdateWCEngagementActivities() {
}

void UOMDGameInstance::UpdateTrophyEngagementActivities() {
}

void UOMDGameInstance::UpdateScrambleEngagmentActivities() {
}

bool UOMDGameInstance::UpdateMissionGrants() {
    return false;
}

void UOMDGameInstance::UpdateEndlessEngagementActivities(bool bNewHighScore) {
}

void UOMDGameInstance::UpdateCampaignEngagementActivities(const FOMDSoftProtoPtr& Mission, const FOMDSoftProtoPtr& campaign, EGameDifficulty Difficulty, uint8 newSkulls, bool bNewHighScore) {
}

void UOMDGameInstance::ShowInviteFriendOverlay() {
}

void UOMDGameInstance::ShowCoOpProfile() {
}

void UOMDGameInstance::SetSessionPlayedWC() {
}

void UOMDGameInstance::SetSessionPlayedScramble() {
}

void UOMDGameInstance::SetSessionPlayedEndless() {
}

void UOMDGameInstance::SetSessionNewHS() {
}

void UOMDGameInstance::SetOnlinePlayerReady(bool bIsReady) {
}

void UOMDGameInstance::SetGameIntegrity(float newIntegrity) {
}

void UOMDGameInstance::SetCurrentMission(FOMDSoftProtoPtr Mission) {
}

void UOMDGameInstance::SetCurrentDifficulty(EGameDifficulty Difficulty) {
}

void UOMDGameInstance::SetCurrentCampaign(FOMDSoftProtoPtr campaign) {
}

void UOMDGameInstance::SetCachedLeaderboardLoginState(bool NewState) {
}

void UOMDGameInstance::SelectMissionAndDebuffForTierByProto(int32 tier, FOMDSoftProtoPtr debuffProto, int32 missionChoice) {
}

void UOMDGameInstance::SelectMissionAndDebuffForTier(int32 tier, int32 debuffChoice, int32 missionChoice) {
}

void UOMDGameInstance::SelectAdditionalBuffForTierByProto(int32 tier, FOMDSoftProtoPtr buffProto) {
}

void UOMDGameInstance::SelectAdditionalBuffForTier(int32 tier, int32 buff) {
}

void UOMDGameInstance::ReturnToDefaultMap() {
}

void UOMDGameInstance::RetrySave() {
}

bool UOMDGameInstance::ResetSaveGame() {
    return false;
}

void UOMDGameInstance::RerollDebuffFromTier(int32 tierToReroll, int32 choiceToStartAt) {
}

bool UOMDGameInstance::RequireLeaderboardPermissions() {
    return false;
}

bool UOMDGameInstance::ReleaseOnlineGame() {
    return false;
}

void UOMDGameInstance::RefreshPurchaseReceipts(APlayerController* Player) {
}

void UOMDGameInstance::RefreshLeaderboardPermissionsCache(bool notifyOnComplete) {
}

void UOMDGameInstance::ReconnectToHost() {
}

bool UOMDGameInstance::Perf_GetHUDVisibility() {
    return false;
}

void UOMDGameInstance::OnSessionParticipantLeft() {
}

void UOMDGameInstance::OnSessionParticipantJoined() {
}

void UOMDGameInstance::OnReceivedSessionFailure(ESessionFailureReason failureReason) {
}

void UOMDGameInstance::OnPreClientTravel(const FString& pendingURL, ETravelType TravelType, bool bIsSeamlessTravel) {
}

void UOMDGameInstance::OnPlayerDisconnectedNonTravel(const FString& PlayerName) {
}

void UOMDGameInstance::OnPlayerConnected(const FString& PlayerName) {
}

void UOMDGameInstance::OnOnlineGameHostedComplete(bool bWasSuccessful) {
}

void UOMDGameInstance::OnOnlineGameHostedBegan(bool isPendingCreate) {
}

void UOMDGameInstance::OnJoinedAsClient() {
}

void UOMDGameInstance::OnHostStreamSubscriptionReady(const int64& ClientPlayerId, const FString& streamUrl) {
}

void UOMDGameInstance::OnGamesListComplete(const TArray<FOMDOnlineSearchResult>& SearchResults) {
}

void UOMDGameInstance::OnGameJoinComplete(bool bWasSuccessful, EJoinFailureReason reason) {
}

void UOMDGameInstance::OnGameJoinBegan(bool bPendingJoin) {
}

void UOMDGameInstance::OnGameDestroyedComplete(bool bWasSuccessful) {
}

void UOMDGameInstance::OnFriendInviteAccepted(const FOMDOnlineSearchResult& searchResult) {
}

void UOMDGameInstance::OnClientLaunchGame(const FString& travelURL) {
}

void UOMDGameInstance::OnBeaconFailedToConnect(EBeaconType Type, EBeaconDisconnectReason DisconnectReason) {
}

void UOMDGameInstance::NotifyGameWillLaunch() {
}

void UOMDGameInstance::NotifyDebuffChoices() {
}

bool UOMDGameInstance::JoinOnlineGame(const FOMDOnlineSearchResult& searchResult) {
    return false;
}

bool UOMDGameInstance::IsValidGame() {
    return false;
}

bool UOMDGameInstance::IsShaderPipelinePrecompileComplete() const {
    return false;
}

bool UOMDGameInstance::IsSavingEnabled() const {
    return false;
}

bool UOMDGameInstance::IsPlayerReadyToTravel() const {
    return false;
}

bool UOMDGameInstance::IsInRandomModeCampaign() const {
    return false;
}

bool UOMDGameInstance::IsEntitledToSkin(FOMDSoftProtoPtr OMDPlayerSkinProto) const {
    return false;
}

bool UOMDGameInstance::IsEntitledToRandomModeModifier(FOMDSoftProtoPtr OMDRandomModeModifierProto) const {
    return false;
}

bool UOMDGameInstance::IsEntitledToMission(FOMDSoftProtoPtr OMDMissionProto) const {
    return false;
}

bool UOMDGameInstance::IsEntitledToItem(FOMDSoftProtoPtr OMDItemProto) const {
    return false;
}

bool UOMDGameInstance::IsEntitledToCampaign(FOMDSoftProtoPtr OMDCampaignProto) const {
    return false;
}

bool UOMDGameInstance::IsAutoLoginComplete() const {
    return false;
}

void UOMDGameInstance::InitializeRandomMode() {
}

void UOMDGameInstance::IncrementSessionMissions() {
}

void UOMDGameInstance::IncrementItemsUpgraded() {
}

void UOMDGameInstance::HostOnlineGame(const FString& serverName, const FString& mapName, bool bIsLan, int32 MaxPlayers, bool bShouldAdvertise) {
}

bool UOMDGameInstance::HasInviteFriendOverlay() const {
    return false;
}

bool UOMDGameInstance::HasFinishedCurrentCampaign() {
    return false;
}

bool UOMDGameInstance::HasEntitlement(FOMDSoftProtoPtr OMDEntitlementProto) const {
    return false;
}

bool UOMDGameInstance::HasCachedLeaderboardPermissions() {
    return false;
}

void UOMDGameInstance::HandleClientLeftGameAcknowledged(EOMDMessageBoxResult Result) {
}

void UOMDGameInstance::HandleClientAck(EBeaconAckStatus Status) {
}

int64 UOMDGameInstance::GetPostgamePlayerStat(const FString& Name) {
    return 0;
}

FString UOMDGameInstance::GetPlayerNickname(int32 Index) const {
    return TEXT("");
}

UOMDOnlineManager* UOMDGameInstance::GetOnlineManager() {
    return NULL;
}

void UOMDGameInstance::GetOnlineGamesList(const TArray<FOMDSoftProtoPtr>& buckets, FOMDSoftProtoPtr Mission, EGameDifficulty Difficulty, bool bFilterDifficulty) {
}

FDateTime UOMDGameInstance::GetNextWeeklyChallengeTime() const {
    return FDateTime{};
}

int32 UOMDGameInstance::GetNextWeeklyChallengeIndex() const {
    return 0;
}

FOMDSoftProtoPtr UOMDGameInstance::GetNextWeeklyChallenge() const {
    return FOMDSoftProtoPtr{};
}

FOMDSoftProtoPtr UOMDGameInstance::GetNextMission() {
    return FOMDSoftProtoPtr{};
}

FString UOMDGameInstance::GetMissionLevelName(TSoftObjectPtr<UWorld> worldObj) {
    return TEXT("");
}

EMissionLaunchMode UOMDGameInstance::GetMissionLaunchMode() const {
    return EMissionLaunchMode::SinglePlayer;
}

float UOMDGameInstance::GetGameIntegrity() {
    return 0.0f;
}

int32 UOMDGameInstance::GetCurrentWeeklyChallengeIndex() const {
    return 0;
}

FOMDSoftProtoPtr UOMDGameInstance::GetCurrentWeeklyChallenge() const {
    return FOMDSoftProtoPtr{};
}

TArray<FOMDSoftProtoPtr> UOMDGameInstance::GetCurrentMissionList() {
    return TArray<FOMDSoftProtoPtr>();
}

FString UOMDGameInstance::GetCurrentMissionLevelName() {
    return TEXT("");
}

int32 UOMDGameInstance::GetCampaignProgress() {
    return 0;
}

void UOMDGameInstance::ForceReturnToDefaultMap() {
}

void UOMDGameInstance::FinishAcceptingFriendInvite() {
}

FOMDSoftProtoPtr UOMDGameInstance::FindCampaignByName(FText campaignName, bool& bSuccess) {
    return FOMDSoftProtoPtr{};
}

void UOMDGameInstance::EstablishOnlineLink(EBeaconType BeaconType) {
}

void UOMDGameInstance::EnableSaving() {
}

void UOMDGameInstance::DoServerTravel(const FString& travelPath, TSoftClassPtr<AGameModeBase> GameModeClass) {
}

bool UOMDGameInstance::DoMisionGrants(bool bIsPremission) {
    return false;
}

void UOMDGameInstance::DoClientTravel(const FString& travelURL) {
}

bool UOMDGameInstance::DestroyOnlineGame(bool notify) {
    return false;
}

void UOMDGameInstance::CompleteRandomMode(bool didWin) {
}

void UOMDGameInstance::ClientLeftGame() {
}

void UOMDGameInstance::ClearLeaderboardPermissionsCache() {
}

bool UOMDGameInstance::CanLaunchGame() const {
    return false;
}

bool UOMDGameInstance::CanAccessLeaderboards() {
    return false;
}

void UOMDGameInstance::CacheLeaderboardPermissions(bool Result, EUserPermissionsErrorTypes primaryResult, const TArray<EUserPermissionsErrorTypes>& allResults) {
}














































void UOMDGameInstance::BeginRandomModeGame() {
}

bool UOMDGameInstance::AI_GetOverlapPerfMode() const {
    return false;
}

bool UOMDGameInstance::AdvanceMission() {
    return false;
}

void UOMDGameInstance::AdjustGameIntegrity(float adjustment) {
}

void UOMDGameInstance::AddSessionSkulls(int32 skulls) {
}

void UOMDGameInstance::AddSessionKills(int32 kills) {
}

void UOMDGameInstance::AcceptPendingInviteIfValid() {
}


