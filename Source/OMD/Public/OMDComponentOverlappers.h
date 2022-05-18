#pragma once
#include "CoreMinimal.h"
#include "OMDComponentOverlappers.generated.h"

class AActor;

USTRUCT(BlueprintType)
struct OMD_API FOMDComponentOverlappers {
    GENERATED_BODY()
public:
    UPROPERTY()
    TArray<AActor*> OverlappingActors;
    
    FOMDComponentOverlappers();
};

