#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=GameViewportClient -FallbackName=GameViewportClient
#include "OMDGameViewportClient.generated.h"

UCLASS(NonTransient, Config=Game)
class OMD_API UOMDGameViewportClient : public UGameViewportClient {
    GENERATED_BODY()
public:
    UOMDGameViewportClient();
};

