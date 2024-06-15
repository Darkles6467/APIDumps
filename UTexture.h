#pragma once

#include "BaseDeclarations.h"
#include "UObject.h"

struct UTexture : UObject
{
	char __padding[0x88L];
	FString& BulkDataFilePathField() { return *GetNativePointerField<FString*>(this, "UTexture.BulkDataFilePath"); }
	int& LODBiasField() { return *GetNativePointerField<int*>(this, "UTexture.LODBias"); }
	int& NumCinematicMipLevelsField() { return *GetNativePointerField<int*>(this, "UTexture.NumCinematicMipLevels"); }
	int& CachedCombinedLODBiasField() { return *GetNativePointerField<int*>(this, "UTexture.CachedCombinedLODBias"); }
	int& CachedStreamingLODBiasField() { return *GetNativePointerField<int*>(this, "UTexture.CachedStreamingLODBias"); }
	TEnumAsByte<enum TextureCompressionSettings>& CompressionSettingsField() { return *GetNativePointerField<TEnumAsByte<enum TextureCompressionSettings>*>(this, "UTexture.CompressionSettings"); }
	TEnumAsByte<enum TextureFilter>& FilterField() { return *GetNativePointerField<TEnumAsByte<enum TextureFilter>*>(this, "UTexture.Filter"); }
	TEnumAsByte<enum TextureGroup>& LODGroupField() { return *GetNativePointerField<TEnumAsByte<enum TextureGroup>*>(this, "UTexture.LODGroup"); }
	FTextureResource * ResourceField() { return GetNativePointerField<FTextureResource *>(this, "UTexture.Resource"); }
	FTextureReference& TextureReferenceField() { return *GetNativePointerField<FTextureReference*>(this, "UTexture.TextureReference"); }
	FRenderCommandFence& ReleaseFenceField() { return *GetNativePointerField<FRenderCommandFence*>(this, "UTexture.ReleaseFence"); }

	// Functions

	bool UseBulkDataPathOverride() { return NativeCall<bool>(this, "UTexture.UseBulkDataPathOverride"); }
	void BeginDestroy() { NativeCall<void>(this, "UTexture.BeginDestroy"); }
	void CleanupCachedCookedPlatformData() { NativeCall<void>(this, "UTexture.CleanupCachedCookedPlatformData"); }
	FTextureResource * CreateResource() { return NativeCall<FTextureResource *>(this, "UTexture.CreateResource"); }
	void FinishDestroy() { NativeCall<void>(this, "UTexture.FinishDestroy"); }
	int GetCachedLODBias() { return NativeCall<int>(this, "UTexture.GetCachedLODBias"); }
	EMaterialValueType GetMaterialType() { return NativeCall<EMaterialValueType>(this, "UTexture.GetMaterialType"); }
	static TextureMipGenSettings GetMipGenSettingsFromString(const wchar_t * InStr, bool bTextureGroup) { return NativeCall<TextureMipGenSettings, const wchar_t *, bool>(nullptr, "UTexture.GetMipGenSettingsFromString", InStr, bTextureGroup); }
	static const wchar_t * GetMipGenSettingsString(TextureMipGenSettings InEnum) { return NativeCall<const wchar_t *, TextureMipGenSettings>(nullptr, "UTexture.GetMipGenSettingsString", InEnum); }
	float GetSurfaceHeight() { return NativeCall<float>(this, "UTexture.GetSurfaceHeight"); }
	float GetSurfaceWidth() { return NativeCall<float>(this, "UTexture.GetSurfaceWidth"); }
	bool IsReadyForFinishDestroy() { return NativeCall<bool>(this, "UTexture.IsReadyForFinishDestroy"); }
	void Serialize(FArchive * Ar) { NativeCall<void, FArchive *>(this, "UTexture.Serialize", Ar); }
	void SerializeCookedPlatformData(FArchive * Ar) { NativeCall<void, FArchive *>(this, "UTexture.SerializeCookedPlatformData", Ar); }
	FString * GetPerfObjectBulkDataPath(FString * result) { return NativeCall<FString *, FString *>(this, "UTexture.GetPerfObjectBulkDataPath", result); }
};

