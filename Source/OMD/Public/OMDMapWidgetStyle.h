#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=SlateCore -ObjectName=SlateWidgetStyle -FallbackName=SlateWidgetStyle
//CROSS-MODULE INCLUDE V2: -ModuleName=SlateCore -ObjectName=SlateBrush -FallbackName=SlateBrush
#include "OMDMapWidgetStyle.generated.h"

USTRUCT(BlueprintType)
struct OMD_API FOMDMapWidgetStyle : public FSlateWidgetStyle {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float IconScale;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FSlateBrush Boss;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FSlateBrush BossOutline;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FSlateBrush Death;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FSlateBrush Door_EnemiesComing;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FSlateBrush Door_Locked;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FSlateBrush Door_NextWave;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FSlateBrush Door_NotComing;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FSlateBrush Door_Portal;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FSlateBrush EnemyFlyer;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FSlateBrush EnemySpecial;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FSlateBrush Player;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FSlateBrush Rift;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FSlateBrush Trap_Wide;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FSlateBrush EnemyBig;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FSlateBrush EnemyFlyerBaby;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FSlateBrush Trap;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FSlateBrush EnemySmall;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FSlateBrush Totem;
    
    FOMDMapWidgetStyle();
};

