#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=Actor -FallbackName=Actor
#include "OMDAIPath.generated.h"

class AOMDPathPoint;

UCLASS()
class OMD_API AOMDAIPath : public AActor {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    TArray<AOMDPathPoint*> PathPoints;
    
public:
    AOMDAIPath();
};

