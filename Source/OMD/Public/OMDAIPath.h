#pragma once
#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "OMDAIPath.generated.h"

class AOMDPathPoint;

UCLASS(Blueprintable)
class OMD_API AOMDAIPath : public AActor {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<AOMDPathPoint*> PathPoints;
    
public:
    AOMDAIPath(const FObjectInitializer& ObjectInitializer);

};

