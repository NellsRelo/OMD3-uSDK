#pragma once
#include "CoreMinimal.h"
#include "OMDProtoBase.h"
#include "OMDSoftProtoPtr.h"
#include "OMDMissionItemElement.h"
#include "OMDMissionCinematic.h"
#include "OMDMissionSlotElement.h"
#include "OMDMissionProgressionElement.h"
#include "OMDMissionCharacterElement.h"
#include "OMDMissionProto.generated.h"

class UWorld;
class UOMDMapData;
class UTexture2D;
class UWidget;
class AActor;

USTRUCT(BlueprintType)
struct OMD_API FOMDMissionProto : public FOMDProtoBase {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    FText MissionName;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    TSoftObjectPtr<UWorld> MissionLevel;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    TArray<FOMDSoftProtoPtr> DefaultCharacters;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    float ParTimeSeconds;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    int32 EndlessWavesPerSkull;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    FOMDSoftProtoPtr MissionModifierSet;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    TSoftObjectPtr<UTexture2D> ThumbnailTexture;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    TSoftObjectPtr<UTexture2D> RandomModeMissionSelectionTexture;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    TSoftObjectPtr<UTexture2D> RandomModeLoadingScreenTexture;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly, Export)
    TSoftObjectPtr<UOMDMapData> MapData;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    TSoftClassPtr<AActor> PortalDisplayClass;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    TSoftClassPtr<AActor> FeaturedMinionsClass;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    TSoftClassPtr<UWidget> MissionLoadScreen;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    FOMDMissionCinematic PreMissionCinematic;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    FOMDMissionCinematic PostMissionCinematic;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    TArray<FOMDMissionItemElement> ItemUnlocks;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    TArray<FOMDMissionSlotElement> SlotUnlocks;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    TArray<FOMDMissionProgressionElement> MissionUnlocks;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    TArray<FOMDMissionCharacterElement> CharacterUnlocks;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly, Export)
    TSoftObjectPtr<UWidget> PostMissionVideo;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    FText ChallengeDescription;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    TSoftObjectPtr<UTexture2D> ChallengeImage;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    uint8 bIsWarScenario: 1;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    uint8 bRequiresEntitlement: 1;
    
public:
    FOMDMissionProto();
};

