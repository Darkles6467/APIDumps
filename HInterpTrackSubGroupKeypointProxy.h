#pragma once

#include "BaseDeclarations.h"
#include "HHitProxy.h"
#include "FRefCountedObject.h"

struct HInterpTrackSubGroupKeypointProxy : HHitProxy
{
	char __padding[0x10L];
	float& KeyTimeField() { return *GetNativePointerField<float*>(this, "HInterpTrackSubGroupKeypointProxy.KeyTime"); }
	int& GroupIndexField() { return *GetNativePointerField<int*>(this, "HInterpTrackSubGroupKeypointProxy.GroupIndex"); }
};

