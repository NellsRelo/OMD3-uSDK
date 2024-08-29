#pragma once
#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "OMDMapDisplayInterface.h"
#include "OMDTeleportRift.generated.h"

class UOMDMapDisplayComponent;

UCLASS(Blueprintable)
class OMD_API AOMDTeleportRift : public AActor, public IOMDMapDisplayInterface {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UOMDMapDisplayComponent* MapDisplayComponent;
    
public:
    AOMDTeleportRift(const FObjectInitializer& ObjectInitializer);


    // Fix for true pure virtual functions not being implemented
};

