#pragma once
#include "CoreMinimal.h"
#include "OMDAIAnimInstance.h"
#include "OMDWarHeroAnimInstance.generated.h"

UCLASS(Blueprintable, NonTransient)
class OMD_API UOMDWarHeroAnimInstance : public UOMDAIAnimInstance {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    bool bHasTarget;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    bool bInjured;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    bool bWaiting;
    
public:
    UOMDWarHeroAnimInstance();

};

