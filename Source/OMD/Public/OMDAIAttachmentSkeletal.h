#pragma once
#include "CoreMinimal.h"
#include "OMDAIAttachment.h"
#include "OMDAIAttachmentSkeletal.generated.h"

class USkeletalMeshComponent;

UCLASS(Blueprintable)
class OMD_API AOMDAIAttachmentSkeletal : public AOMDAIAttachment {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    USkeletalMeshComponent* Mesh;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    USkeletalMeshComponent* FXMesh;
    
public:
    AOMDAIAttachmentSkeletal(const FObjectInitializer& ObjectInitializer);

};

