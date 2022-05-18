#pragma once
#include "CoreMinimal.h"
#include "OMDSoftProtoPtr.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Object -FallbackName=Object
#include "OMDSingletonInterface.h"
#include "OMDDifficultyManager.generated.h"

UCLASS(Abstract, BlueprintType)
class OMD_API UOMDDifficultyManager : public UObject, public IOMDSingletonInterface {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float MaximumMoveSpeed;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float ApprenticeHealthModifier;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float ApprenticeMovementSpeedModifier;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float ApprenticeDamageModifier;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float ApprenticeRiftPointsModifier;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float RiftLordHealthModifier;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float RiftLordMovementSpeedModifier;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float RiftLordDamageModifier;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float RiftLordRiftPointsModifier;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float RiftLordTimedBreakOverride;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float EndlessHealthModifier;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float EndlessMovementSpeedModifier;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float EndlessDamageModifier;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float EndlessRiftPointsModifier;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float EndlessHealthAdditionPerWave;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    TMap<int32, float> HealthAdditionPerWaveList;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float EndlessMovementSpeedAdditionPerWave;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float EndlessDamageAdditionPerWave;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    TMap<int32, float> CrowdControlModifierPerWaveList;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float EndlessCoinReductionPerWave;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    int32 EndlessTimedBreakReductionPerIteration;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    int32 EndlessIterationNoGoBreaks;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    int32 EndlessWaveNoPickups;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    TMap<FOMDSoftProtoPtr, FOMDSoftProtoPtr> PromotionList;
    
    UOMDDifficultyManager();
    
    // Fix for true pure virtual functions not being implemented
};

