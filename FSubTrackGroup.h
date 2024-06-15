#pragma once

#include "BaseDeclarations.h"
struct FSubTrackGroup
{
	char __padding[0x28L];
	FString& GroupNameField() { return *GetNativePointerField<FString*>(this, "FSubTrackGroup.GroupName"); }
	TArray<int>& TrackIndicesField() { return *GetNativePointerField<TArray<int>*>(this, "FSubTrackGroup.TrackIndices"); }

	// Functions

};

