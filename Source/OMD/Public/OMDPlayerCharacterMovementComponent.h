#pragma once
#include "CoreMinimal.h"
#include "OMDCharacterMovementComponent.h"
#include "OMDPlayerCharacterMovementComponent.generated.h"

class UParticleSystem;

UCLASS(ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class OMD_API UOMDPlayerCharacterMovementComponent : public UOMDCharacterMovementComponent {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float FeatherFallSpeedScale;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float FeatherFallZVelocity;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float GroundSlamZVelocity;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float GroundSlamEnterDelay;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float GroundSlamExitDelay;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float TeleportSpeed;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float TeleportEnterDelay;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float TeleportMoveTime;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float FeignDeathExitDelay;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float LevitateMoveSpeed;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    bool bShouldLevitateTeleport;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    UParticleSystem* LevitateOriginPS;
    
public:
    UOMDPlayerCharacterMovementComponent();
};

