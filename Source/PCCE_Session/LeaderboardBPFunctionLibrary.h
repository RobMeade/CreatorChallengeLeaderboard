// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Kismet/BlueprintFunctionLibrary.h"

#include "Types/TopScore.h"

#include "LeaderboardBPFunctionLibrary.generated.h"


UCLASS()
class PCCE_SESSION_API ULeaderboardBPFunctionLibrary : public UBlueprintFunctionLibrary
{
	GENERATED_BODY()


public:
	//UFUNCTION(BlueprintPure, meta = (DisplayName = "SortTopScores"), Category = "Leaderboard")
	//static void SortTopScores(UPARAM(ref) TArray<FTopScore>& InTopScores, TArray<FTopScore>& OutTopScores);

	UFUNCTION(BlueprintPure = false, meta = (DisplayName = "SortTopScores"), Category = "Leaderboard")
	static void SortTopScores(UPARAM(ref) TArray<FTopScore>& InTopScores);
};
