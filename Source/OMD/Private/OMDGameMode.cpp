#include "OMDGameMode.h"
#include "OMDGameSession.h"

AOMDGameMode::AOMDGameMode(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->GameSessionClass = AOMDGameSession::StaticClass();
    this->NormalMeleeAggroCap = 3;
    this->LargeMeleeAggroCap = 1;
    this->RangedlMeleeAggroCap = 2;
    this->RunnersAggroCap = 0;
    this->SpecialAggroCap = 1;
    this->HealerAggroCap = 1;
    this->FlyerAggroCap = 2;
    this->GlobalAggroCap = 10;
    this->bDebugNoWisps = false;
}

void AOMDGameMode::RemoveDestructibleTrap(AOMDTrap* deadTrap) {
}

void AOMDGameMode::RegisterDestructibleTrap(AOMDTrap* newTrap) {
}

int32 AOMDGameMode::GetAggroCap(EAggroGroup AggroGroup) {
    return 0;
}



