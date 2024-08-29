#pragma once
#include "CoreMinimal.h"
#include "OMDMissionCinematic.generated.h"

class UWidget;
class UWorld;

USTRUCT(BlueprintType)
struct OMD_API FOMDMissionCinematic {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftObjectPtr<UWorld> Cinematic;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftClassPtr<UWidget> LoadScreen;
    
    FOMDMissionCinematic();
};

