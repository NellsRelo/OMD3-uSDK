#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Object -FallbackName=Object
#include "OMDEventDelegate.generated.h"

class AController;
class UOMDEventDelegateParams;
class AActor;

UCLASS(Abstract, Blueprintable)
class OMD_API UOMDEventDelegate : public UObject {
    GENERATED_BODY()
public:
    UOMDEventDelegate();
protected:
    UFUNCTION(BlueprintAuthorityOnly, BlueprintNativeEvent)
    bool BP_OnInvoke(FName EventName, UObject* Source, AActor* Causer, AController* Instigator, UOMDEventDelegateParams* Params);
    
};

