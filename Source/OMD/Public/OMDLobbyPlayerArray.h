#pragma once
#include "CoreMinimal.h"
#include "Engine/NetSerialization.h"
#include "OMDLobbyPlayerArrayItem.h"
#include "OMDLobbyPlayerArray.generated.h"

USTRUCT(BlueprintType)
struct OMD_API FOMDLobbyPlayerArray : public FFastArraySerializer {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FOMDLobbyPlayerArrayItem> PlayerArray;
    
public:
    FOMDLobbyPlayerArray();
};

