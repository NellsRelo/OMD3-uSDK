#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "UObject/NoExportTypes.h"
#include "Particles/WorldPSCPool.h"
#include "BeamPointStruct.h"
#include "OMDAction.h"
#include "SpawnEmitterAtLocationActionDelegateDelegate.h"
#include "OMDAction_SpawnBeamEmitterAtLoc.generated.h"

class UOMDAbility;
class UOMDAction_SpawnBeamEmitterAtLoc;
class UParticleSystem;
class UParticleSystemComponent;

UCLASS(Blueprintable)
class OMD_API UOMDAction_SpawnBeamEmitterAtLoc : public UOMDAction {
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
    UOMDAction_SpawnBeamEmitterAtLoc();

    UFUNCTION(BlueprintCallable)
    static UOMDAction_SpawnBeamEmitterAtLoc* SpawnBeamEmitterAtLocation(UOMDAbility* ability, UParticleSystem* NewEmitterTemplate, TArray<FBeamPointStruct> sourcePoints, TArray<FBeamPointStruct> targetPoints, FVector Location, FRotator Rotation, FVector Scale, bool bAutoDestroy, EPSCPoolMethod PoolingMethod);
    
};

