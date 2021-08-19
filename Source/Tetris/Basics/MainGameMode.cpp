// Fill out your copyright notice in the Description page of Project Settings.


#include "MainGameMode.h"
#include "Runtime/Engine/Classes/Kismet/GameplayStatics.h"

// Sets default values
AMainGameMode::AMainGameMode()
{
	// Set this pawn to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

}

// Called when the game starts or when spawned
void AMainGameMode::BeginPlay()
{
	Super::BeginPlay();

}

// Called every frame
void AMainGameMode::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

void AMainGameMode::SwitchGame(ETetris InGame)
{
	switch (InGame)
	{
	default:
	case ETetris::Game_None:
	case ETetris::Game_Main:
		UGameplayStatics::OpenLevel(this, "Map_MainGame");
		break;

	case ETetris::Game_Classic:
		UGameplayStatics::OpenLevel(this, "Map_Classic");
		break;
	}
}
