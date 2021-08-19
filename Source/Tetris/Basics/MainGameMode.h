// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/GameMode.h"

#include "Tetris/Utilities/MainEnums.h"

#include "MainGameMode.generated.h"

/**
 * 
 */
UCLASS()
class TETRIS_API AMainGameMode : public AGameMode
{
	GENERATED_BODY()

protected:
	// Sets default values for this pawn's properties
	AMainGameMode();

	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

	// Called every frame
	virtual void Tick(float DeltaTime) override;

public:
	void SwitchGame(ETetris InGame);
};
