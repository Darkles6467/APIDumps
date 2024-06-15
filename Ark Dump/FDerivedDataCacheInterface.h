#pragma once

#include "BaseDeclarations.h"
struct FDerivedDataCacheInterface
{
	char __padding[0x8L];

	// Functions

	static FString * BuildCacheKey(FString * result, const wchar_t * PluginName, const wchar_t * VersionString, const wchar_t * PluginSpecificCacheKeySuffix) { return NativeCall<FString *, FString *, const wchar_t *, const wchar_t *, const wchar_t *>(nullptr, "FDerivedDataCacheInterface.BuildCacheKey", result, PluginName, VersionString, PluginSpecificCacheKeySuffix); }
	static FString * SanitizeCacheKey(FString * result, const wchar_t * CacheKey) { return NativeCall<FString *, FString *, const wchar_t *>(nullptr, "FDerivedDataCacheInterface.SanitizeCacheKey", result, CacheKey); }
};

