#pragma once
#include "CoreMinimal.h"
#include "OMDNewsSection.generated.h"

USTRUCT(BlueprintType)
struct OMD_API FOMDNewsSection {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    FText SectionTitle;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    FText SectionDescription;
    
    FOMDNewsSection();
};

