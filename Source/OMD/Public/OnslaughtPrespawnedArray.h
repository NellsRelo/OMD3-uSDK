#pragma once
#include "CoreMinimal.h"
#include "OnslaughtPrespawnedArray.generated.h"

class APawn;

USTRUCT(BlueprintType)
struct OMD_API FOnslaughtPrespawnedArray {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<APawn*> PreSpawnedArray;
    
    FOnslaughtPrespawnedArray();
};

