#pragma once

#include "BaseDeclarations.h"
#include "UObject.h"

struct UPlatformInterfaceBase : UObject
{
	char __padding[0x10L];

	// Functions

	static UInGameAdManager * GetInGameAdManagerSingleton() { return NativeCall<UInGameAdManager *>(nullptr, "UPlatformInterfaceBase.GetInGameAdManagerSingleton"); }
	static bool StaticExec(const wchar_t * Cmd, FOutputDevice * Ar) { return NativeCall<bool, const wchar_t *, FOutputDevice *>(nullptr, "UPlatformInterfaceBase.StaticExec", Cmd, Ar); }
};

