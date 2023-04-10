#pragma once

#include "TopScore.generated.h"


USTRUCT(BlueprintType)
struct FTopScore
{
	GENERATED_BODY()

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category="Top Score")
	FString PlayerName = "";

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category="Top Score")
	int32 Score;

	//override the "<" operator so that this object can be sorted
	FORCEINLINE bool operator<(const FTopScore &Other) const
	{
		return Other.Score < Score;
	}
};
