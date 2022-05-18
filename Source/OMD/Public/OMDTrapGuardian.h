#pragma once
#include "CoreMinimal.h"
#include "OMDTrap.h"
#include "OMDTrapGuardian.generated.h"

class UOMDGuardianSpawnPointComponent;
class AActor;

UCLASS()
class OMD_API AOMDTrapGuardian : public AOMDTrap {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    TArray<AActor*> SpawnedGuardians;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly, Export)
    TArray<UOMDGuardianSpawnPointComponent*> SpawnPoints;
    
public:
    AOMDTrapGuardian();
    UFUNCTION()
    void ActivateGuardianAbility();
    
};

