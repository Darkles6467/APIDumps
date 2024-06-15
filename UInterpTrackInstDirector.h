#pragma once

#include "BaseDeclarations.h"
#include "UInterpTrackInst.h"
#include "UObject.h"
#include "UObjectBaseUtility.h"
#include "UObjectBase.h"

struct UInterpTrackInstDirector : UInterpTrackInst
{
	char __padding[0x8L];

	// Functions

	void TermTrackInst(UInterpTrack * Track) { NativeCall<void, UInterpTrack *>(this, "UInterpTrackInstDirector.TermTrackInst", Track); }
};

