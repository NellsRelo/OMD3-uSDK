#pragma once
#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "OMDDialogueComponent.generated.h"

class UDataTable;
class UOMDDialogueRuleset;

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class OMD_API UOMDDialogueComponent : public UActorComponent {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UOMDDialogueRuleset* Ruleset;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UDataTable* Responses;
    
public:
    UOMDDialogueComponent(const FObjectInitializer& ObjectInitializer);

};

