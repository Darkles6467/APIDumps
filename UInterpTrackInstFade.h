#pragma once

#include "BaseDeclarations.h"
#include "UInterpTrackInst.h"
#include "UObject.h"
#include "UObjectBaseUtility.h"
#include "UObjectBase.h"

struct UInterpTrackInstFade : UInterpTrackInst
{

	// Functions

	void TermTrackInst(UInterpTrack * Track) { NativeCall<void, UInterpTrack *>(this, "UInterpTrackInstFade.TermTrackInst", Track); }
};

