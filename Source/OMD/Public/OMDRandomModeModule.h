#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Object -FallbackName=Object
#include "OMDRandomModeModule.generated.h"

class AOMDRandomModeState;

UCLASS(Blueprintable)
class OMD_API UOMDRandomModeModule : public UObject {
    GENERATED_BODY()
public:
    UOMDRandomModeModule();
protected:
    UFUNCTION(BlueprintImplementableEvent)
    void BP_Apply(const AOMDRandomModeState* State, const FString& Name, const FString& Value);
    
};

