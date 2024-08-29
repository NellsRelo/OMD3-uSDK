#pragma once
#include "CoreMinimal.h"
#include "OMDNewsSection.generated.h"

USTRUCT(BlueprintType)
struct OMD_API FOMDNewsSection {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FText SectionTitle;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FText SectionDescription;
    
    FOMDNewsSection();
};

