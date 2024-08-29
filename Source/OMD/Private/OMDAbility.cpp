#include "OMDAbility.h"
#include "Templates/SubclassOf.h"

UOMDAbility::UOMDAbility() {
    this->ComboNumber = 0;
}

void UOMDAbility::ManualResetInitialDamageHit() {
}

bool UOMDAbility::IsActive() const {
    return false;
}

UObject* UOMDAbility::GetSource() const {
    return NULL;
}

FOMDSoftProtoPtr UOMDAbility::GetProtodata() const {
    return FOMDSoftProtoPtr{};
}

AController* UOMDAbility::GetOwningController() const {
    return NULL;
}

AActor* UOMDAbility::GetOwner() const {
    return NULL;
}

UOMDAbilityAttributes* UOMDAbility::GetAttributes() const {
    return NULL;
}

void UOMDAbility::GetAllActorsOfClass(TSubclassOf<AActor> actorClass, TArray<AActor*>& Actors) const {
}

void UOMDAbility::EndAbility() {
}

void UOMDAbility::CommitAbility() {
}

void UOMDAbility::CancelAbility() {
}







bool UOMDAbility::BP_CanActivateAbility_Implementation(UOMDAbilityParameters* Params) const {
    return false;
}





