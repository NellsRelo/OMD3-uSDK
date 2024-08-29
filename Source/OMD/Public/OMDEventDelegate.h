#pragma once
#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "OMDEventDelegate.generated.h"

class AActor;
class AController;
class UOMDEventDelegateParams;

UCLASS(Abstract, Blueprintable)
class OMD_API UOMDEventDelegate : public UObject {
    GENERATED_BODY()
public:
    UOMDEventDelegate();

protected:
    UFUNCTION(BlueprintAuthorityOnly, BlueprintCallable, BlueprintNativeEvent)
    bool BP_OnInvoke(FName EventName, UObject* Source, AActor* Causer, AController* Instigator, UOMDEventDelegateParams* Params);
    
};

