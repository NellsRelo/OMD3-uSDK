#pragma once
#include "CoreMinimal.h"
#include "OMDAIAttachment.h"
#include "OMDAIAttachmentStatic.generated.h"

class UStaticMeshComponent;

UCLASS(Blueprintable)
class OMD_API AOMDAIAttachmentStatic : public AOMDAIAttachment {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UStaticMeshComponent* Mesh;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UStaticMeshComponent* FXMesh;
    
public:
    AOMDAIAttachmentStatic(const FObjectInitializer& ObjectInitializer);

};

