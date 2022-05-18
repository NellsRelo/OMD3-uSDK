#pragma once
#include "CoreMinimal.h"
#include "OMDAction.h"
#include "SpawnSoundAttachedActionDelegateDelegate.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Vector -FallbackName=Vector
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Rotator -FallbackName=Rotator
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=EAttachLocation -FallbackName=EAttachLocation
#include "OMDAction_SpawnSoundAttached.generated.h"

class USoundAttenuation;
class UAudioComponent;
class UOMDAction_SpawnSoundAttached;
class USoundBase;
class USceneComponent;
class USoundConcurrency;
class UOMDAbility;

UCLASS()
class OMD_API UOMDAction_SpawnSoundAttached : public UOMDAction {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable)
    FSpawnSoundAttachedActionDelegate OnSoundSpawned;
    
private:
    UPROPERTY(Export)
    UAudioComponent* AudioComponent;
    
    UPROPERTY()
    USoundBase* Sound;
    
    UPROPERTY(Export)
    USceneComponent* AttachToComponent;
    
    UPROPERTY()
    USoundAttenuation* AttenuationSettings;
    
    UPROPERTY()
    USoundConcurrency* ConcurrencySettings;
    
public:
    UOMDAction_SpawnSoundAttached();
    UFUNCTION(BlueprintCallable)
    void Stop();
    
    UFUNCTION(BlueprintCallable)
    static UOMDAction_SpawnSoundAttached* SpawnSoundAttached(UOMDAbility* ability, USoundBase* NewSound, USceneComponent* NewAttachToComponent, FName AttachPointName, FVector Location, FRotator Rotation, TEnumAsByte<EAttachLocation::Type> LocationType, bool bStopWhenAttachedToDestroyed, float VolumeMultiplier, float PitchMultiplier, float StartTime, USoundAttenuation* NewAttenuationSettings, USoundConcurrency* NewConcurrencySettings, bool bAutoDestroy);
    
};

