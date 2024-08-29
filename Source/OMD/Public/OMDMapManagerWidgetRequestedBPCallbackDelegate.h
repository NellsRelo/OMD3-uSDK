#pragma once
#include "CoreMinimal.h"
#include "Templates/SubclassOf.h"
#include "OMDMapManagerWidgetRequestedBPCallbackDelegate.generated.h"

class AActor;
class UUserWidget;

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_DELEGATE_TwoParams(FOMDMapManagerWidgetRequestedBPCallback, AActor*, requestingActor, TSubclassOf<UUserWidget>, Widget);

