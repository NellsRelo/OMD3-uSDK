#include "UBTTask_OMDPlayAttackMtg.h"

UUBTTask_OMDPlayAttackMtg::UUBTTask_OMDPlayAttackMtg() {
    this->NodeName = TEXT("OMD Play Attack Montage");
    this->MyOwnerComp = NULL;
    this->MyAnimInstance = NULL;
    this->MyAttackMontage = NULL;
    this->MyAbilitySystem = NULL;
    this->LoopCount = 1;
}


