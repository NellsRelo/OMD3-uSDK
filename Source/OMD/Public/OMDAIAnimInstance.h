#pragma once
#include "CoreMinimal.h"
#include "OMDStatusEffectCategoryBools.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=AnimInstance -FallbackName=AnimInstance
#include "EFlinchDirection.h"
#include "EDeathAnimationCategory.h"
#include "OMDDeathAnimationCategoryBools.h"
#include "EStatusEffectCategory.h"
#include "OMDAIAnimInstance.generated.h"

class UAnimMontage;

UCLASS(NonTransient)
class OMD_API UOMDAIAnimInstance : public UAnimInstance {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient)
    float Speed;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient)
    float NormalizedSpeed;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient)
    bool bIsMoving;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient)
    bool bIsFlinching;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere, Transient)
    EFlinchDirection FlinchDirection;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient)
    bool bIsDead;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient)
    bool bIsAttacking;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient)
    bool bUseGroundedPoseSnapshot;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient)
    bool bUseFrozenPoseSnapshot;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient)
    bool bIsShielded;
    
    UPROPERTY(BlueprintReadOnly, Transient)
    float ShieldBlend;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    UAnimMontage* AttackMontage;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient)
    EStatusEffectCategory StatusEffectCategory;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly, Transient)
    FOMDStatusEffectCategoryBools StatusEffectCategoryBools;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient)
    EDeathAnimationCategory DeathAnimationCategory;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly, Transient)
    FOMDDeathAnimationCategoryBools DeathAnimationCategoryBools;
    
public:
    UOMDAIAnimInstance();
    UFUNCTION(BlueprintCallable)
    void UpdateDeathAnimationCategoryBools();
    
    UFUNCTION(BlueprintCallable)
    void StopAttack();
    
    UFUNCTION(BlueprintCallable)
    void SetStatusEffectCategory(EStatusEffectCategory newCategory);
    
    UFUNCTION(BlueprintCallable)
    void SetIsShielded(bool isShielded);
    
    UFUNCTION(BlueprintCallable)
    void DoFlinch(EFlinchDirection Direction);
    
    UFUNCTION(BlueprintCallable)
    void DoDie();
    
    UFUNCTION(BlueprintCallable)
    void DoAttack();
    
};

