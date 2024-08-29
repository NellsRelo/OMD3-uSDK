#pragma once
#include "CoreMinimal.h"
#include "Kismet/BlueprintAsyncActionBase.h"
#include "OMDAsyncTaskCheckOnlinePermissionsFinishedDelegateDelegate.h"
#include "OMDAsyncTaskCheckOnlinePermissions.generated.h"

class APlayerController;
class UOMDAsyncTaskCheckOnlinePermissions;

UCLASS(Blueprintable)
class OMD_API UOMDAsyncTaskCheckOnlinePermissions : public UBlueprintAsyncActionBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOMDAsyncTaskCheckOnlinePermissionsFinishedDelegate OnFinished;
    
    UOMDAsyncTaskCheckOnlinePermissions();

    UFUNCTION(BlueprintCallable)
    static UOMDAsyncTaskCheckOnlinePermissions* CheckOnlinePermissions(APlayerController* Controller, bool showModal);
    
};

