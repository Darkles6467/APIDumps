#pragma once

#include "BaseDeclarations.h"
#include "UObject.h"
#include "UObjectBaseUtility.h"
#include "UObjectBase.h"

struct UReflectionCaptureData : UObject
{
	char __padding[0x58L];
	FString& ComponentNameField() { return *GetNativePointerField<FString*>(this, "UReflectionCaptureData.ComponentName"); }
	FByteBulkData& UnCompressedHDRDataField() { return *GetNativePointerField<FByteBulkData*>(this, "UReflectionCaptureData.UnCompressedHDRData"); }

	// Functions

	void PreSave() { NativeCall<void>(this, "UReflectionCaptureData.PreSave"); }
	void Serialize(FArchive * Ar) { NativeCall<void, FArchive *>(this, "UReflectionCaptureData.Serialize", Ar); }
};

