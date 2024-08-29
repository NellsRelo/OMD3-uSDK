#pragma once
#include "CoreMinimal.h"
#include "EChromaticaElements.h"
#include "OMDAction.h"
#include "OMDAction_ChangeElement.generated.h"

class AOMDAIFlyerCharacter;
class UOMDAbility;
class UOMDAction_ChangeElement;

UCLASS(Blueprintable)
class OMD_API UOMDAction_ChangeElement : public UOMDAction {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EChromaticaElements element;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    AOMDAIFlyerCharacter* Target;
    
public:
    UOMDAction_ChangeElement();

    UFUNCTION(BlueprintCallable)
    static UOMDAction_ChangeElement* LaunchProjectile(UOMDAbility* ability, EChromaticaElements NewElement, AOMDAIFlyerCharacter* NewTarget);
    
};

