#pragma once

#include "BaseDeclarations.h"
#include "FDeferredCleanupInterface.h"

struct FLightMap : FDeferredCleanupInterface
{
	char __padding[0x18L];
	TArray<FGuid>& LightGuidsField() { return *GetNativePointerField<TArray<FGuid>*>(this, "FLightMap.LightGuids"); }
	bool& bAllowHighQualityLightMapsField() { return *GetNativePointerField<bool*>(this, "FLightMap.bAllowHighQualityLightMaps"); }
	int& NumRefsField() { return *GetNativePointerField<int*>(this, "FLightMap.NumRefs"); }

	// Functions

	void Cleanup() { NativeCall<void>(this, "FLightMap.Cleanup"); }
	void Serialize(FArchive * Ar) { NativeCall<void, FArchive *>(this, "FLightMap.Serialize", Ar); }
};

