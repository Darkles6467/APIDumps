#pragma once

#include "BaseDeclarations.h"
struct FRootMotionExtractionStep
{
	char __padding[0x10L];
	UAnimSequence * AnimSequenceField() { return GetNativePointerField<UAnimSequence *>(this, "FRootMotionExtractionStep.AnimSequence"); }
	float& StartPositionField() { return *GetNativePointerField<float*>(this, "FRootMotionExtractionStep.StartPosition"); }
	float& EndPositionField() { return *GetNativePointerField<float*>(this, "FRootMotionExtractionStep.EndPosition"); }

	// Functions

};

