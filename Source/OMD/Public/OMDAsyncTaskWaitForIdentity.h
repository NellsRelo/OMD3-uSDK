#pragma once
#include "CoreMinimal.h"
#include "Kismet/BlueprintAsyncActionBase.h"
#include "OMDAsyncTaskWaitForIdentityResultDelegate.h"
#include "OMDAsyncTaskWaitForIdentity.generated.h"

class UOMDAsyncTaskWaitForIdentity;
class UObject;

UCLASS(Blueprintable)
class OMD_API UOMDAsyncTaskWaitForIdentity : public UBlueprintAsyncActionBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOMDAsyncTaskWaitForIdentityResult OnSuccess;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOMDAsyncTaskWaitForIdentityResult OnFailure;
    
    UOMDAsyncTaskWaitForIdentity();

    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static UOMDAsyncTaskWaitForIdentity* WaitForOnlineIdentity(UObject* WorldContextObject, float Timeout);
    
};

