#pragma once
#include "CoreMinimal.h"
#include "OMDAIAttachment.h"
#include "OMDAIAttachmentSkeletal.generated.h"

class USkeletalMeshComponent;

UCLASS()
class OMD_API AOMDAIAttachmentSkeletal : public AOMDAIAttachment {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadOnly, Export, VisibleAnywhere)
    USkeletalMeshComponent* Mesh;
    
    UPROPERTY(BlueprintReadOnly, Export, VisibleAnywhere)
    USkeletalMeshComponent* FXMesh;
    
public:
    AOMDAIAttachmentSkeletal();
};

