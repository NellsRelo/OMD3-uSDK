#include "OMDMissionStats.h"

FOMDMissionStats::FOMDMissionStats() {
    this->Score = 0;
    this->SoloScore = 0;
    this->CoOpScore = 0;
    this->skulls = 0;
    this->Combo = 0;
    this->KillStreak = 0;
    this->CompletionTime = 0.00f;
    this->EndlessWavesCompleted = 0;
    this->WCWeeklyScoreSolo = 0;
    this->WCWeeklyScoreCoOp = 0;
    this->WCWeeksSinceStartSolo = 0;
    this->WCWeeksSinceStartCoOp = 0;
}

