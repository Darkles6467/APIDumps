#pragma once

#include "BaseDeclarations.h"
#include "UTexture.h"
#include "UObject.h"
#include "UObjectBaseUtility.h"
#include "UObjectBase.h"

struct UTextureCube : UTexture
{
	char __padding[0x58L];
	FTexturePlatformData * PlatformDataField() { return GetNativePointerField<FTexturePlatformData *>(this, "UTextureCube.PlatformData"); }

	// Functions

	unsigned int CalcTextureMemorySizeEnum(ETextureMipCount Enum) { return NativeCall<unsigned int, ETextureMipCount>(this, "UTextureCube.CalcTextureMemorySizeEnum", Enum); }
	FTextureResource * CreateResource() { return NativeCall<FTextureResource *>(this, "UTextureCube.CreateResource"); }
	void GetAssetRegistryTags(TArray<UObject::FAssetRegistryTag> * OutTags) { NativeCall<void, TArray<UObject::FAssetRegistryTag> *>(this, "UTextureCube.GetAssetRegistryTags", OutTags); }
	FString * GetDesc(FString * result) { return NativeCall<FString *, FString *>(this, "UTextureCube.GetDesc", result); }
	unsigned __int64 GetResourceSize(EResourceSizeMode::Type Mode) { return NativeCall<unsigned __int64, EResourceSizeMode::Type>(this, "UTextureCube.GetResourceSize", Mode); }
	float GetSurfaceHeight() { return NativeCall<float>(this, "UTextureCube.GetSurfaceHeight"); }
	float GetSurfaceWidth() { return NativeCall<float>(this, "UTextureCube.GetSurfaceWidth"); }
	void Serialize(FArchive * Ar) { NativeCall<void, FArchive *>(this, "UTextureCube.Serialize", Ar); }
	void UpdateResourceW() { NativeCall<void>(this, "UTextureCube.UpdateResourceW"); }
};

