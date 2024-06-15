#pragma once

#include "BaseDeclarations.h"
struct ShooterPlayerController_eventServerSetItemBalloonLocation_Parms
{
	char __padding[0x30L];
	FPrimalMapMarkerEntryData& MapMarkerField() { return *GetNativePointerField<FPrimalMapMarkerEntryData*>(this, "ShooterPlayerController_eventServerSetItemBalloonLocation_Parms.MapMarker"); }
};

