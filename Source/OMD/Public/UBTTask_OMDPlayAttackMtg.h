#pragma once
#include "CoreMinimal.h"
#include "BehaviorTree/BTTaskNode.h"
#include "UBTTask_OMDPlayAttackMtg.generated.h"

class UOMDAIAnimInstance;
class UBehaviorTreeComponent;
class UAnimMontage;
class UOMDAbilitySystemComponent;

UCLASS()
class OMD_API UUBTTask_OMDPlayAttackMtg : public UBTTaskNode {
    GENERATED_BODY()
public:
    UPROPERTY(Export)
    UBehaviorTreeComponent* MyOwnerComp;
    
    UPROPERTY()
    UOMDAIAnimInstance* MyAnimInstance;
    
    UPROPERTY()
    UAnimMontage* MyAttackMontage;
    
    UPROPERTY(Export)
    UOMDAbilitySystemComponent* MyAbilitySystem;
    
    UPROPERTY(EditAnywhere)
    int32 LoopCount;
    
    UUBTTask_OMDPlayAttackMtg();
};

