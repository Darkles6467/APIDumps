#pragma once

#include "BaseDeclarations.h"
struct FPlatformFileManager
{
	char __padding[0x8L];

	// Functions

	static FPlatformFileManager * Get() { return NativeCall<FPlatformFileManager *>(nullptr, "FPlatformFileManager.Get"); }
	void SetPlatformFile(IPlatformFile * NewTopmostPlatformFile) { NativeCall<void, IPlatformFile *>(this, "FPlatformFileManager.SetPlatformFile", NewTopmostPlatformFile); }
};

