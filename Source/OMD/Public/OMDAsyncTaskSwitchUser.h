#pragma once
#include "CoreMinimal.h"
#include "Kismet/BlueprintAsyncActionBase.h"
#include "OMDAsyncTaskSwitchUserResultDelegate.h"
#include "OMDAsyncTaskSwitchUser.generated.h"

class APlayerController;
class UOMDAsyncTaskSwitchUser;
class UObject;

UCLASS(Blueprintable)
class OMD_API UOMDAsyncTaskSwitchUser : public UBlueprintAsyncActionBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOMDAsyncTaskSwitchUserResult OnSuccess;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOMDAsyncTaskSwitchUserResult OnFailure;
    
    UOMDAsyncTaskSwitchUser();

    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static UOMDAsyncTaskSwitchUser* SwitchUser(UObject* WorldContextObject, APlayerController* PlayerController);
    
};

