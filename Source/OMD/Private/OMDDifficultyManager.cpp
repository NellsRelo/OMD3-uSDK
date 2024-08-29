#include "OMDDifficultyManager.h"

UOMDDifficultyManager::UOMDDifficultyManager() {
    this->MaximumMoveSpeed = 3000.00f;
    this->ApprenticeHealthModifier = 0.80f;
    this->ApprenticeMovementSpeedModifier = 0.80f;
    this->ApprenticeDamageModifier = 0.80f;
    this->ApprenticeRiftPointsModifier = 1.00f;
    this->RiftLordHealthModifier = 1.20f;
    this->RiftLordMovementSpeedModifier = 1.00f;
    this->RiftLordDamageModifier = 1.20f;
    this->RiftLordRiftPointsModifier = 0.50f;
    this->RiftLordTimedBreakOverride = 3.00f;
    this->EndlessHealthModifier = 1.00f;
    this->EndlessMovementSpeedModifier = 1.00f;
    this->EndlessDamageModifier = 1.00f;
    this->EndlessRiftPointsModifier = 1.00f;
    this->EndlessHealthAdditionPerWave = 0.05f;
    this->EndlessMovementSpeedAdditionPerWave = 0.00f;
    this->EndlessDamageAdditionPerWave = 0.03f;
    this->EndlessCoinReductionPerWave = 0.01f;
    this->EndlessTimedBreakReductionPerIteration = 2;
    this->EndlessIterationNoGoBreaks = 4;
    this->EndlessWaveNoPickups = 21;
}


