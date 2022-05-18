#pragma once
#include "CoreMinimal.h"
#include "OMDAction.h"
#include "FireHitScanActionDelegateDelegate.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Vector -FallbackName=Vector
#include "OMDAction_FireHitScan.generated.h"

class UOMDAction_FireHitScan;
class UOMDAbility;

UCLASS()
class OMD_API UOMDAction_FireHitScan : public UOMDAction {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable)
    FFireHitScanActionDelegate OnHit;
    
    UOMDAction_FireHitScan();
    UFUNCTION(BlueprintCallable)
    static UOMDAction_FireHitScan* FireHitScan(UOMDAbility* ability, FVector Origin, FVector Direction, FName traceProfile, float Distance, int32 weaponIndex, bool autoCalculateDirectionForPlayer);
    
};

