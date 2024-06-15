#pragma once

#include "BaseDeclarations.h"
struct FSuspendRenderingThread
{
	char __padding[0x3L];
	bool& bUseRenderingThreadField() { return *GetNativePointerField<bool*>(this, "FSuspendRenderingThread.bUseRenderingThread"); }
	bool& bWasRenderingThreadRunningField() { return *GetNativePointerField<bool*>(this, "FSuspendRenderingThread.bWasRenderingThreadRunning"); }
	bool& bRecreateThreadField() { return *GetNativePointerField<bool*>(this, "FSuspendRenderingThread.bRecreateThread"); }

	// Functions

};

