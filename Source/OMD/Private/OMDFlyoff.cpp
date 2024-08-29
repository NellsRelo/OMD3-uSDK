#include "OMDFlyoff.h"
#include "Components/SceneComponent.h"
#include "Components/WidgetComponent.h"

AOMDFlyoff::AOMDFlyoff(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->RootComponent = CreateDefaultSubobject<USceneComponent>(TEXT("Scene"));
    this->SceneComponent = (USceneComponent*)RootComponent;
    this->WidgetComponent = CreateDefaultSubobject<UWidgetComponent>(TEXT("Widget"));
    this->bIsAvailable = false;
    this->flyoffLifeSpan = 0.50f;
    this->WidgetComponent->SetupAttachment(RootComponent);
}

void AOMDFlyoff::SetIsAvailable(bool isAvailable) {
}


bool AOMDFlyoff::GetIsAvailable() {
    return false;
}

float AOMDFlyoff::GetFlyoffLifeSpan() {
    return 0.0f;
}


