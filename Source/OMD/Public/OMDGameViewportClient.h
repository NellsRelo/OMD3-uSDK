#pragma once
#include "CoreMinimal.h"
#include "Engine/GameViewportClient.h"
#include "OMDGameViewportClient.generated.h"

UCLASS(Blueprintable, NonTransient, Config=Game)
class OMD_API UOMDGameViewportClient : public UGameViewportClient {
    GENERATED_BODY()
public:
    UOMDGameViewportClient();

};

