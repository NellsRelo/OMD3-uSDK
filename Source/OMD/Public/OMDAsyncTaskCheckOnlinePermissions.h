#pragma once
#include "CoreMinimal.h"
#include "Kismet/BlueprintAsyncActionBase.h"
#include "OMDAsyncTaskCheckOnlinePermissionsFinishedDelegateDelegate.h"
#include "OMDAsyncTaskCheckOnlinePermissions.generated.h"

class UOMDAsyncTaskCheckOnlinePermissions;
class APlayerController;

UCLASS()
class OMD_API UOMDAsyncTaskCheckOnlinePermissions : public UBlueprintAsyncActionBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable)
    FOMDAsyncTaskCheckOnlinePermissionsFinishedDelegate OnFinished;
    
    UOMDAsyncTaskCheckOnlinePermissions();
    UFUNCTION(BlueprintCallable)
    static UOMDAsyncTaskCheckOnlinePermissions* CheckOnlinePermissions(APlayerController* Controller, bool showModal);
    
};

