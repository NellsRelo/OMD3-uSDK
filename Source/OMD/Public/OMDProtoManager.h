#pragma once
#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "OMDSingletonInterface.h"
#include "OMDProtoManager.generated.h"

class UDataTable;

UCLASS(Abstract, Blueprintable)
class OMD_API UOMDProtoManager : public UObject, public IOMDSingletonInterface {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<UDataTable*> DataTables;
    
public:
    UOMDProtoManager();


    // Fix for true pure virtual functions not being implemented
};

