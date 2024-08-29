#pragma once
#include "CoreMinimal.h"
#include "OMDAICharacterGuardian.h"
#include "OMDAICharacterDecoy.generated.h"

UCLASS(Blueprintable)
class OMD_API AOMDAICharacterDecoy : public AOMDAICharacterGuardian {
    GENERATED_BODY()
public:
    AOMDAICharacterDecoy(const FObjectInitializer& ObjectInitializer);

};

