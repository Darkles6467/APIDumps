#pragma once

#include "BaseDeclarations.h"
struct FDynamicSkyBoxCallback
{
	char __padding[0x20L];
	FStringAssetReference& RequestField() { return *GetNativePointerField<FStringAssetReference*>(this, "FDynamicSkyBoxCallback.Request"); }
	int& IndexField() { return *GetNativePointerField<int*>(this, "FDynamicSkyBoxCallback.Index"); }
	int& ResourceIndexField() { return *GetNativePointerField<int*>(this, "FDynamicSkyBoxCallback.ResourceIndex"); }
	TWeakObjectPtr<ASkyBoxLoader>& ManagerField() { return *GetNativePointerField<TWeakObjectPtr<ASkyBoxLoader>*>(this, "FDynamicSkyBoxCallback.Manager"); }
};

