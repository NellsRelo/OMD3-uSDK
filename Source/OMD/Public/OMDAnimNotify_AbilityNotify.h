#pragma once
#include "CoreMinimal.h"
#include "Animation/AnimNotifies/AnimNotify.h"
#include "EOMDAbilityNotifyType.h"
#include "OMDAnimNotify_AbilityNotify.generated.h"

UCLASS(Blueprintable, CollapseCategories, EditInlineNew)
class OMD_API UOMDAnimNotify_AbilityNotify : public UAnimNotify {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EOMDAbilityNotifyType Type;
    
public:
    UOMDAnimNotify_AbilityNotify();

};

