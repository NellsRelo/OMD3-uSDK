#pragma once
#include "CoreMinimal.h"
#include "Components/ArrowComponent.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=ArrowComponent -FallbackName=ArrowComponent
#include "OMDGuardianSpawnPointComponent.generated.h"

UCLASS(EditInlineNew, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class OMD_API UOMDGuardianSpawnPointComponent : public UArrowComponent {
    GENERATED_BODY()
public:
    UOMDGuardianSpawnPointComponent();
};

