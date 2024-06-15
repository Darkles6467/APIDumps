#pragma once

#include "BaseDeclarations.h"
#include "FTTTrackBase.h"

struct FTTFloatTrack : FTTTrackBase
{
	char __padding[0xcL];
	UCurveFloat * CurveFloatField() { return GetNativePointerField<UCurveFloat *>(this, "FTTFloatTrack.CurveFloat"); }

	// Functions

};

