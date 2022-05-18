#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=DeveloperSettings -ObjectName=DeveloperSettings -FallbackName=DeveloperSettings
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Vector2D -FallbackName=Vector2D
#include "OMDSubtitlesSettings.generated.h"

UCLASS(DefaultConfig, Config=Game)
class UOMDSubtitlesSettings : public UDeveloperSettings {
    GENERATED_BODY()
public:
    UPROPERTY(Config, EditAnywhere)
    FVector2D SubtitlesMinPosSinglePlayer;
    
    UPROPERTY(Config, EditAnywhere)
    FVector2D SubtitlesMaxPosSinglePlayer;
    
    UPROPERTY(Config, EditAnywhere)
    FVector2D SubtitlesMinPosMultiplayer;
    
    UPROPERTY(Config, EditAnywhere)
    FVector2D SubtitlesMaxPosMultiplayer;
    
    UOMDSubtitlesSettings();
};

