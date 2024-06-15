#pragma once

#include "BaseDeclarations.h"
struct FMovieSceneEditorData
{
	char __padding[0x10L];
	TArray<FString>& CollapsedSequencerNodesField() { return *GetNativePointerField<TArray<FString>*>(this, "FMovieSceneEditorData.CollapsedSequencerNodes"); }

	// Functions

};

