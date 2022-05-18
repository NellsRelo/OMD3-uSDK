#pragma once
#include "CoreMinimal.h"
#include "OMDSoftProtoPtr.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=SoftObjectPath -FallbackName=SoftObjectPath
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=SoftClassPath -FallbackName=SoftClassPath
#include "OMDModalTransition.generated.h"

USTRUCT(BlueprintType)
struct OMD_API FOMDModalTransition {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    FOMDSoftProtoPtr SourceScreen;
    
    UPROPERTY(EditAnywhere)
    FSoftClassPath ModalWidget;
    
    UPROPERTY(EditAnywhere)
    FSoftObjectPath IntroSequence;
    
    UPROPERTY(EditAnywhere)
    FSoftObjectPath OutroSequence;
    
    FOMDModalTransition();
};

