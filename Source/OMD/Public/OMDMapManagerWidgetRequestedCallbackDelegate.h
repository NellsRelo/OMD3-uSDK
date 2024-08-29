#pragma once
#include "CoreMinimal.h"
#include "Templates/SubclassOf.h"
#include "OMDMapManagerWidgetRequestedCallbackDelegate.generated.h"

class AActor;
class UUserWidget;

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FOMDMapManagerWidgetRequestedCallback, AActor*, requestingActor, TSubclassOf<UUserWidget>, Widget);

