#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "Engine/EngineTypes.h"
#include "OMDAction.h"
#include "SpawnActorActionDelegateDelegate.h"
#include "Templates/SubclassOf.h"
#include "OMDAction_SpawnActor.generated.h"

class AActor;
class AOMDAbilityActor;
class UOMDAbility;
class UOMDAction_SpawnActor;

UCLASS(Blueprintable)
class OMD_API UOMDAction_SpawnActor : public UOMDAction {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FSpawnActorActionDelegate OnSpawned;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FSpawnActorActionDelegate OnFailed;
    
    UOMDAction_SpawnActor();

    UFUNCTION(BlueprintCallable)
    static UOMDAction_SpawnActor* SpawnSoundAttached(UOMDAbility* ability, TSubclassOf<AOMDAbilityActor> spawnClass, const FTransform& SpawnTransform, ESpawnActorCollisionHandlingMethod collisionHandlingOverride, float LifeSpan, bool endActionOnActorDesctruction);
    
protected:
    UFUNCTION(BlueprintCallable)
    void HandleSpawnedActorDestroyed(AActor* DestroyedActor);
    
};

