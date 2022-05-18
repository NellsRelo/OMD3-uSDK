#pragma once
#include "CoreMinimal.h"
#include "Templates/SubclassOf.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Object -FallbackName=Object
#include "OMDSingletonInterface.h"
#include "OMDWidgetManager.generated.h"

class UOMDMessageBox;
class UOMDAsyncModal;
class UOMDModalWidget;

UCLASS(Abstract)
class OMD_API UOMDWidgetManager : public UObject, public IOMDSingletonInterface {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(EditAnywhere, NoClear)
    TSubclassOf<UOMDMessageBox> MessageBoxClass;
    
    UPROPERTY(EditAnywhere, NoClear)
    TSubclassOf<UOMDAsyncModal> AsyncModalClass;
    
    UPROPERTY(EditAnywhere, NoClear)
    TSubclassOf<UOMDModalWidget> ModalBackgroundClass;
    
public:
    UOMDWidgetManager();
    
    // Fix for true pure virtual functions not being implemented
};

