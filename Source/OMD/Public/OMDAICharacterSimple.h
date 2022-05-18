#pragma once
#include "CoreMinimal.h"
#include "OMDAICharacter.h"
#include "OMDAICharacterSimple.generated.h"

class UBehaviorTree;

UCLASS()
class OMD_API AOMDAICharacterSimple : public AOMDAICharacter {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    TSoftObjectPtr<UBehaviorTree> AIBehavior;
    
public:
    AOMDAICharacterSimple();
};

