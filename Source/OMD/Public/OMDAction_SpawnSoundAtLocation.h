#pragma once
#include "CoreMinimal.h"
#include "OMDAction.h"
#include "SpawnSoundAtLocationActionDelegateDelegate.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Vector -FallbackName=Vector
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Rotator -FallbackName=Rotator
#include "OMDAction_SpawnSoundAtLocation.generated.h"

class UOMDAbility;
class USoundAttenuation;
class UAudioComponent;
class USoundBase;
class USoundConcurrency;
class UOMDAction_SpawnSoundAtLocation;

UCLASS()
class OMD_API UOMDAction_SpawnSoundAtLocation : public UOMDAction {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable)
    FSpawnSoundAtLocationActionDelegate OnSoundSpawned;
    
private:
    UPROPERTY(Export)
    UAudioComponent* AudioComponent;
    
    UPROPERTY()
    USoundBase* Sound;
    
    UPROPERTY()
    USoundAttenuation* AttenuationSettings;
    
    UPROPERTY()
    USoundConcurrency* ConcurrencySettings;
    
public:
    UOMDAction_SpawnSoundAtLocation();
    UFUNCTION(BlueprintCallable)
    static UOMDAction_SpawnSoundAtLocation* SpawnSoundAtLocation(UOMDAbility* ability, USoundBase* NewSound, FVector Location, FRotator Rotation, float VolumeMultiplier, float PitchMultiplier, float StartTime, USoundAttenuation* NewAttenuationSettings, USoundConcurrency* NewConcurrencySettings, bool bAutoDestroy);
    
};

