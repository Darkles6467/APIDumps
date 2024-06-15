#pragma once

#include "BaseDeclarations.h"
#include "HLandscapeSplineProxy.h"
#include "HHitProxy.h"
#include "FRefCountedObject.h"

struct HLandscapeSplineProxy_Tangent : HLandscapeSplineProxy
{
	char __padding[0x10L];
	ULandscapeSplineSegment * SplineSegmentField() { return GetNativePointerField<ULandscapeSplineSegment *>(this, "HLandscapeSplineProxy_Tangent.SplineSegment"); }
};

