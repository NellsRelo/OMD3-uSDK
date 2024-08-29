#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "UObject/NoExportTypes.h"
#include "Particles/WorldPSCPool.h"
#include "OMDAction.h"
#include "SpawnEmitterAtLocationActionDelegateDelegate.h"
#include "OMDAction_SpawnEmitterAtLocation.generated.h"

class UOMDAbility;
class UOMDAction_SpawnEmitterAtLocation;
class UParticleSystem;
class UParticleSystemComponent;

UCLASS(Blueprintable)
class OMD_API UOMDAction_SpawnEmitterAtLocation : public UOMDAction {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FSpawnEmitterAtLocationActionDelegate OnEmitterSpawned;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UParticleSystemComponent* Emitter;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UParticleSystem* emitterTemplate;
    
public:
    UOMDAction_SpawnEmitterAtLocation();

    UFUNCTION(BlueprintCallable)
    static UOMDAction_SpawnEmitterAtLocation* SpawnEmitterAtLocation(UOMDAbility* ability, UParticleSystem* NewEmitterTemplate, FVector Location, FRotator Rotation, FVector Scale, bool bAutoDestroy, EPSCPoolMethod PoolingMethod);
    
};

