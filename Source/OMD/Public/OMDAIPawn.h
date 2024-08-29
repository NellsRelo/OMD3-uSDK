#pragma once
#include "CoreMinimal.h"
#include "GameFramework/Pawn.h"
#include "OMDAIPawn.generated.h"

class AOMDAISpawner;
class UBehaviorTree;
class UCapsuleComponent;
class UOMDAIPawnMovementComponent;
class USkeletalMeshComponent;

UCLASS(Blueprintable)
class OMD_API AOMDAIPawn : public APawn {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UOMDAIPawnMovementComponent* MovementComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UCapsuleComponent* CollisionComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    USkeletalMeshComponent* Mesh;
    
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UBehaviorTree* BehaviorTree;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    AOMDAISpawner* Spawner;
    
    AOMDAIPawn(const FObjectInitializer& ObjectInitializer);

};

