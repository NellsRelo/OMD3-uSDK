#pragma once
#include "CoreMinimal.h"
#include "OMDGib.h"
#include "Particles/ParticleSystemComponent.h"
#include "OMDGibSkeletal.generated.h"

class UParticleSystemComponent;
class USkeletalMeshComponent;

UCLASS()
class OMD_API AOMDGibSkeletal : public AOMDGib {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadOnly, Export, VisibleAnywhere)
    USkeletalMeshComponent* Mesh;
    
    UPROPERTY(BlueprintReadOnly, Export, VisibleAnywhere)
    USkeletalMeshComponent* FXMesh;
    
    UPROPERTY(BlueprintReadOnly, Export, VisibleAnywhere)
    UParticleSystemComponent* blood;
    
public:
    AOMDGibSkeletal();
};

