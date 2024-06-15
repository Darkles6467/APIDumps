#pragma once

#include "BaseDeclarations.h"
struct BoneTrackPair
{
	char __padding[0x8L];
	int& AtomIndexField() { return *GetNativePointerField<int*>(this, "BoneTrackPair.AtomIndex"); }
	int& TrackIndexField() { return *GetNativePointerField<int*>(this, "BoneTrackPair.TrackIndex"); }
};

