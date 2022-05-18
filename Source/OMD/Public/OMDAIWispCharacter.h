#pragma once
#include "CoreMinimal.h"
#include "OMDAICharacter.h"
#include "OMDAIWispCharacter.generated.h"

class UBehaviorTree;

UCLASS()
class OMD_API AOMDAIWispCharacter : public AOMDAICharacter {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    TSoftObjectPtr<UBehaviorTree> AIBehavior;
    
public:
    AOMDAIWispCharacter();
    UFUNCTION(BlueprintAuthorityOnly, BlueprintCallable)
    void RemoveWisp();
    
};

