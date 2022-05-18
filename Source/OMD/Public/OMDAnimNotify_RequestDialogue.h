#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=AnimNotify -FallbackName=AnimNotify
#include "OMDAnimNotify_RequestDialogue.generated.h"

UCLASS(CollapseCategories, EditInlineNew)
class OMD_API UOMDAnimNotify_RequestDialogue : public UAnimNotify {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    FName concept;
    
public:
    UOMDAnimNotify_RequestDialogue();
};

