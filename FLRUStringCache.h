#pragma once

#include "BaseDeclarations.h"
struct FLRUStringCache
{
	char __padding[0x68L];
	FLRUStringCache::CacheEntry * MostRecentField() { return GetNativePointerField<FLRUStringCache::CacheEntry *>(this, "FLRUStringCache.MostRecent"); }
	FLRUStringCache::CacheEntry * LeastRecentField() { return GetNativePointerField<FLRUStringCache::CacheEntry *>(this, "FLRUStringCache.LeastRecent"); }
	int& MaxNumElementsField() { return *GetNativePointerField<int*>(this, "FLRUStringCache.MaxNumElements"); }
};

