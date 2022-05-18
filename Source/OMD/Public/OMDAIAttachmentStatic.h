#pragma once
#include "CoreMinimal.h"
#include "OMDAIAttachment.h"
#include "OMDAIAttachmentStatic.generated.h"

class UStaticMeshComponent;

UCLASS()
class OMD_API AOMDAIAttachmentStatic : public AOMDAIAttachment {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadOnly, Export, VisibleAnywhere)
    UStaticMeshComponent* Mesh;
    
    UPROPERTY(BlueprintReadOnly, Export, VisibleAnywhere)
    UStaticMeshComponent* FXMesh;
    
public:
    AOMDAIAttachmentStatic();
};

