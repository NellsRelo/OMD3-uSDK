#pragma once
#include "CoreMinimal.h"
#include "OnslaughtPrespawnedArray.generated.h"

class APawn;

USTRUCT()
struct OMD_API FOnslaughtPrespawnedArray {
    GENERATED_BODY()
public:
    UPROPERTY()
    TArray<APawn*> PreSpawnedArray;
    
    FOnslaughtPrespawnedArray();
};

