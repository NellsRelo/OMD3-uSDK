#pragma once
#include "CoreMinimal.h"
#include "OMDLineOfSightStack.generated.h"

class AActor;

USTRUCT(BlueprintType)
struct OMD_API FOMDLineOfSightStack {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<AActor*> Stack;
    
public:
    FOMDLineOfSightStack();
};

