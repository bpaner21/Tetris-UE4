// Fill out your copyright notice in the Description page of Project Settings.


#include "MainGameBanner.h"
#include "Tetris/Basics/MainGameMode.h"

void UMainGameBanner::GameButtonClicked()
{
	AMainGameMode* GameMode = Cast<AMainGameMode>(GetWorld()->GetAuthGameMode());

	if (GameMode != nullptr) { GameMode->SwitchGame(BannerGame); }


}
