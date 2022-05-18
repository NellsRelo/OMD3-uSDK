#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=Volume -FallbackName=Volume
#include "OMDCharacterKillVolume.generated.h"

class AActor;

UCLASS()
class OMD_API AOMDCharacterKillVolume : public AVolume {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    bool bKillMinions;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    bool bKillPlayers;
    
    AOMDCharacterKillVolume();
protected:
    UFUNCTION()
    void OnOverlapBegin(AActor* OverlappedActor, AActor* OtherActor);
    
};

