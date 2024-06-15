#pragma once

#include "BaseDeclarations.h"
struct FNetGuidCacheObject
{
	char __padding[0x30L];
	FNetworkGUID& OuterGUIDField() { return *GetNativePointerField<FNetworkGUID*>(this, "FNetGuidCacheObject.OuterGUID"); }
	FName& PathNameField() { return *GetNativePointerField<FName*>(this, "FNetGuidCacheObject.PathName"); }
	int& GuidSequenceField() { return *GetNativePointerField<int*>(this, "FNetGuidCacheObject.GuidSequence"); }
	FGuid& PackageGuidField() { return *GetNativePointerField<FGuid*>(this, "FNetGuidCacheObject.PackageGuid"); }
	float& InitialQueryTimeField() { return *GetNativePointerField<float*>(this, "FNetGuidCacheObject.InitialQueryTime"); }
};

