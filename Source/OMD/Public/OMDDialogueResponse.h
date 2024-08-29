#pragma once
#include "CoreMinimal.h"
#include "Engine/DataTable.h"
#include "OMDDialogueResponse.generated.h"

class USoundBase;

USTRUCT(BlueprintType)
struct OMD_API FOMDDialogueResponse : public FTableRowBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftObjectPtr<USoundBase> Sound;
    
    FOMDDialogueResponse();
};

