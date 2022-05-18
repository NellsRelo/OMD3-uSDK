#include "OMDFlyoff.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=SceneComponent -FallbackName=SceneComponent
//CROSS-MODULE INCLUDE V2: -ModuleName=UMG -ObjectName=WidgetComponent -FallbackName=WidgetComponent

void AOMDFlyoff::SetIsAvailable(bool isAvailable) {
}


bool AOMDFlyoff::GetIsAvailable() {
    return false;
}

float AOMDFlyoff::GetFlyoffLifeSpan() {
    return 0.0f;
}

AOMDFlyoff::AOMDFlyoff() {
    this->SceneComponent = CreateDefaultSubobject<USceneComponent>(TEXT("Scene"));
    this->WidgetComponent = CreateDefaultSubobject<UWidgetComponent>(TEXT("Widget"));
    this->bIsAvailable = false;
    this->flyoffLifeSpan = 0.50f;
}

