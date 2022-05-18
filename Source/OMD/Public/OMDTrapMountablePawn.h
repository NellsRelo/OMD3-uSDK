#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=Character -FallbackName=Character
#include "EOMDCameraStyle.h"
#include "OMDAbilitySystemInterface.h"
#include "OMDSoftProtoPtr.h"
#include "GameFramework/Character.h"
#include "OMDTrapMountablePawn.generated.h"

class UOMDAbilitySystemComponent;
class UOMDReticleWidget;
class USpringArmComponent;

UCLASS()
class OMD_API AOMDTrapMountablePawn : public ACharacter, public IOMDAbilitySystemInterface {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadOnly, Export, VisibleAnywhere)
    UOMDAbilitySystemComponent* abilitySystem;
    
    UPROPERTY(EditDefaultsOnly)
    float RotationScalar;
    
    UPROPERTY(EditDefaultsOnly)
    FOMDSoftProtoPtr CameraStyleZoom1;
    
    UPROPERTY(EditDefaultsOnly)
    FOMDSoftProtoPtr CameraStyleZoom2;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    TSoftClassPtr<UOMDReticleWidget> ReticleWidgetClass;
    
    UPROPERTY(Export, Transient)
    USpringArmComponent* CameraBoom;
    
public:
    AOMDTrapMountablePawn();
protected:
    UFUNCTION(BlueprintCallable)
    void ToggleViews();
    
    UFUNCTION(Reliable, Server, WithValidation)
    void Server_ToggleView(EOMDCameraStyle cameraStyle);
    
    UFUNCTION(Reliable, Server, WithValidation)
    void Server_Interact();
    
    UFUNCTION(Reliable, Server, WithValidation)
    void Server_DeactivatePrimary();
    
    UFUNCTION(Reliable, Server, WithValidation)
    void Server_ActivatePrimary();
    
    
    // Fix for true pure virtual functions not being implemented
};

