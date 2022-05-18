#pragma once
#include "CoreMinimal.h"
#include "OMDAIAnimInstance.h"
#include "OMDWarHeroAnimInstance.generated.h"

UCLASS(NonTransient)
class OMD_API UOMDWarHeroAnimInstance : public UOMDAIAnimInstance {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient)
    bool bHasTarget;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient)
    bool bInjured;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient)
    bool bWaiting;
    
public:
    UOMDWarHeroAnimInstance();
};

