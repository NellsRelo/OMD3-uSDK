#pragma once
#include "CoreMinimal.h"
#include "OMDAction.h"
#include "OMDAction_SetCharacterGravity.generated.h"

class AOMDCharacter;
class UOMDAbility;
class UOMDAction_SetCharacterGravity;

UCLASS(Blueprintable)
class OMD_API UOMDAction_SetCharacterGravity : public UOMDAction {
    GENERATED_BODY()
public:
    UOMDAction_SetCharacterGravity();

    UFUNCTION(BlueprintCallable)
    static UOMDAction_SetCharacterGravity* SetCharacterGravity(UOMDAbility* ability, AOMDCharacter* Character, float GravityScale, bool enableMeshGravity);
    
};

