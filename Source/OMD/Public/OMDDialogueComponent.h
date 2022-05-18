#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=ActorComponent -FallbackName=ActorComponent
#include "OMDDialogueComponent.generated.h"

class UOMDDialogueRuleset;
class UDataTable;

UCLASS(ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class OMD_API UOMDDialogueComponent : public UActorComponent {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(EditAnywhere)
    UOMDDialogueRuleset* Ruleset;
    
    UPROPERTY(EditAnywhere)
    UDataTable* Responses;
    
public:
    UOMDDialogueComponent();
};

