#pragma once
#include "CoreMinimal.h"
#include "GameFramework/CharacterMovementComponent.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=CharacterMovementComponent -FallbackName=CharacterMovementComponent
#include "OMDCharacterMovementComponent.generated.h"

UCLASS(ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class OMD_API UOMDCharacterMovementComponent : public UCharacterMovementComponent {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite)
    float AnimationSpeedScale;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float ReverseSpeedScale;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float ReverseMinAngle;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float SprintingSpeedScale;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float SprintingMaxAngle;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float TargetingSpeedScale;
    
public:
    UOMDCharacterMovementComponent();
    UFUNCTION(BlueprintCallable)
    void StopMovement();
    
    UFUNCTION(BlueprintCallable)
    void ResumeDefaultMovement();
    
};

