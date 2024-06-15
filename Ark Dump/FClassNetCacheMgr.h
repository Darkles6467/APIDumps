#pragma once

#include "BaseDeclarations.h"
struct FClassNetCacheMgr
{
	char __padding[0x50L];

	// Functions

	void ClearClassNetCache() { NativeCall<void>(this, "FClassNetCacheMgr.ClearClassNetCache"); }
	FClassNetCache * GetClassNetCache(UClass * Class) { return NativeCall<FClassNetCache *, UClass *>(this, "FClassNetCacheMgr.GetClassNetCache", Class); }
};

