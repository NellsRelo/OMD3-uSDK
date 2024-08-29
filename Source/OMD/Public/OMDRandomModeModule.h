#pragma once
#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "OMDRandomModeModule.generated.h"

class AOMDRandomModeState;

UCLASS(Blueprintable)
class OMD_API UOMDRandomModeModule : public UObject {
    GENERATED_BODY()
public:
    UOMDRandomModeModule();

protected:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void BP_Apply(const AOMDRandomModeState* State, const FString& Name, const FString& Value);
    
};

