#pragma once
#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "OMDSoftProtoPtr.h"
#include "OMDEntitlementCache.generated.h"

UCLASS(Blueprintable)
class OMD_API UOMDEntitlementCache : public UObject {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FOMDSoftProtoPtr> Entitlements;
    
public:
    UOMDEntitlementCache();

};

