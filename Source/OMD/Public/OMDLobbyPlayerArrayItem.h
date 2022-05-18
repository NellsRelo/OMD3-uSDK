#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=FastArraySerializerItem -FallbackName=FastArraySerializerItem
#include "OMDLobbyPlayerArrayItem.generated.h"

class AOMDLobbyPlayerState;

USTRUCT(BlueprintType)
struct OMD_API FOMDLobbyPlayerArrayItem : public FFastArraySerializerItem {
    GENERATED_BODY()
public:
protected:
    UPROPERTY()
    TWeakObjectPtr<AOMDLobbyPlayerState> PlayerState;
    
public:
    FOMDLobbyPlayerArrayItem();
};

