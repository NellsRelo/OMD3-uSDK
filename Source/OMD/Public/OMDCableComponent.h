#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=ComponentReference -FallbackName=ComponentReference
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=MeshComponent -FallbackName=MeshComponent
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Vector -FallbackName=Vector
#include "OMDCableComponent.generated.h"

class USceneComponent;
class AActor;

UCLASS(EditInlineNew, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class OMD_API UOMDCableComponent : public UMeshComponent {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    bool bAttachStart;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    bool bRidgedStart;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float RidgedStartLength;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    bool bAttachEnd;
    
    UPROPERTY(EditAnywhere)
    FComponentReference AttachEndTo;
    
    UPROPERTY(EditAnywhere)
    FName AttachEndToSocketName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FVector EndLocation;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    bool bRidgedEnd;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float RidgedEndLength;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float CableLength;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    int32 NumSegments;
    
    UPROPERTY(AdvancedDisplay, BlueprintReadOnly, EditAnywhere)
    float SubstepTime;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    int32 SolverIterations;
    
    UPROPERTY(AdvancedDisplay, BlueprintReadWrite, EditAnywhere)
    bool bEnableStiffness;
    
    UPROPERTY(AdvancedDisplay, BlueprintReadWrite, EditAnywhere)
    bool bUseSubstepping;
    
    UPROPERTY(AdvancedDisplay, BlueprintReadWrite, EditAnywhere)
    bool bSkipCableUpdateWhenNotVisible;
    
    UPROPERTY(AdvancedDisplay, BlueprintReadWrite, EditAnywhere)
    bool bSkipCableUpdateWhenNotOwnerRecentlyRendered;
    
    UPROPERTY(AdvancedDisplay, BlueprintReadWrite, EditAnywhere)
    bool bEnableCollision;
    
    UPROPERTY(AdvancedDisplay, BlueprintReadWrite, EditAnywhere)
    float CollisionFriction;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FVector CableForce;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float CableGravityScale;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float CableWidth;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    int32 NumSides;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float TileMaterial;
    
    UOMDCableComponent();
    UFUNCTION(BlueprintCallable)
    void SetAttachEndToComponent(USceneComponent* Component, FName SocketName);
    
    UFUNCTION(BlueprintCallable)
    void SetAttachEndTo(AActor* Actor, FName ComponentProperty, FName SocketName);
    
    UFUNCTION(BlueprintPure)
    void GetCableParticleLocations(TArray<FVector>& Locations) const;
    
    UFUNCTION(BlueprintPure)
    USceneComponent* GetAttachedComponent() const;
    
    UFUNCTION(BlueprintPure)
    AActor* GetAttachedActor() const;
    
};

