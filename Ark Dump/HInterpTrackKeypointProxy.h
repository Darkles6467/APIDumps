#pragma once

#include "BaseDeclarations.h"
#include "HHitProxy.h"
#include "FRefCountedObject.h"

struct HInterpTrackKeypointProxy : HHitProxy
{
	char __padding[0x18L];
	int& KeyIndexField() { return *GetNativePointerField<int*>(this, "HInterpTrackKeypointProxy.KeyIndex"); }
};

