#pragma once

#include "BaseDeclarations.h"
#include "UObject.h"
#include "UObjectBaseUtility.h"
#include "UObjectBase.h"

struct USkyLightData : UObject
{
	char __padding[0xa0L];
	FString& ComponentNameField() { return *GetNativePointerField<FString*>(this, "USkyLightData.ComponentName"); }
	FByteBulkData& UnCompressedSkyDataField() { return *GetNativePointerField<FByteBulkData*>(this, "USkyLightData.UnCompressedSkyData"); }
	FByteBulkData& SkySHDataField() { return *GetNativePointerField<FByteBulkData*>(this, "USkyLightData.SkySHData"); }

	// Functions

	void PreSave() { NativeCall<void>(this, "USkyLightData.PreSave"); }
	void Serialize(FArchive * Ar) { NativeCall<void, FArchive *>(this, "USkyLightData.Serialize", Ar); }
};

