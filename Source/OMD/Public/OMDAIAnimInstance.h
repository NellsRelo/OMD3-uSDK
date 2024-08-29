#pragma once
#include "CoreMinimal.h"
#include "Animation/AnimInstance.h"
#include "EDeathAnimationCategory.h"
#include "EFlinchDirection.h"
#include "EStatusEffectCategory.h"
#include "OMDDeathAnimationCategoryBools.h"
#include "OMDStatusEffectCategoryBools.h"
#include "OMDAIAnimInstance.generated.h"

class UAnimMontage;

UCLASS(Blueprintable, NonTransient)
class OMD_API UOMDAIAnimInstance : public UAnimInstance {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    float Speed;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    float NormalizedSpeed;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    bool bIsMoving;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    bool bIsFlinching;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    EFlinchDirection FlinchDirection;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    bool bIsDead;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    bool bIsAttacking;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    bool bUseGroundedPoseSnapshot;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    bool bUseFrozenPoseSnapshot;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    bool bIsShielded;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    float ShieldBlend;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UAnimMontage* AttackMontage;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    EStatusEffectCategory StatusEffectCategory;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    FOMDStatusEffectCategoryBools StatusEffectCategoryBools;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    EDeathAnimationCategory DeathAnimationCategory;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
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

