#pragma once
#include "CoreMinimal.h"
#include "OMDAction.h"
#include "SpawnEmitterAtLocationActionDelegateDelegate.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Vector -FallbackName=Vector
#include "BeamPointStruct.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Rotator -FallbackName=Rotator
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=EPSCPoolMethod -FallbackName=EPSCPoolMethod
#include "OMDAction_SpawnBeamEmitterAtLoc.generated.h"

class UParticleSystemComponent;
class UOMDAbility;
class UParticleSystem;
class UOMDAction_SpawnBeamEmitterAtLoc;

UCLASS()
class OMD_API UOMDAction_SpawnBeamEmitterAtLoc : public UOMDAction {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable)
    FSpawnEmitterAtLocationActionDelegate OnEmitterSpawned;
    
private:
    UPROPERTY(Export)
    UParticleSystemComponent* Emitter;
    
    UPROPERTY()
    UParticleSystem* emitterTemplate;
    
public:
    UOMDAction_SpawnBeamEmitterAtLoc();
    UFUNCTION(BlueprintCallable)
    static UOMDAction_SpawnBeamEmitterAtLoc* SpawnBeamEmitterAtLocation(UOMDAbility* ability, UParticleSystem* NewEmitterTemplate, TArray<FBeamPointStruct> sourcePoints, TArray<FBeamPointStruct> targetPoints, FVector Location, FRotator Rotation, FVector Scale, bool bAutoDestroy, EPSCPoolMethod PoolingMethod);
    
};

