#pragma once

#include "BaseDeclarations.h"
#include "HLandscapeSplineProxy.h"
#include "HHitProxy.h"
#include "FRefCountedObject.h"

struct HLandscapeSplineProxy_ControlPoint : HLandscapeSplineProxy
{
	char __padding[0x8L];
	ULandscapeSplineControlPoint * ControlPointField() { return GetNativePointerField<ULandscapeSplineControlPoint *>(this, "HLandscapeSplineProxy_ControlPoint.ControlPoint"); }
};

