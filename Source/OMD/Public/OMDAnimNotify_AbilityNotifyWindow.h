#pragma once
#include "CoreMinimal.h"
#include "Animation/AnimNotifies/AnimNotifyState.h"
#include "EOMDAbilityNotifyType.h"
#include "OMDAnimNotify_AbilityNotifyWindow.generated.h"

UCLASS(Blueprintable, CollapseCategories, EditInlineNew)
class OMD_API UOMDAnimNotify_AbilityNotifyWindow : public UAnimNotifyState {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EOMDAbilityNotifyType Type;
    
public:
    UOMDAnimNotify_AbilityNotifyWindow();

};

