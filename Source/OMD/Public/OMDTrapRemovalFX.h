#pragma once
#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "OMDTrapRemovalFX.generated.h"

class USkeletalMeshComponent;

UCLASS(Blueprintable)
class OMD_API AOMDTrapRemovalFX : public AActor {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    USkeletalMeshComponent* MeshComponent;
    
    AOMDTrapRemovalFX(const FObjectInitializer& ObjectInitializer);

protected:
    UFUNCTION(BlueprintCallable, NetMulticast, Reliable)
    void NetMulticast_Sold();
    
    UFUNCTION(BlueprintCallable, NetMulticast, Reliable)
    void NetMulticast_Killed();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void BP_Sold();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void BP_Killed();
    
};

