#pragma once
#include "CoreMinimal.h"
#include "OMDGib.h"
#include "OMDGibStatic.generated.h"

class UStaticMeshComponent;

UCLASS()
class OMD_API AOMDGibStatic : public AOMDGib {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadOnly, Export, VisibleAnywhere)
    UStaticMeshComponent* Mesh;
    
    UPROPERTY(BlueprintReadOnly, Export, VisibleAnywhere)
    UStaticMeshComponent* FXMesh;
    
public:
    AOMDGibStatic();
};

