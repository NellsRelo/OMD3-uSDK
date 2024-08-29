#pragma once
#include "CoreMinimal.h"
#include "GameFramework/Character.h"
#include "EOMDCameraStyle.h"
#include "OMDAbilitySystemInterface.h"
#include "OMDSoftProtoPtr.h"
#include "OMDTrapMountablePawn.generated.h"

class UOMDAbilitySystemComponent;
class UOMDReticleWidget;
class USpringArmComponent;

UCLASS(Blueprintable)
class OMD_API AOMDTrapMountablePawn : public ACharacter, public IOMDAbilitySystemInterface {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UOMDAbilitySystemComponent* abilitySystem;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float RotationScalar;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOMDSoftProtoPtr CameraStyleZoom1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOMDSoftProtoPtr CameraStyleZoom2;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftClassPtr<UOMDReticleWidget> ReticleWidgetClass;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    USpringArmComponent* CameraBoom;
    
public:
    AOMDTrapMountablePawn(const FObjectInitializer& ObjectInitializer);

protected:
    UFUNCTION(BlueprintCallable)
    void ToggleViews();
    
    UFUNCTION(BlueprintCallable, Reliable, Server, WithValidation)
    void Server_ToggleView(EOMDCameraStyle cameraStyle);
    
    UFUNCTION(BlueprintCallable, Reliable, Server, WithValidation)
    void Server_Interact();
    
    UFUNCTION(BlueprintCallable, Reliable, Server, WithValidation)
    void Server_DeactivatePrimary();
    
    UFUNCTION(BlueprintCallable, Reliable, Server, WithValidation)
    void Server_ActivatePrimary();
    

    // Fix for true pure virtual functions not being implemented
};

