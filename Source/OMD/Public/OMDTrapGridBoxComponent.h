#pragma once
#include "CoreMinimal.h"
#include "Components/BoxComponent.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=BoxComponent -FallbackName=BoxComponent
#include "OMDTrapGridBoxComponent.generated.h"

class UStaticMeshComponent;

UCLASS(EditInlineNew, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class OMD_API UOMDTrapGridBoxComponent : public UBoxComponent {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    uint8 TrapPlacementTypes;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    uint8 TrapWarMachineTypes;
    
protected:
    UPROPERTY(Export)
    UStaticMeshComponent* TrapGridRevealPlane;
    
public:
    UOMDTrapGridBoxComponent();
};

