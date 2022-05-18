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
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    uint8 bIsWarHero: 1;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    uint8 bCanDie: 1;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    FOMDSoftProtoPtr RecoveryAbilityProto;
    
public:
    FOMDAICharacterGuardianProto();
};

