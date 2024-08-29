#pragma once
#include "CoreMinimal.h"
#include "Engine/LevelScriptActor.h"
#include "Templates/SubclassOf.h"
#include "OMDCinematicScriptActor.generated.h"

class ALevelSequenceActor;
class ULevelSequence;
class UOMDCinematicWidget;

UCLASS(Blueprintable)
class OMD_API AOMDCinematicScriptActor : public ALevelScriptActor {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<UOMDCinematicWidget> CinematicWidgetClass;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<UOMDCinematicWidget> PostCinematicWidgetClass;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UOMDCinematicWidget* CinematicWidget;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ULevelSequence* LevelSequence;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ALevelSequenceActor* LevelSequenceActor;
    
public:
    AOMDCinematicScriptActor(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable)
    void SkipCinematic();
    
protected:
    UFUNCTION(BlueprintCallable)
    void LevelSequenceFinished();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void BP_CinematicFinished();
    
};

