#include "OMDLeaderboardWidget.h"

UOMDLeaderboardWidget::UOMDLeaderboardWidget() {
    this->EntriesPerPage = 0;
    this->lastPage = 0;
    this->CurrentPage = 0;
    this->bShowingFriends = false;
    this->CurrentDifficulty = EGameDifficulty::Apprentice;
    this->bSoloGame = false;
    this->bWeeklyChallenge = false;
    this->bRandomMode = false;
}

void UOMDLeaderboardWidget::UpdateSoloFilter(bool isSolo) {
}

void UOMDLeaderboardWidget::UpdateMissionFilter(FOMDSoftProtoPtr newMission) {
}

void UOMDLeaderboardWidget::UpdateGameModeFilter(bool isStory) {
}

void UOMDLeaderboardWidget::UpdateDifficultyFilter(EGameDifficulty newDifficulty) {
}

void UOMDLeaderboardWidget::ToggleFriendsFilter() {
}

void UOMDLeaderboardWidget::SetPageBasedOnRank(int32 Rank) {
}

void UOMDLeaderboardWidget::SetLastPageFromCount(int32 EntryCount) {
}

void UOMDLeaderboardWidget::SetLastPage(int32 NewLastPage) {
}

void UOMDLeaderboardWidget::RefreshLeaderboards(bool resetPage) {
}

void UOMDLeaderboardWidget::PageUp() {
}

void UOMDLeaderboardWidget::PageDown() {
}

void UOMDLeaderboardWidget::MoveToPage(int32 newPage) {
}

bool UOMDLeaderboardWidget::IsAltEntry(int32 entryIdx) {
    return false;
}

int32 UOMDLeaderboardWidget::GetStartingRankForPage(int32 page) {
    return 0;
}

int32 UOMDLeaderboardWidget::GetPageForRank(int32 Rank) {
    return 0;
}

int32 UOMDLeaderboardWidget::GetLastIdx(int32 EntryCount) {
    return 0;
}

int32 UOMDLeaderboardWidget::GetFirstIdx() {
    return 0;
}

void UOMDLeaderboardWidget::FindCurrentPlayerGlobalRank() {
}







