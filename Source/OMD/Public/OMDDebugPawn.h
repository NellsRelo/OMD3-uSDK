#pragma once
#include "CoreMinimal.h"
#include "GameFramework/Pawn.h"
#include "GameFramework/FloatingPawnMovement.h"
#include "OMDDebugPawn.generated.h"

class UFloatingPawnMovement;

UCLASS()
class OMD_API AOMDDebugPawn : public APawn {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadOnly, Export, VisibleAnywhere)
    UFloatingPawnMovement* MovementComponent;
    
public:
    AOMDDebugPawn();
};

