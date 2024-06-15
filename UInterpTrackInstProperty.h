#pragma once

#include "BaseDeclarations.h"
#include "UInterpTrackInst.h"

struct UInterpTrackInstProperty : UInterpTrackInst
{
	char __padding[0x10L];

	// Functions

	void TermTrackInst(UInterpTrack * Track) { NativeCall<void, UInterpTrack *>(this, "UInterpTrackInstProperty.TermTrackInst", Track); }
};

