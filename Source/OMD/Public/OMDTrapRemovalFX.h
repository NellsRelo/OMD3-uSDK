#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=Actor -FallbackName=Actor
#include "OMDTrapRemovalFX.generated.h"

class USkeletalMeshComponent;

UCLASS()
class OMD_API AOMDTrapRemovalFX : public AActor {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadOnly, Export, VisibleAnywhere)
    USkeletalMeshComponent* MeshComponent;
    
    AOMDTrapRemovalFX();
protected:
    UFUNCTION(NetMulticast, Reliable)
    void NetMulticast_Sold();
    
    UFUNCTION(NetMulticast, Reliable)
    void NetMulticast_Killed();
    
    UFUNCTION(BlueprintImplementableEvent)
    void BP_Sold();
    
    UFUNCTION(BlueprintImplementableEvent)
    void BP_Killed();
    
};

