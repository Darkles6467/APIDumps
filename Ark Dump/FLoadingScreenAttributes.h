#pragma once

#include "BaseDeclarations.h"
struct FLoadingScreenAttributes
{
	char __padding[0x28L];
	TArray<FString>& MoviePathsField() { return *GetNativePointerField<TArray<FString>*>(this, "FLoadingScreenAttributes.MoviePaths"); }
	float& MinimumLoadingScreenDisplayTimeField() { return *GetNativePointerField<float*>(this, "FLoadingScreenAttributes.MinimumLoadingScreenDisplayTime"); }
	bool& bAutoCompleteWhenLoadingCompletesField() { return *GetNativePointerField<bool*>(this, "FLoadingScreenAttributes.bAutoCompleteWhenLoadingCompletes"); }
	bool& bMoviesAreSkippableField() { return *GetNativePointerField<bool*>(this, "FLoadingScreenAttributes.bMoviesAreSkippable"); }
};

