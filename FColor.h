#pragma once

#include "BaseDeclarations.h"
struct FColor
{
	char __padding[0x4L];

	// Functions

	FColor * WithAlpha(FColor * result, char Alpha) { return NativeCall<FColor *, FColor *, char>(this, "FColor.WithAlpha", result, Alpha); }
	FLinearColor * FromRGBE(FLinearColor * result) { return NativeCall<FLinearColor *, FLinearColor *>(this, "FColor.FromRGBE", result); }
	static FColor * MakeRedToGreenColorFromScalar(FColor * result, float Scalar) { return NativeCall<FColor *, FColor *, float>(nullptr, "FColor.MakeRedToGreenColorFromScalar", result, Scalar); }
	FString * ToString(FString * result) { return NativeCall<FString *, FString *>(this, "FColor.ToString", result); }
};

