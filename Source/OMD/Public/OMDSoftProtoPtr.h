#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Guid -FallbackName=Guid
#include "OMDSoftProtoPtr.generated.h"

USTRUCT(BlueprintType)
struct OMD_API FOMDSoftProtoPtr {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    FGuid Guid;
    
public:
    FOMDSoftProtoPtr();
};

#if UE_BUILD_DEBUG
uint32 GetTypeHash(const FOMDSoftProtoPtr& Thing);
#else // optimize by inlining in shipping and development builds
FORCEINLINE uint32 GetTypeHash(const FOMDSoftProtoPtr& Thing)
{
    uint32 Hash = FCrc::MemCrc32(&Thing, sizeof(FOMDSoftProtoPtr));
    return Hash;
}
#endif