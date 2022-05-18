#pragma once
#include "CoreMinimal.h"
#include "OMDAction.h"
#include "SpawnEmitterAttachedActionDelegateDelegate.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Vector -FallbackName=Vector
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Rotator -FallbackName=Rotator
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=EAttachLocation -FallbackName=EAttachLocation
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=EPSCPoolMethod -FallbackName=EPSCPoolMethod
#include "OMDAction_SpawnEmitterAttached.generated.h"

class UParticleSystemComponent;
class UOMDAction_SpawnEmitterAttached;
class UOMDAbility;
class UParticleSystem;
class USceneComponent;

UCLASS()
class OMD_API UOMDAction_SpawnEmitterAttached : public UOMDAction {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable)
    FSpawnEmitterAttachedActionDelegate OnEmitterSpawned;
    
private:
    UPROPERTY(Export)
    UParticleSystemComponent* Emitter;
    
    UPROPERTY()
    UParticleSystem* emitterTemplate;
    
    UPROPERTY(Export)
    USceneComponent* AttachToComponent;
    
public:
    UOMDAction_SpawnEmitterAttached();
    UFUNCTION(BlueprintCallable)
    static UOMDAction_SpawnEmitterAttached* SpawnEmitterAttached(UOMDAbility* ability, UParticleSystem* NewEmitterTemplate, USceneComponent* NewAttachToComponent, FName AttachPointName, FVector Location, FRotator Rotation, FVector Scale, TEnumAsByte<EAttachLocation::Type> LocationType, bool bAutoDestroy, EPSCPoolMethod PoolingMethod, bool useAbsoluteRoatation);
    
};

