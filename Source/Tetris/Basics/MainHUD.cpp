// Fill out your copyright notice in the Description page of Project Settings.


#include "MainHUD.h"
#include "Tetris/Widget/MainUserWidget.h"

// Sets default values
AMainHUD::AMainHUD()
{
	// Set this pawn to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

}

// Called when the game starts or when spawned
void AMainHUD::BeginPlay()
{
	Super::BeginPlay();

}

// Called every frame
void AMainHUD::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

void AMainHUD::ShowWidget()
{
	UUserWidget::CreateWidgetInstance(*GetWorld(), TetrisWidgetClass, FName("Tetris"));
}
