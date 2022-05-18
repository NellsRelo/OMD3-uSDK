#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=Actor -FallbackName=Actor
#include "OMDMapDisplayInterface.h"
#include "OMDTeleportRift.generated.h"

class UOMDMapDisplayComponent;

UCLASS()
class OMD_API AOMDTeleportRift : public AActor, public IOMDMapDisplayInterface {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadOnly, Export, VisibleAnywhere)
    UOMDMapDisplayComponent* MapDisplayComponent;
    
public:
    AOMDTeleportRift();
    
    // Fix for true pure virtual functions not being implemented
};

