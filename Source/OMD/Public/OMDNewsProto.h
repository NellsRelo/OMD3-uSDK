#pragma once
#include "CoreMinimal.h"
#include "OMDNewsSection.h"
#include "OMDProtoBase.h"
#include "OMDNewsProto.generated.h"

class UTexture2D;

USTRUCT(BlueprintType)
struct OMD_API FOMDNewsProto : public FOMDProtoBase {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    FString NewsSlug;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    FOMDNewsSection ButtonSection;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    TSoftObjectPtr<UTexture2D> ButtonBackgroundTexture;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    FText NewsTitle;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    FText NewsRichText;
    
public:
    FOMDNewsProto();
};

