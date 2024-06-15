#pragma once

#include "BaseDeclarations.h"
struct FMovieSceneObjectBinding
{
	char __padding[0x48L];
	FGuid& ObjectGuidField() { return *GetNativePointerField<FGuid*>(this, "FMovieSceneObjectBinding.ObjectGuid"); }
	FText& BindingNameField() { return *GetNativePointerField<FText*>(this, "FMovieSceneObjectBinding.BindingName"); }

	// Functions

	TRange<float> * GetTimeRange(TRange<float> * result) { return NativeCall<TRange<float> *, TRange<float> *>(this, "FMovieSceneObjectBinding.GetTimeRange", result); }
};

