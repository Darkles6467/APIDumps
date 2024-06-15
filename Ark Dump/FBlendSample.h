#pragma once

#include "BaseDeclarations.h"
struct FBlendSample
{
	char __padding[0x18L];
	UAnimSequence * AnimationField() { return GetNativePointerField<UAnimSequence *>(this, "FBlendSample.Animation"); }
	FVector& SampleValueField() { return *GetNativePointerField<FVector*>(this, "FBlendSample.SampleValue"); }
	bool& bIsValidField() { return *GetNativePointerField<bool*>(this, "FBlendSample.bIsValid"); }

	// Functions

};

