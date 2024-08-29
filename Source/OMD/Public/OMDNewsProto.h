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
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString NewsSlug;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOMDNewsSection ButtonSection;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftObjectPtr<UTexture2D> ButtonBackgroundTexture;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FText NewsTitle;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FText NewsRichText;
    
public:
    FOMDNewsProto();
};

