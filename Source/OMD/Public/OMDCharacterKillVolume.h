#pragma once
#include "CoreMinimal.h"
#include "GameFramework/Volume.h"
#include "OMDCharacterKillVolume.generated.h"

class AActor;

UCLASS(Blueprintable)
class OMD_API AOMDCharacterKillVolume : public AVolume {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bKillMinions;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bKillPlayers;
    
    AOMDCharacterKillVolume(const FObjectInitializer& ObjectInitializer);

protected:
    UFUNCTION(BlueprintCallable)
    void OnOverlapBegin(AActor* OverlappedActor, AActor* OtherActor);
    
};

