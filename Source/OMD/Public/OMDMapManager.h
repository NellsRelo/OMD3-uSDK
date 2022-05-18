#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Object -FallbackName=Object
#include "OMDSingletonInterface.h"
#include "OMDMapManager.generated.h"

class AOMDMapVolume;

UCLASS(Abstract, Blueprintable)
class OMD_API UOMDMapManager : public UObject, public IOMDSingletonInterface {
    GENERATED_BODY()
public:
private:
    UPROPERTY(Transient)
    TArray<TWeakObjectPtr<AOMDMapVolume>> MapVolumes;
    
public:
    UOMDMapManager();
    
    // Fix for true pure virtual functions not being implemented
};

