#pragma once
#include "CoreMinimal.h"
#include "OMDComponentOverlappers.generated.h"

class AActor;

USTRUCT(BlueprintType)
struct OMD_API FOMDComponentOverlappers {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<AActor*> OverlappingActors;
    
    FOMDComponentOverlappers();
};

