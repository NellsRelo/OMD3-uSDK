#include "OMDEventDelegate.h"

class AController;
class UObject;
class UOMDEventDelegateParams;
class AActor;

bool UOMDEventDelegate::BP_OnInvoke_Implementation(FName EventName, UObject* Source, AActor* Causer, AController* Instigator, UOMDEventDelegateParams* Params) {
    return false;
}

UOMDEventDelegate::UOMDEventDelegate() {
}

