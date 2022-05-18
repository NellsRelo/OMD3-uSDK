#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Object -FallbackName=Object
#include "OMDSingletonInterface.h"
#include "OMDProtoManager.generated.h"

class UDataTable;

UCLASS(Abstract, Blueprintable)
class OMD_API UOMDProtoManager : public UObject, public IOMDSingletonInterface {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(EditDefaultsOnly)
    TArray<UDataTable*> DataTables;
    
public:
    UOMDProtoManager();
    
    // Fix for true pure virtual functions not being implemented
};

