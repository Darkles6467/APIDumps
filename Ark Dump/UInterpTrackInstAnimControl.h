#pragma once

#include "BaseDeclarations.h"
#include "UInterpTrackInst.h"
#include "UObject.h"
#include "UObjectBaseUtility.h"
#include "UObjectBase.h"

struct UInterpTrackInstAnimControl : UInterpTrackInst
{
	char __padding[0x8L];
	float& LastUpdatePositionField() { return *GetNativePointerField<float*>(this, "UInterpTrackInstAnimControl.LastUpdatePosition"); }

	// Functions

	void InitTrackInst(UInterpTrack * Track) { NativeCall<void, UInterpTrack *>(this, "UInterpTrackInstAnimControl.InitTrackInst", Track); }
};

