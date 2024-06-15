#pragma once

#include "BaseDeclarations.h"
struct FForceFeedbackChannelDetails
{
	char __padding[0x78L];
	FRuntimeFloatCurve& CurveField() { return *GetNativePointerField<FRuntimeFloatCurve*>(this, "FForceFeedbackChannelDetails.Curve"); }

	// Functions

};

