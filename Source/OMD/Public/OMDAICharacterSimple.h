#pragma once
#include "CoreMinimal.h"
#include "OMDAICharacter.h"
#include "OMDAICharacterSimple.generated.h"

class UBehaviorTree;

UCLASS(Blueprintable)
class OMD_API AOMDAICharacterSimple : public AOMDAICharacter {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftObjectPtr<UBehaviorTree> AIBehavior;
    
public:
    AOMDAICharacterSimple(const FObjectInitializer& ObjectInitializer);

};

