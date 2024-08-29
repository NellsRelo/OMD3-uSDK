#pragma once
#include "CoreMinimal.h"
#include "GameFramework/Pawn.h"
#include "OMDAbilitySystemInterface.h"
#include "OMDTrapPawn.generated.h"

class UCapsuleComponent;
class UOMDAbilitySystemComponent;
class UPathFollowingComponent;
class UPawnMovementComponent;

UCLASS(Blueprintable)
class OMD_API AOMDTrapPawn : public APawn, public IOMDAbilitySystemInterface {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UPathFollowingComponent* PathFollowingComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UPawnMovementComponent* MovementComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UCapsuleComponent* CapsuleComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UOMDAbilitySystemComponent* abilitySystem;
    
public:
    AOMDTrapPawn(const FObjectInitializer& ObjectInitializer);


    // Fix for true pure virtual functions not being implemented
};

