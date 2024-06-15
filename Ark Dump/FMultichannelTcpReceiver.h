#pragma once

#include "BaseDeclarations.h"
#include "FRunnable.h"

struct FMultichannelTcpReceiver : FRunnable
{
	char __padding[0x20L];
	int& BytesReceivedField() { return *GetNativePointerField<int*>(this, "FMultichannelTcpReceiver.BytesReceived"); }
};

