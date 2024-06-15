#pragma once

#include "BaseDeclarations.h"
#include "HLandscapeSplineProxy.h"
#include "HHitProxy.h"
#include "FRefCountedObject.h"

struct HLandscapeSplineProxy_Segment : HLandscapeSplineProxy
{
	char __padding[0x8L];
	ULandscapeSplineSegment * SplineSegmentField() { return GetNativePointerField<ULandscapeSplineSegment *>(this, "HLandscapeSplineProxy_Segment.SplineSegment"); }
};

