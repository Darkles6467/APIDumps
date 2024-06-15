#pragma once

#include "BaseDeclarations.h"
#include "FRunnable.h"

struct FMultichannelTcpSender : FRunnable
{
	char __padding[0xa0L];
	int& BytesSentField() { return *GetNativePointerField<int*>(this, "FMultichannelTcpSender.BytesSent"); }
	FScopedEvent * EventToRestartField() { return GetNativePointerField<FScopedEvent *>(this, "FMultichannelTcpSender.EventToRestart"); }
	FWindowsCriticalSection& SendBuffersCriticalSectionField() { return *GetNativePointerField<FWindowsCriticalSection*>(this, "FMultichannelTcpSender.SendBuffersCriticalSection"); }
};

