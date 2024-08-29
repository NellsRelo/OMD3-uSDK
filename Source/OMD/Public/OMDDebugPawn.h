#pragma once
#include "CoreMinimal.h"
#include "GameFramework/Pawn.h"
#include "OMDDebugPawn.generated.h"

class UFloatingPawnMovement;

UCLASS(Blueprintable)
class OMD_API AOMDDebugPawn : public APawn {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UFloatingPawnMovement* MovementComponent;
    
public:
    AOMDDebugPawn(const FObjectInitializer& ObjectInitializer);

};

