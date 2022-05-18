#pragma once
#include "CoreMinimal.h"
#include "Kismet/BlueprintAsyncActionBase.h"
#include "OMDAsyncTaskWaitForIdentityResultDelegate.h"
#include "OMDAsyncTaskWaitForIdentity.generated.h"

class UOMDAsyncTaskWaitForIdentity;
class UObject;

UCLASS()
class OMD_API UOMDAsyncTaskWaitForIdentity : public UBlueprintAsyncActionBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable)
    FOMDAsyncTaskWaitForIdentityResult OnSuccess;
    
    UPROPERTY(BlueprintAssignable)
    FOMDAsyncTaskWaitForIdentityResult OnFailure;
    
    UOMDAsyncTaskWaitForIdentity();
    UFUNCTION(BlueprintCallable)
    static UOMDAsyncTaskWaitForIdentity* WaitForOnlineIdentity(UObject* WorldContextObject, float Timeout);
    
};

