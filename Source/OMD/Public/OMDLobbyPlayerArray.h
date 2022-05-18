#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=FastArraySerializer -FallbackName=FastArraySerializer
#include "OMDLobbyPlayerArrayItem.h"
#include "OMDLobbyPlayerArray.generated.h"

USTRUCT(BlueprintType)
struct OMD_API FOMDLobbyPlayerArray : public FFastArraySerializer {
    GENERATED_BODY()
public:
private:
    UPROPERTY()
    TArray<FOMDLobbyPlayerArrayItem> PlayerArray;
    
public:
    FOMDLobbyPlayerArray();
};

