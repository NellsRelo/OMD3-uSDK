#pragma once
#include "CoreMinimal.h"
#include "OMDGib.h"
#include "OMDGibStatic.generated.h"

class UStaticMeshComponent;

UCLASS(Blueprintable)
class OMD_API AOMDGibStatic : public AOMDGib {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UStaticMeshComponent* Mesh;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UStaticMeshComponent* FXMesh;
    
public:
    AOMDGibStatic(const FObjectInitializer& ObjectInitializer);

};

