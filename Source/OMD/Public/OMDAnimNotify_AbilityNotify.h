#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=AnimNotify -FallbackName=AnimNotify
#include "EOMDAbilityNotifyType.h"
#include "OMDAnimNotify_AbilityNotify.generated.h"

UCLASS(CollapseCategories, EditInlineNew)
class OMD_API UOMDAnimNotify_AbilityNotify : public UAnimNotify {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    EOMDAbilityNotifyType Type;
    
public:
    UOMDAnimNotify_AbilityNotify();
};

