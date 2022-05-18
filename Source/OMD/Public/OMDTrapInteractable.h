#pragma once
#include "CoreMinimal.h"
#include "OMDTrap.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Vector -FallbackName=Vector
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=HitResult -FallbackName=HitResult
#include "OMDTrapInteractable.generated.h"

class AActor;
class UPrimitiveComponent;
class APawn;

UCLASS()
class OMD_API AOMDTrapInteractable : public AOMDTrap {
    GENERATED_BODY()
public:
    AOMDTrapInteractable();
protected:
    UFUNCTION()
    void OnHit(UPrimitiveComponent* HitComponent, AActor* OtherActor, UPrimitiveComponent* OtherComponent, FVector NormalImpulse, const FHitResult& Hit);
    
    UFUNCTION(BlueprintAuthorityOnly, BlueprintImplementableEvent)
    void BP_CustomInteraction(APawn* Pawn);
    
};

