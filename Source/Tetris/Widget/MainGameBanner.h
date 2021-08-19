// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "MainUserWidget.h"

#include "Tetris/Utilities/MainEnums.h"

#include "MainGameBanner.generated.h"

/**
 * 
 */
UCLASS()
class TETRIS_API UMainGameBanner : public UMainUserWidget
{
	GENERATED_BODY()

public:
	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "Tetris - Banner")
		ETetris BannerGame;

	UFUNCTION(BlueprintCallable, Category = "Tetris - Banner")
		void GameButtonClicked();
	
};
