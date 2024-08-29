#include "OMDAction_SpawnActor.h"
#include "Templates/SubclassOf.h"

UOMDAction_SpawnActor::UOMDAction_SpawnActor() {
}

UOMDAction_SpawnActor* UOMDAction_SpawnActor::SpawnSoundAttached(UOMDAbility* ability, TSubclassOf<AOMDAbilityActor> spawnClass, const FTransform& SpawnTransform, ESpawnActorCollisionHandlingMethod collisionHandlingOverride, float LifeSpan, bool endActionOnActorDesctruction) {
    return NULL;
}

void UOMDAction_SpawnActor::HandleSpawnedActorDestroyed(AActor* DestroyedActor) {
}


