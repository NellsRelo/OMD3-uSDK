#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=AnimNotify -FallbackName=AnimNotify
#include "EOMDAIAnimNotifyType.h"
#include "OMDAIAnimNotify.generated.h"

UCLASS(CollapseCategories)
class OMD_API UOMDAIAnimNotify : public UAnimNotify {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    EOMDAIAnimNotifyType NotifyType;
    
    UPROPERTY(EditAnywhere)
    int32 NotifyID;
    
    UPROPERTY(EditAnywhere)
    FName BBKey;
    
    UPROPERTY(EditAnywhere)
    bool BBValue;
    
    UOMDAIAnimNotify();
};

