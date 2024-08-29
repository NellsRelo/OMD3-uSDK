#pragma once
#include "CoreMinimal.h"
#include "OMDAICharacter.h"
#include "OMDAIWispCharacter.generated.h"

class UBehaviorTree;

UCLASS(Blueprintable)
class OMD_API AOMDAIWispCharacter : public AOMDAICharacter {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftObjectPtr<UBehaviorTree> AIBehavior;
    
public:
    AOMDAIWispCharacter(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintAuthorityOnly, BlueprintCallable)
    void RemoveWisp();
    
};

