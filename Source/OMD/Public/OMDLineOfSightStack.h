#pragma once
#include "CoreMinimal.h"
#include "OMDLineOfSightStack.generated.h"

class AActor;

USTRUCT()
struct OMD_API FOMDLineOfSightStack {
    GENERATED_BODY()
public:
protected:
    UPROPERTY()
    TArray<AActor*> Stack;
    
public:
    FOMDLineOfSightStack();
};

