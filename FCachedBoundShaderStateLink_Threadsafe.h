#pragma once

#include "BaseDeclarations.h"
struct FCachedBoundShaderStateLink
{
	char __padding[0x40L];
	FBoundShaderStateKey& KeyField() { return *GetNativePointerField<FBoundShaderStateKey*>(this, "FCachedBoundShaderStateLink.Key"); }
	bool& bAddedToSingleThreadedCacheField() { return *GetNativePointerField<bool*>(this, "FCachedBoundShaderStateLink.bAddedToSingleThreadedCache"); }

	// Functions

};

struct FCachedBoundShaderStateLink_Threadsafe : FCachedBoundShaderStateLink
{

	// Functions

	void AddToCache() { NativeCall<void>(this, "FCachedBoundShaderStateLink_Threadsafe.AddToCache"); }
	void RemoveFromCache() { NativeCall<void>(this, "FCachedBoundShaderStateLink_Threadsafe.RemoveFromCache"); }
};

