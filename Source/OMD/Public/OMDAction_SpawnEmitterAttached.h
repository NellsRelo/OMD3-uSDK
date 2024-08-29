#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "UObject/NoExportTypes.h"
#include "Engine/EngineTypes.h"
#include "Particles/WorldPSCPool.h"
#include "OMDAction.h"
#include "SpawnEmitterAttachedActionDelegateDelegate.h"
#include "OMDAction_SpawnEmitterAttached.generated.h"

class UOMDAbility;
class UOMDAction_SpawnEmitterAttached;
class UParticleSystem;
class UParticleSystemComponent;
class USceneComponent;

UCLASS(Blueprintable)
class OMD_API UOMDAction_SpawnEmitterAttached : public UOMDAction {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FSpawnEmitterAttachedActionDelegate OnEmitterSpawned;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UParticleSystemComponent* Emitter;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UParticleSystem* emitterTemplate;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    USceneComponent* AttachToComponent;
    
public:
    UOMDAction_SpawnEmitterAttached();

    UFUNCTION(BlueprintCallable)
    static UOMDAction_SpawnEmitterAttached* SpawnEmitterAttached(UOMDAbility* ability, UParticleSystem* NewEmitterTemplate, USceneComponent* NewAttachToComponent, FName AttachPointName, FVector Location, FRotator Rotation, FVector Scale, TEnumAsByte<EAttachLocation::Type> LocationType, bool bAutoDestroy, EPSCPoolMethod PoolingMethod, bool useAbsoluteRoatation);
    
};

