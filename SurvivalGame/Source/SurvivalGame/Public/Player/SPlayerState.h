// Copyright 1998-2015 Epic Games, Inc. All Rights Reserved.

#pragma once

#include "GameFramework/PlayerState.h"
#include "SPlayerState.generated.h"

/**
 * 
 */
UCLASS()
class SURVIVALGAME_API ASPlayerState : public APlayerState
{
	GENERATED_BODY()

	ASPlayerState(const FObjectInitializer& ObjectInitializer);

	/* Number of kills */
	UPROPERTY(Transient, Replicated)
	int32 NumKills;
	
	/* Number of deaths */
	UPROPERTY(Transient, Replicated)
	int32 NumDeaths;

	/* Team number assigned to player */
	UPROPERTY(Transient, Replicated)
	int32 TeamNumber;

	virtual void Reset() override;

public: 
	/* Add Kill */
	void AddKill();

	/* Add Death */
	void AddDeath();

	void ScorePoints(int32 Points);
	
	/* Set team number */
	void SetTeamNumber(int32 NewTeamNumber);
	
	/* Get number of teams */
	UFUNCTION(BlueprintCallable, Category = "Teams")
	int32 GetTeamNumber() const;
	
	/* Get number of kills */
	UFUNCTION(BlueprintCallable, Category = "Score")
	int32 GetKills() const;

	/* Get number of deaths */
	UFUNCTION(BlueprintCallable, Category = "Score")
	int32 GetDeaths() const;

	/* Get score */
	UFUNCTION(BlueprintCallable, Category = "Score")
	float GetScore() const;
	
};
