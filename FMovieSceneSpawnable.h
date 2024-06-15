#pragma once

#include "BaseDeclarations.h"
struct FMovieSceneSpawnable
{
	char __padding[0x48L];
	FGuid& GuidField() { return *GetNativePointerField<FGuid*>(this, "FMovieSceneSpawnable.Guid"); }
	FText& NameField() { return *GetNativePointerField<FText*>(this, "FMovieSceneSpawnable.Name"); }
	FWeakObjectPtr& CounterpartGamePreviewObjectField() { return *GetNativePointerField<FWeakObjectPtr*>(this, "FMovieSceneSpawnable.CounterpartGamePreviewObject"); }

	// Functions

};

