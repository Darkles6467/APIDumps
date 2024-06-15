#pragma once

#include "BaseDeclarations.h"
#include "FTTTrackBase.h"

struct FTTEventTrack : FTTTrackBase
{
	char __padding[0xcL];
	UCurveFloat * CurveKeysField() { return GetNativePointerField<UCurveFloat *>(this, "FTTEventTrack.CurveKeys"); }

	// Functions

};

