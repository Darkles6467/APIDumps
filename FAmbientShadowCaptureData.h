#pragma once

#include "BaseDeclarations.h"
struct FAmbientShadowCaptureData
{
	char __padding[0x58L];
	int& SizeXField() { return *GetNativePointerField<int*>(this, "FAmbientShadowCaptureData.SizeX"); }
	int& SizeYField() { return *GetNativePointerField<int*>(this, "FAmbientShadowCaptureData.SizeY"); }
	FByteBulkData& BulkDataField() { return *GetNativePointerField<FByteBulkData*>(this, "FAmbientShadowCaptureData.BulkData"); }

	// Functions

	void Serialize(FArchive * Ar, UObject * Owner) { NativeCall<void, FArchive *, UObject *>(this, "FAmbientShadowCaptureData.Serialize", Ar, Owner); }
};

