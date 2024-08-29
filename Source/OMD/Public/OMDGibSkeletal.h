#pragma once
#include "CoreMinimal.h"
#include "OMDGib.h"
#include "OMDGibSkeletal.generated.h"

class UParticleSystemComponent;
class USkeletalMeshComponent;

UCLASS(Blueprintable)
class OMD_API AOMDGibSkeletal : public AOMDGib {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    USkeletalMeshComponent* Mesh;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    USkeletalMeshComponent* FXMesh;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UParticleSystemComponent* blood;
    
public:
    AOMDGibSkeletal(const FObjectInitializer& ObjectInitializer);

};

