#pragma once
#include "CoreMinimal.h"
#include "GameFramework/Pawn.h"
#include "Navigation/PathFollowingComponent.h"
#include "Components/CapsuleComponent.h"
#include "OMDAbilitySystemInterface.h"
#include "OMDTrapPawn.generated.h"

class UCapsuleComponent;
class UPawnMovementComponent;
class UPathFollowingComponent;
class UOMDAbilitySystemComponent;

UCLASS()
class OMD_API AOMDTrapPawn : public APawn, public IOMDAbilitySystemInterface {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadOnly, Export, VisibleAnywhere)
    UPathFollowingComponent* PathFollowingComponent;
    
    UPROPERTY(BlueprintReadOnly, Export, VisibleAnywhere)
    UPawnMovementComponent* MovementComponent;
    
    UPROPERTY(BlueprintReadOnly, Export, VisibleAnywhere)
    UCapsuleComponent* CapsuleComponent;
    
    UPROPERTY(BlueprintReadOnly, Export, VisibleAnywhere)
    UOMDAbilitySystemComponent* abilitySystem;
    
public:
    AOMDTrapPawn();
    
    // Fix for true pure virtual functions not being implemented
};

