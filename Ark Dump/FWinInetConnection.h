#pragma once

#include "BaseDeclarations.h"
struct FWinInetConnection
{
	char __padding[0x10L];
	void * InternetHandleField() { return GetNativePointerField<void *>(this, "FWinInetConnection.InternetHandle"); }

	// Functions

	static FWinInetConnection * Get() { return NativeCall<FWinInetConnection *>(nullptr, "FWinInetConnection.Get"); }
	bool InitConnection() { return NativeCall<bool>(this, "FWinInetConnection.InitConnection"); }
	bool ShutdownConnection() { return NativeCall<bool>(this, "FWinInetConnection.ShutdownConnection"); }
};

