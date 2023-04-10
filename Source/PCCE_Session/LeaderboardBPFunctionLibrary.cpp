// Fill out your copyright notice in the Description page of Project Settings.


#include "LeaderboardBPFunctionLibrary.h"

void ULeaderboardBPFunctionLibrary::SortTopScores(TArray<FTopScore>& InTopScores)
{
	if (InTopScores.Num() > 1)
	{
		InTopScores.Sort();
	}
}