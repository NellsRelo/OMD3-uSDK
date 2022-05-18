#pragma once
#include "CoreMinimal.h"
#include "OMDPathNode.h"
#include "OMDPath.generated.h"

USTRUCT(BlueprintType)
struct OMD_API FOMDPath {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    TArray<FOMDPathNode> Nodes;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    bool bLoop;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    int32 CurrentPathNodeIdx;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    int32 NextPathNodeIdx;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    int32 PreviousPathNodeIdx;
    
    UPROPERTY(BlueprintReadOnly, Transient)
    float CurrentResetDist;
    
    UPROPERTY(BlueprintReadOnly, Transient)
    int32 CurrentFormationIndex;
    
    UPROPERTY(BlueprintReadOnly, Transient)
    int32 CurrentFormationSize;
    
    FOMDPath();
};

