#pragma once

#include "BaseDeclarations.h"
struct ConnectionCallbackProxy_eventOnlineConnectionResult_Parms
{
	char __padding[0x4L];
	int& ErrorCodeField() { return *GetNativePointerField<int*>(this, "ConnectionCallbackProxy_eventOnlineConnectionResult_Parms.ErrorCode"); }
};

