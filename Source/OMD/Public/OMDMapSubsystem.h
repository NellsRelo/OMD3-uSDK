#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=WorldSubsystem -FallbackName=WorldSubsystem
#include "OMDMapSubsystem.generated.h"

UCLASS()
class OMD_API UOMDMapSubsystem : public UWorldSubsystem {
    GENERATED_BODY()
public:
    UOMDMapSubsystem();
};

