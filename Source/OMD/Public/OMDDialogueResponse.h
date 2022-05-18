#pragma once
#include "CoreMinimal.h"
#include "Engine/DataTable.h"
#include "OMDDialogueResponse.generated.h"

class USoundBase;

USTRUCT()
struct OMD_API FOMDDialogueResponse : public FTableRowBase {
    GENERATED_BODY()
public:
    UPROPERTY(EditDefaultsOnly)
    TSoftObjectPtr<USoundBase> Sound;
    
    FOMDDialogueResponse();
};

