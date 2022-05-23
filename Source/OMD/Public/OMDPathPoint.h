#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=TargetPoint -FallbackName=TargetPoint
#include "OMDPathBranch.h"
#include "Engine/TargetPoint.h"
#include "OMDPathPoint.generated.h"

class AOMDAIPath;

UCLASS()
class OMD_API AOMDPathPoint : public ATargetPoint {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    AOMDAIPath* ParentPath;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    int32 PointIndex;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    TArray<FOMDPathBranch> NextPoints;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float ReachRadius;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    int32 FormationSize;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float FormationSpacing;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    bool bIsStartPoint;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    bool bIsExitPoint;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    bool bFlyersOnly;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    bool bGroundOnly;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float FlightHeight;
    
public:
    AOMDPathPoint();
    UFUNCTION(BlueprintCallable)
    void SetParentAIPath(AOMDAIPath* newParentPath);
    
};

