#pragma once
#include "CoreMinimal.h"
#include "Templates/SubclassOf.h"
#include "Engine/LevelScriptActor.h"
#include "OMDCinematicScriptActor.generated.h"

class UOMDCinematicWidget;
class ULevelSequence;
class ALevelSequenceActor;

UCLASS()
class OMD_API AOMDCinematicScriptActor : public ALevelScriptActor {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    TSubclassOf<UOMDCinematicWidget> CinematicWidgetClass;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    TSubclassOf<UOMDCinematicWidget> PostCinematicWidgetClass;
    
    UPROPERTY(BlueprintReadOnly, Export)
    UOMDCinematicWidget* CinematicWidget;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    ULevelSequence* LevelSequence;
    
    UPROPERTY(BlueprintReadOnly)
    ALevelSequenceActor* LevelSequenceActor;
    
public:
    AOMDCinematicScriptActor();
    UFUNCTION(BlueprintCallable)
    void SkipCinematic();
    
protected:
    UFUNCTION()
    void LevelSequenceFinished();
    
    UFUNCTION(BlueprintNativeEvent)
    void BP_CinematicFinished();
    
};

