#pragma once
#include "CoreMinimal.h"
#include "OMDAIWispCharacter.h"
#include "OMDAIWispFlyerCharacter.generated.h"

UCLASS(Blueprintable)
class OMD_API AOMDAIWispFlyerCharacter : public AOMDAIWispCharacter {
    GENERATED_BODY()
public:
    AOMDAIWispFlyerCharacter(const FObjectInitializer& ObjectInitializer);

};

