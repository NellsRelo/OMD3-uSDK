#include "OMDEventDelegate.h"

UOMDEventDelegate::UOMDEventDelegate() {
}

bool UOMDEventDelegate::BP_OnInvoke_Implementation(FName EventName, UObject* Source, AActor* Causer, AController* Instigator, UOMDEventDelegateParams* Params) {
    return false;
}


