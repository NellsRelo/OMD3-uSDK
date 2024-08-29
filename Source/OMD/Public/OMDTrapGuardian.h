#pragma once
#include "CoreMinimal.h"
#include "OMDTrap.h"
#include "OMDTrapGuardian.generated.h"

class AActor;
class UOMDGuardianSpawnPointComponent;

UCLASS(Blueprintable)
class OMD_API AOMDTrapGuardian : public AOMDTrap {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<AActor*> SpawnedGuardians;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    TArray<UOMDGuardianSpawnPointComponent*> SpawnPoints;
    
public:
    AOMDTrapGuardian(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable)
    void ActivateGuardianAbility();
    
};

