// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "AIController.h"
#include "TankAIController.generated.h"

//Forward Declarations.
class ATank;

UCLASS()
class BATTLETANK_API ATankAIController : public AAIController
{
	GENERATED_BODY()


private:
	virtual void BeginPlay() override;

	virtual void Tick(float DeltaSeconds) override;

	//how close can the AI Tank get to the player.
	UPROPERTY(EditDefaultsOnly, Category = Setup)
	float AcceptanceRadius = 0;

};
