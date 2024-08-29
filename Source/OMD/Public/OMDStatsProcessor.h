#pragma once
#include "CoreMinimal.h"
#include "OMDEventDelegate.h"
#include "OMDStatsProcessor.generated.h"

UCLASS(Abstract, Blueprintable)
class OMD_API UOMDStatsProcessor : public UOMDEventDelegate {
    GENERATED_BODY()
public:
    UOMDStatsProcessor();

};

