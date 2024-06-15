#pragma once

#include "BaseDeclarations.h"
struct FMovieScenePossessable
{
	char __padding[0x40L];
	FGuid& GuidField() { return *GetNativePointerField<FGuid*>(this, "FMovieScenePossessable.Guid"); }
	FText& NameField() { return *GetNativePointerField<FText*>(this, "FMovieScenePossessable.Name"); }

	// Functions

};

