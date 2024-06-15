#pragma once

#include "BaseDeclarations.h"
struct FMovieSceneBoundObject
{
	char __padding[0x20L];
	FGuid& PossessableGuidField() { return *GetNativePointerField<FGuid*>(this, "FMovieSceneBoundObject.PossessableGuid"); }

	// Functions

};

