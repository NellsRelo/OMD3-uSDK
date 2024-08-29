#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "UObject/NoExportTypes.h"
#include "Engine/EngineTypes.h"
#include "OMDAction.h"
#include "SpawnSoundAttachedActionDelegateDelegate.h"
#include "OMDAction_SpawnSoundAttached.generated.h"

class UAudioComponent;
class UOMDAbility;
class UOMDAction_SpawnSoundAttached;
class USceneComponent;
class USoundAttenuation;
class USoundBase;
class USoundConcurrency;

UCLASS(Blueprintable)
class OMD_API UOMDAction_SpawnSoundAttached : public UOMDAction {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FSpawnSoundAttachedActionDelegate OnSoundSpawned;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UAudioComponent* AudioComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    USoundBase* Sound;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    USceneComponent* AttachToComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    USoundAttenuation* AttenuationSettings;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    USoundConcurrency* ConcurrencySettings;
    
public:
    UOMDAction_SpawnSoundAttached();

    UFUNCTION(BlueprintCallable)
    void Stop();
    
    UFUNCTION(BlueprintCallable)
    static UOMDAction_SpawnSoundAttached* SpawnSoundAttached(UOMDAbility* ability, USoundBase* NewSound, USceneComponent* NewAttachToComponent, FName AttachPointName, FVector Location, FRotator Rotation, TEnumAsByte<EAttachLocation::Type> LocationType, bool bStopWhenAttachedToDestroyed, float VolumeMultiplier, float PitchMultiplier, float StartTime, USoundAttenuation* NewAttenuationSettings, USoundConcurrency* NewConcurrencySettings, bool bAutoDestroy);
    
};

