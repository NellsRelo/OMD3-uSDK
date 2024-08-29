#pragma once
#include "CoreMinimal.h"
#include "Engine/GameEngine.h"
#include "OMDGameEngine.generated.h"

UCLASS(Blueprintable, NonTransient)
class OMD_API UOMDGameEngine : public UGameEngine {
    GENERATED_BODY()
public:
    UOMDGameEngine();

};

