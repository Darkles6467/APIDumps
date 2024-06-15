#pragma once

#include "BaseDeclarations.h"
#include "HHitProxy.h"
#include "FRefCountedObject.h"

struct HInterpTrackKeyHandleProxy : HHitProxy
{
	char __padding[0x18L];
	int& TrackIndexField() { return *GetNativePointerField<int*>(this, "HInterpTrackKeyHandleProxy.TrackIndex"); }
	int& KeyIndexField() { return *GetNativePointerField<int*>(this, "HInterpTrackKeyHandleProxy.KeyIndex"); }
	bool& bArrivingField() { return *GetNativePointerField<bool*>(this, "HInterpTrackKeyHandleProxy.bArriving"); }
};

