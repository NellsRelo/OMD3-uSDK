#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "FireHitScanActionDelegateDelegate.h"
#include "OMDAction.h"
#include "OMDAction_FireHitScan.generated.h"

class UOMDAbility;
class UOMDAction_FireHitScan;

UCLASS(Blueprintable)
class OMD_API UOMDAction_FireHitScan : public UOMDAction {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FFireHitScanActionDelegate OnHit;
    
    UOMDAction_FireHitScan();

    UFUNCTION(BlueprintCallable)
    static UOMDAction_FireHitScan* FireHitScan(UOMDAbility* ability, FVector Origin, FVector Direction, FName traceProfile, float Distance, int32 weaponIndex, bool autoCalculateDirectionForPlayer);
    
};

