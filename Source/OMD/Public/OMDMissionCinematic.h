#pragma once
#include "CoreMinimal.h"
#include "OMDMissionCinematic.generated.h"

class UWorld;
class UWidget;

USTRUCT(BlueprintType)
struct OMD_API FOMDMissionCinematic {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    TSoftObjectPtr<UWorld> Cinematic;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    TSoftClassPtr<UWidget> LoadScreen;
    
    FOMDMissionCinematic();
};

