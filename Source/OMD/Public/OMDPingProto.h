#pragma once
#include "CoreMinimal.h"
#include "OMDProtoBase.h"
#include "OMDPingProto.generated.h"

class UTexture2D;
class USoundCue;

USTRUCT(BlueprintType)
struct OMD_API FOMDPingProto : public FOMDProtoBase {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    FText DisplayName;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    FName DialogueIdentifier;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    TSoftObjectPtr<UTexture2D> CommRoseIcon;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    bool bPingMinimap;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    TSoftObjectPtr<UTexture2D> MinimapPingIcon;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    float MinimapPingDuration;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    TSoftObjectPtr<USoundCue> MinimapPingSFX;
    
public:
    FOMDPingProto();
};

