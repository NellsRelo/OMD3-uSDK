#pragma once
#include "CoreMinimal.h"
#include "OMDTrap.h"
#include "OMDTrapMountable.generated.h"

class UChildActorComponent;
class AOMDPlayerCharacter;
class AOMDPlayerController;

UCLASS()
class OMD_API AOMDTrapMountable : public AOMDTrap {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(ReplicatedUsing=OnRep_OccupyingPlayerPawn)
    AOMDPlayerCharacter* OccupyingPlayerPawn;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Export)
    UChildActorComponent* TrapPawnComponent;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    FName CharacterAttachBoneName;
    
public:
    AOMDTrapMountable();
    virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;
    
protected:
    UFUNCTION()
    void OnRep_OccupyingPlayerPawn(AOMDPlayerCharacter* previousValue);
    
public:
    UFUNCTION(BlueprintPure)
    AOMDPlayerCharacter* GetOccupyingPlayerPawn() const;
    
    UFUNCTION(BlueprintPure)
    AOMDPlayerController* GetOccupyingPlayerController() const;
    
};

