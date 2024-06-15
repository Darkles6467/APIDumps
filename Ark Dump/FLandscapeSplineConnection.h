#pragma once

#include "BaseDeclarations.h"
struct FLandscapeSplineConnection
{
	char __padding[0x10L];
	ULandscapeSplineSegment * SegmentField() { return GetNativePointerField<ULandscapeSplineSegment *>(this, "FLandscapeSplineConnection.Segment"); }

	// Functions

};

