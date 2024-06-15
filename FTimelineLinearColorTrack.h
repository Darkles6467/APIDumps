#pragma once

#include "BaseDeclarations.h"
struct FTimelineLinearColorTrack
{
	char __padding[0x30L];
	UCurveLinearColor * LinearColorCurveField() { return GetNativePointerField<UCurveLinearColor *>(this, "FTimelineLinearColorTrack.LinearColorCurve"); }
	FName& LinearColorPropertyNameField() { return *GetNativePointerField<FName*>(this, "FTimelineLinearColorTrack.LinearColorPropertyName"); }

	// Functions

};

