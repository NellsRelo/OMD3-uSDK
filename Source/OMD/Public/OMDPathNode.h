#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Vector -FallbackName=Vector
#include "OMDPathBranch.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Rotator -FallbackName=Rotator
#include "OMDPathNode.generated.h"

class AOMDPathPoint;

USTRUCT(BlueprintType)
struct OMD_API FOMDPathNode {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    int32 PointIndex;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    TArray<FOMDPathBranch> NextPoints;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    FVector Location;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    FRotator Orientation;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    float Radius;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    int32 FormationSize;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    float FormationSpacing;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    bool bIsStartNode;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    bool bIsExitNode;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    bool bFlyersOnly;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    bool bGroundOnly;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    float FlightHeight;
    
    UPROPERTY(BlueprintReadOnly, Transient)
    bool bHasVisited;
    
    UPROPERTY(BlueprintReadOnly, Transient)
    float NodeCost;
    
    UPROPERTY(BlueprintReadOnly, Transient)
    int32 PreviousIndex;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    AOMDPathPoint* AssociatedPathPoint;
    
    FOMDPathNode();
};

