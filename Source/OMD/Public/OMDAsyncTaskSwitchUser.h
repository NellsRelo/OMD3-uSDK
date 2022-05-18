#pragma once
#include "CoreMinimal.h"
#include "Kismet/BlueprintAsyncActionBase.h"
#include "OMDAsyncTaskSwitchUserResultDelegate.h"
#include "OMDAsyncTaskSwitchUser.generated.h"

class UObject;
class UOMDAsyncTaskSwitchUser;
class APlayerController;

UCLASS()
class OMD_API UOMDAsyncTaskSwitchUser : public UBlueprintAsyncActionBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable)
    FOMDAsyncTaskSwitchUserResult OnSuccess;
    
    UPROPERTY(BlueprintAssignable)
    FOMDAsyncTaskSwitchUserResult OnFailure;
    
    UOMDAsyncTaskSwitchUser();
    UFUNCTION(BlueprintCallable)
    static UOMDAsyncTaskSwitchUser* SwitchUser(UObject* WorldContextObject, APlayerController* PlayerController);
    
};

