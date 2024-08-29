#pragma once
#include "CoreMinimal.h"
#include "GameFramework/GameSession.h"
#include "OMDGameSession.generated.h"

UCLASS(Blueprintable)
class OMD_API AOMDGameSession : public AGameSession {
    GENERATED_BODY()
public:
    AOMDGameSession(const FObjectInitializer& ObjectInitializer);

};

