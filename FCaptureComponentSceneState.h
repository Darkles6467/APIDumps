#pragma once

#include "BaseDeclarations.h"
struct FCaptureComponentSceneState
{
	char __padding[0x4L];
	int& CaptureIndexField() { return *GetNativePointerField<int*>(this, "FCaptureComponentSceneState.CaptureIndex"); }
};

