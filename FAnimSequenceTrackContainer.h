#pragma once

#include "BaseDeclarations.h"
struct FAnimSequenceTrackContainer
{
	char __padding[0x20L];
	TArray<FRawAnimSequenceTrack>& AnimationTracksField() { return *GetNativePointerField<TArray<FRawAnimSequenceTrack>*>(this, "FAnimSequenceTrackContainer.AnimationTracks"); }
	TArray<FName>& TrackNamesField() { return *GetNativePointerField<TArray<FName>*>(this, "FAnimSequenceTrackContainer.TrackNames"); }

	// Functions

};

