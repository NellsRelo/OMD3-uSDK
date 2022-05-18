#include "OMDGameStats.h"

FOMDGameStats::FOMDGameStats() {
    this->BaseScore = 0;
    this->ComboBonus = 0;
    this->HeadshotBonus = 0;
    this->KillStreakBonus = 0;
    this->RiftPointBonus = 0;
    this->SkullBonus = 0;
    this->TimeBonus = 0;
    this->TotalScore = 0;
    this->CoinEarned = 0;
    this->LargestCombo = 0;
    this->NumberOfCombos = 0;
    this->LargestKillStreak = 0;
    this->NumberOfKillStreaks = 0;
    this->EndlessWavesCompleted = 0;
    this->CompletionTime = 0.00f;
    this->SkullsPickedUp = 0;
    this->PerfectVictory = false;
}

