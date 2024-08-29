#pragma once
#include "CoreMinimal.h"
#include "Animation/AnimNotifies/AnimNotify.h"
#include "OMDAnimNotify_RequestDialogue.generated.h"

UCLASS(Blueprintable, CollapseCategories, EditInlineNew)
class OMD_API UOMDAnimNotify_RequestDialogue : public UAnimNotify {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName concept;
    
public:
    UOMDAnimNotify_RequestDialogue();

};

