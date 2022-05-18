#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=Pawn -FallbackName=Pawn
#include "OMDAIPawn.generated.h"

class UBehaviorTree;
class UOMDAIPawnMovementComponent;
class UCapsuleComponent;
class AOMDAISpawner;
class USkeletalMeshComponent;

UCLASS()
class OMD_API AOMDAIPawn : public APawn {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadOnly, Export, VisibleAnywhere, meta=(AllowPrivateAccess=true))
    UOMDAIPawnMovementComponent* MovementComponent;
    
    UPROPERTY(BlueprintReadOnly, Export, VisibleAnywhere, meta=(AllowPrivateAccess=true))
    UCapsuleComponent* CollisionComponent;
    
    UPROPERTY(BlueprintReadOnly, Export, VisibleAnywhere, meta=(AllowPrivateAccess=true))
    USkeletalMeshComponent* Mesh;
    
public:
    UPROPERTY(BlueprintReadWrite, EditDefaultsOnly)
    UBehaviorTree* BehaviorTree;
    
    UPROPERTY(BlueprintReadOnly)
    AOMDAISpawner* Spawner;
    
    AOMDAIPawn();
};

