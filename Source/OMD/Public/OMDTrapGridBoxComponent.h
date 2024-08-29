#pragma once
#include "CoreMinimal.h"
#include "Components/BoxComponent.h"
#include "OMDTrapGridBoxComponent.generated.h"

class UStaticMeshComponent;

UCLASS(Blueprintable, EditInlineNew, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class OMD_API UOMDTrapGridBoxComponent : public UBoxComponent {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    uint8 TrapPlacementTypes;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    uint8 TrapWarMachineTypes;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UStaticMeshComponent* TrapGridRevealPlane;
    
public:
    UOMDTrapGridBoxComponent(const FObjectInitializer& ObjectInitializer);

};

