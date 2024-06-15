#pragma once

#include "BaseDeclarations.h"
#include "UTexture2D.h"
#include "UTexture.h"
#include "UObject.h"
#include "UObjectBaseUtility.h"
#include "UObjectBase.h"

struct ULightMapTexture2D : UTexture2D
{
	char __padding[0x8L];
	ELightMapFlags& LightmapFlagsField() { return *GetNativePointerField<ELightMapFlags*>(this, "ULightMapTexture2D.LightmapFlags"); }

	// Functions

	FString * GetDesc(FString * result) { return NativeCall<FString *, FString *>(this, "ULightMapTexture2D.GetDesc", result); }
	void Serialize(FArchive * Ar) { NativeCall<void, FArchive *>(this, "ULightMapTexture2D.Serialize", Ar); }
};

