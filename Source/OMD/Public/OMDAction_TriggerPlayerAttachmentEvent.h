#pragma once
#include "CoreMinimal.h"
#include "EPlayerAttachmentEventType.h"
#include "EPlayerAttachmentSelectionMethod.h"
#include "OMDAction.h"
#include "OMDAction_TriggerPlayerAttachmentEvent.generated.h"

class AOMDPlayerCharacter;
class UOMDAbility;
class UOMDAction_TriggerPlayerAttachmentEvent;

UCLASS(Blueprintable)
class OMD_API UOMDAction_TriggerPlayerAttachmentEvent : public UOMDAction {
    GENERATED_BODY()
public:
    UOMDAction_TriggerPlayerAttachmentEvent();

    UFUNCTION(BlueprintCallable)
    static UOMDAction_TriggerPlayerAttachmentEvent* TriggerPlayerAttachmentEvent(UOMDAbility* ability, AOMDPlayerCharacter* Player, EPlayerAttachmentEventType playerAttachmentEventType, EPlayerAttachmentSelectionMethod playerAttachmentSelectionMethod, FName AttachmentName, int32 attachmentIndex);
    
};

