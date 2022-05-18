#pragma once
#include "CoreMinimal.h"
#include "LevelSequenceActor.h"
#include "OMDScreenTransition.h"
#include "OMDModalTransition.h"
#include "OMDWidgetTransitionSequenceActor.generated.h"

UCLASS()
class OMD_API AOMDWidgetTransitionSequenceActor : public ALevelSequenceActor {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(EditAnywhere)
    TArray<FOMDScreenTransition> ScreenTransitions;
    
    UPROPERTY(EditAnywhere)
    TArray<FOMDModalTransition> ModalTransitions;
    
    UPROPERTY(EditAnywhere)
    uint8 bReverse: 1;
    
public:
    // TODO: Unresolved symbol, possibly related to issue noted in .cpp
    //AOMDWidgetTransitionSequenceActor();
};

