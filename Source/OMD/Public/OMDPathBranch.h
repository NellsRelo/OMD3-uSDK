#pragma once
#include "CoreMinimal.h"
#include "OMDPathBranch.generated.h"

USTRUCT(BlueprintType)
struct OMD_API FOMDPathBranch {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    int32 PointIndex;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    float BranchWeight;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    float BranchLength;
    
    FOMDPathBranch();
};

