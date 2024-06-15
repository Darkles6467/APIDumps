#pragma once

#include "BaseDeclarations.h"
#include "FTTTrackBase.h"

struct FTTLinearColorTrack : FTTTrackBase
{
	char __padding[0xcL];
	UCurveLinearColor * CurveLinearColorField() { return GetNativePointerField<UCurveLinearColor *>(this, "FTTLinearColorTrack.CurveLinearColor"); }

	// Functions

};

