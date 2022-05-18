#pragma once
#include "CoreMinimal.h"
#include "Templates/SubclassOf.h"
#include "OMDAction.h"
#include "SpawnActorActionDelegateDelegate.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Transform -FallbackName=Transform
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=ESpawnActorCollisionHandlingMethod -FallbackName=ESpawnActorCollisionHandlingMethod
#include "OMDAction_SpawnActor.generated.h"

class UOMDAction_SpawnActor;
class AActor;
class UOMDAbility;
class AOMDAbilityActor;

UCLASS()
class OMD_API UOMDAction_SpawnActor : public UOMDAction {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable)
    FSpawnActorActionDelegate OnSpawned;
    
    UPROPERTY(BlueprintAssignable)
    FSpawnActorActionDelegate OnFailed;
    
    UOMDAction_SpawnActor();
    UFUNCTION(BlueprintCallable)
    static UOMDAction_SpawnActor* SpawnSoundAttached(UOMDAbility* ability, TSubclassOf<AOMDAbilityActor> spawnClass, const FTransform& SpawnTransform, ESpawnActorCollisionHandlingMethod collisionHandlingOverride, float LifeSpan, bool endActionOnActorDesctruction);
    
protected:
    UFUNCTION()
    void HandleSpawnedActorDestroyed(AActor* DestroyedActor);
    
};

