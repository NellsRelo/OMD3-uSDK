#pragma once
#include "CoreMinimal.h"
#include "OMDProtoBase.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Vector -FallbackName=Vector
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Rotator -FallbackName=Rotator
#include "OMDCameraStyleProto.generated.h"

USTRUCT(BlueprintType)
struct OMD_API FOMDCameraStyleProto : public FOMDProtoBase {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    FVector RelativeCameraLocation;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    FRotator RelativeCameraRotation;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    float SpringArmLength;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    bool bUseCharacterHeight;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    float CharacterHeightOffsetPercentage;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    bool bCameraRotationAttachToPawnRotation;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    float MaxPitchRotation;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    float MinPitchRotation;
    
public:
    FOMDCameraStyleProto();
};

