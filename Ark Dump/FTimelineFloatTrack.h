#pragma once

#include "BaseDeclarations.h"
struct FTimelineFloatTrack
{
	char __padding[0x30L];
	UCurveFloat * FloatCurveField() { return GetNativePointerField<UCurveFloat *>(this, "FTimelineFloatTrack.FloatCurve"); }
	FName& FloatPropertyNameField() { return *GetNativePointerField<FName*>(this, "FTimelineFloatTrack.FloatPropertyName"); }

	// Functions

};

