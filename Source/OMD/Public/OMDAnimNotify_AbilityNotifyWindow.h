#pragma once
#include "CoreMinimal.h"
#include "Animation/AnimNotifies/AnimNotifyState.h"
#include "EOMDAbilityNotifyType.h"
#include "OMDAnimNotify_AbilityNotifyWindow.generated.h"

UCLASS(CollapseCategories, EditInlineNew)
class OMD_API UOMDAnimNotify_AbilityNotifyWindow : public UAnimNotifyState {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    EOMDAbilityNotifyType Type;
    
public:
    UOMDAnimNotify_AbilityNotifyWindow();
};

