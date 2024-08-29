#pragma once
#include "CoreMinimal.h"
#include "Engine/NetSerialization.h"
#include "OMDLobbyPlayerArrayItem.generated.h"

class AOMDLobbyPlayerState;

USTRUCT(BlueprintType)
struct OMD_API FOMDLobbyPlayerArrayItem : public FFastArraySerializerItem {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TWeakObjectPtr<AOMDLobbyPlayerState> PlayerState;
    
public:
    FOMDLobbyPlayerArrayItem();
};

