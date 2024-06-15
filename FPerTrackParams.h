#pragma once

#include "BaseDeclarations.h"
struct FPerTrackParams
{
	char __padding[0x18L];
	float& MaxZeroingThresholdField() { return *GetNativePointerField<float*>(this, "FPerTrackParams.MaxZeroingThreshold"); }
	const UAnimSequence * AnimSeqField() { return GetNativePointerField<const UAnimSequence *>(this, "FPerTrackParams.AnimSeq"); }
	bool& bIncludeKeyTableField() { return *GetNativePointerField<bool*>(this, "FPerTrackParams.bIncludeKeyTable"); }
};

