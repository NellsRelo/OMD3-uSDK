#include "OMDCameraActor.h"
#include "OMDCameraComponent.h"

AOMDCameraActor::AOMDCameraActor(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer.SetDefaultSubobjectClass<UOMDCameraComponent>(TEXT("CameraComponent"))) {
    const FProperty* p_CameraComponent = GetClass()->FindPropertyByName("CameraComponent");
    (*p_CameraComponent->ContainerPtrToValuePtr<UCameraComponent*>(this))->SetupAttachment(RootComponent);
}


