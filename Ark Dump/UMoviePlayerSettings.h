#pragma once

#include "BaseDeclarations.h"
#include "UObject.h"
#include "UObjectBaseUtility.h"
#include "UObjectBase.h"

struct UMoviePlayerSettings : UObject
{
	char __padding[0x18L];
	bool& bWaitForMoviesToCompleteField() { return *GetNativePointerField<bool*>(this, "UMoviePlayerSettings.bWaitForMoviesToComplete"); }
	bool& bMoviesAreSkippableField() { return *GetNativePointerField<bool*>(this, "UMoviePlayerSettings.bMoviesAreSkippable"); }
	TArray<FString>& StartupMoviesField() { return *GetNativePointerField<TArray<FString>*>(this, "UMoviePlayerSettings.StartupMovies"); }

	// Functions

};

