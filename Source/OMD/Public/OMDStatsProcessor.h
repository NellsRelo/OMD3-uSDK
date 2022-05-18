#pragma once
#include "CoreMinimal.h"
#include "OMDEventDelegate.h"
#include "OMDStatsProcessor.generated.h"

UCLASS(Abstract)
class OMD_API UOMDStatsProcessor : public UOMDEventDelegate {
    GENERATED_BODY()
public:
    UOMDStatsProcessor();
};

