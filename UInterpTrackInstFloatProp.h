#pragma once

#include "BaseDeclarations.h"
#include "UInterpTrackInstProperty.h"
#include "UInterpTrackInst.h"
#include "UObject.h"
#include "UObjectBaseUtility.h"
#include "UObjectBase.h"

struct UInterpTrackInstFloatProp : UInterpTrackInstProperty
{
	char __padding[0x10L];
	float * FloatPropField() { return GetNativePointerField<float *>(this, "UInterpTrackInstFloatProp.FloatProp"); }
	float& ResetFloatField() { return *GetNativePointerField<float*>(this, "UInterpTrackInstFloatProp.ResetFloat"); }

	// Functions

	void InitTrackInst(UInterpTrack * Track) { NativeCall<void, UInterpTrack *>(this, "UInterpTrackInstFloatProp.InitTrackInst", Track); }
};

