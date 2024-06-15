#pragma once

#include "BaseDeclarations.h"
struct FTTTrackBase
{
	char __padding[0xcL];
	FName& TrackNameField() { return *GetNativePointerField<FName*>(this, "FTTTrackBase.TrackName"); }
	bool& bIsExternalCurveField() { return *GetNativePointerField<bool*>(this, "FTTTrackBase.bIsExternalCurve"); }

	// Functions

};

