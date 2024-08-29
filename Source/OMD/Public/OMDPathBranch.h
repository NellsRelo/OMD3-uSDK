#pragma once
#include "CoreMinimal.h"
#include "OMDPathBranch.generated.h"

USTRUCT(BlueprintType)
struct OMD_API FOMDPathBranch {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 PointIndex;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float BranchWeight;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float BranchLength;
    
    FOMDPathBranch();
};

