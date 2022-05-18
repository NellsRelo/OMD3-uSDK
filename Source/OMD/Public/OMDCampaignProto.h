#pragma once
#include "CoreMinimal.h"
#include "OMDProtoBase.h"
#include "EOMDWeaponNPEStyle.h"
#include "OMDSoftProtoPtr.h"
#include "OMDCampaignProto.generated.h"

USTRUCT(BlueprintType)
struct OMD_API FOMDCampaignProto : public FOMDProtoBase {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    FText campaignName;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    uint8 bUseLevelIntros: 1;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    uint8 bUseLevelCinematics: 1;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    uint8 bUseMissionUnlocks: 1;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    uint8 bUseNPE: 1;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    uint8 bUseDifficultySelection: 1;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    uint8 bUseSavedLoadout: 1;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    uint8 bRequiresEntitlement: 1;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    EOMDWeaponNPEStyle WeaponNPEStyle;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    TArray<FOMDSoftProtoPtr> MissionList;
    
public:
    FOMDCampaignProto();
};

