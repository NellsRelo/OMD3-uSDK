#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "Engine/EngineTypes.h"
#include "OMDTrap.h"
#include "OMDTrapInteractable.generated.h"

class AActor;
class APawn;
class UPrimitiveComponent;

UCLASS(Blueprintable)
class OMD_API AOMDTrapInteractable : public AOMDTrap {
    GENERATED_BODY()
public:
    AOMDTrapInteractable(const FObjectInitializer& ObjectInitializer);

protected:
    UFUNCTION(BlueprintCallable)
    void OnHit(UPrimitiveComponent* HitComponent, AActor* OtherActor, UPrimitiveComponent* OtherComponent, FVector NormalImpulse, const FHitResult& Hit);
    
    UFUNCTION(BlueprintAuthorityOnly, BlueprintCallable, BlueprintImplementableEvent)
    void BP_CustomInteraction(APawn* Pawn);
    
};

