#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "UObject/NoExportTypes.h"
#include "OMDAction.h"
#include "SpawnSoundAtLocationActionDelegateDelegate.h"
#include "OMDAction_SpawnSoundAtLocation.generated.h"

class UAudioComponent;
class UOMDAbility;
class UOMDAction_SpawnSoundAtLocation;
class USoundAttenuation;
class USoundBase;
class USoundConcurrency;

UCLASS(Blueprintable)
class OMD_API UOMDAction_SpawnSoundAtLocation : public UOMDAction {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FSpawnSoundAtLocationActionDelegate OnSoundSpawned;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UAudioComponent* AudioComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    USoundBase* Sound;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    USoundAttenuation* AttenuationSettings;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    USoundConcurrency* ConcurrencySettings;
    
public:
    UOMDAction_SpawnSoundAtLocation();

    UFUNCTION(BlueprintCallable)
    static UOMDAction_SpawnSoundAtLocation* SpawnSoundAtLocation(UOMDAbility* ability, USoundBase* NewSound, FVector Location, FRotator Rotation, float VolumeMultiplier, float PitchMultiplier, float StartTime, USoundAttenuation* NewAttenuationSettings, USoundConcurrency* NewConcurrencySettings, bool bAutoDestroy);
    
};

