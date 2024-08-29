#pragma once
#include "CoreMinimal.h"
#include "Components/ArrowComponent.h"
#include "OMDGuardianSpawnPointComponent.generated.h"

UCLASS(Blueprintable, EditInlineNew, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class OMD_API UOMDGuardianSpawnPointComponent : public UArrowComponent {
    GENERATED_BODY()
public:
    UOMDGuardianSpawnPointComponent(const FObjectInitializer& ObjectInitializer);

};

