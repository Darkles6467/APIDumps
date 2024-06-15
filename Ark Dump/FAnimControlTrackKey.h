#pragma once

#include "BaseDeclarations.h"
struct FAnimControlTrackKey
{
	char __padding[0x20L];
	float& StartTimeField() { return *GetNativePointerField<float*>(this, "FAnimControlTrackKey.StartTime"); }
	UAnimSequence * AnimSeqField() { return GetNativePointerField<UAnimSequence *>(this, "FAnimControlTrackKey.AnimSeq"); }
	float& AnimStartOffsetField() { return *GetNativePointerField<float*>(this, "FAnimControlTrackKey.AnimStartOffset"); }
	float& AnimEndOffsetField() { return *GetNativePointerField<float*>(this, "FAnimControlTrackKey.AnimEndOffset"); }
	float& AnimPlayRateField() { return *GetNativePointerField<float*>(this, "FAnimControlTrackKey.AnimPlayRate"); }

	// Functions

};

