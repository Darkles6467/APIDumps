#pragma once

#include "BaseDeclarations.h"
#include "UInterpTrackInst.h"
#include "UObject.h"
#include "UObjectBaseUtility.h"
#include "UObjectBase.h"

struct UInterpTrackInstColorScale : UInterpTrackInst
{

	// Functions

	void TermTrackInst(UInterpTrack * Track) { NativeCall<void, UInterpTrack *>(this, "UInterpTrackInstColorScale.TermTrackInst", Track); }
};

