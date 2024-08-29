#pragma once
#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "UObject/NoExportTypes.h"
#include "OMDSingletonInterface.h"
#include "OMDWidgetManager.generated.h"

UCLASS(Abstract, Blueprintable)
class OMD_API UOMDWidgetManager : public UObject, public IOMDSingletonInterface {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, NoClear, meta=(AllowPrivateAccess=true))
    FSoftClassPath MessageBoxClass;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, NoClear, meta=(AllowPrivateAccess=true))
    FSoftClassPath AsyncModalClass;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, NoClear, meta=(AllowPrivateAccess=true))
    FSoftClassPath ModalBackgroundClass;
    
public:
    UOMDWidgetManager();


    // Fix for true pure virtual functions not being implemented
};

