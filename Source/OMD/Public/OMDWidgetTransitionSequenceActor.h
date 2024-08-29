#pragma once
#include "CoreMinimal.h"
#include "LevelSequenceActor.h"
#include "OMDModalTransition.h"
#include "OMDScreenTransition.h"
#include "OMDWidgetTransitionSequenceActor.generated.h"

UCLASS(Blueprintable)
class OMD_API AOMDWidgetTransitionSequenceActor : public ALevelSequenceActor {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FOMDScreenTransition> ScreenTransitions;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FOMDModalTransition> ModalTransitions;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    uint8 bReverse: 1;
    
public:
    AOMDWidgetTransitionSequenceActor(const FObjectInitializer& ObjectInitializer);

};

