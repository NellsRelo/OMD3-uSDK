#pragma once
#include "CoreMinimal.h"
#include "OMDAction.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Rotator -FallbackName=Rotator
#include "SpawnEmitterAtLocationActionDelegateDelegate.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Vector -FallbackName=Vector
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=EPSCPoolMethod -FallbackName=EPSCPoolMethod
#include "OMDAction_SpawnEmitterAtLocation.generated.h"

class UParticleSystemComponent;
class UOMDAbility;
class UOMDAction_SpawnEmitterAtLocation;
class UParticleSystem;

UCLASS()
class OMD_API UOMDAction_SpawnEmitterAtLocation : public UOMDAction {
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
    UOMDAction_SpawnEmitterAtLocation();
    UFUNCTION(BlueprintCallable)
    static UOMDAction_SpawnEmitterAtLocation* SpawnEmitterAtLocation(UOMDAbility* ability, UParticleSystem* NewEmitterTemplate, FVector Location, FRotator Rotation, FVector Scale, bool bAutoDestroy, EPSCPoolMethod PoolingMethod);
    
};

