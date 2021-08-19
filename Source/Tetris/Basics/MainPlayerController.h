// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/PlayerController.h"
#include "MainPlayerController.generated.h"



/**
 * 
 */
UCLASS()
class TETRIS_API AMainPlayerController : public APlayerController
{
	GENERATED_BODY()
	
protected:
	// Sets default values for this pawn's properties
	AMainPlayerController();

	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

	// Called every frame
	virtual void Tick(float DeltaTime) override;
};
