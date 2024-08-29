#pragma once
#include "CoreMinimal.h"
#include "OMDAICharacterProto.h"
#include "OMDSoftProtoPtr.h"
#include "OMDAICharacterGuardianProto.generated.h"

USTRUCT(BlueprintType)
struct OMD_API FOMDAICharacterGuardianProto : public FOMDAICharacterProto {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    uint8 bIsWarHero: 1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    uint8 bCanDie: 1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOMDSoftProtoPtr RecoveryAbilityProto;
    
public:
    FOMDAICharacterGuardianProto();
};

