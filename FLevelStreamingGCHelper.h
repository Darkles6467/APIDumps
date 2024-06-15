#pragma once

#include "BaseDeclarations.h"
struct FLevelStreamingGCHelper
{

	// Functions

	static void CancelUnloadRequest(ULevel * InLevel) { NativeCall<void, ULevel *>(nullptr, "FLevelStreamingGCHelper.CancelUnloadRequest", InLevel); }
	static void RequestUnload(ULevel * InLevel) { NativeCall<void, ULevel *>(nullptr, "FLevelStreamingGCHelper.RequestUnload", InLevel); }
};

