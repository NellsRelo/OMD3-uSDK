#pragma once
#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "OMDSingletonInterface.h"
#include "OMDMapManager.generated.h"

class AOMDMapVolume;

UCLASS(Abstract, Blueprintable)
class OMD_API UOMDMapManager : public UObject, public IOMDSingletonInterface {
    GENERATED_BODY()
public:
private:
    UPROPERTY(EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TArray<TWeakObjectPtr<AOMDMapVolume>> MapVolumes;
    
public:
    UOMDMapManager();


    // Fix for true pure virtual functions not being implemented
};

