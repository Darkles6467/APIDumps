#pragma once

#include "BaseDeclarations.h"
#include "UTexture.h"

struct UTexture2D : UTexture
{
	char __padding[0xb0L];
	int& RequestedMipsField() { return *GetNativePointerField<int*>(this, "UTexture2D.RequestedMips"); }
	int& ResidentMipsField() { return *GetNativePointerField<int*>(this, "UTexture2D.ResidentMips"); }
	int& StreamingIndexField() { return *GetNativePointerField<int*>(this, "UTexture2D.StreamingIndex"); }
	int& FirstResourceMemMipField() { return *GetNativePointerField<int*>(this, "UTexture2D.FirstResourceMemMip"); }
	float& TimerField() { return *GetNativePointerField<float*>(this, "UTexture2D.Timer"); }
	int& SizeX_DEPRECATEDField() { return *GetNativePointerField<int*>(this, "UTexture2D.SizeX_DEPRECATED"); }
	int& SizeY_DEPRECATEDField() { return *GetNativePointerField<int*>(this, "UTexture2D.SizeY_DEPRECATED"); }
	int& OriginalSizeX_DEPRECATEDField() { return *GetNativePointerField<int*>(this, "UTexture2D.OriginalSizeX_DEPRECATED"); }
	int& OriginalSizeY_DEPRECATEDField() { return *GetNativePointerField<int*>(this, "UTexture2D.OriginalSizeY_DEPRECATED"); }
	FIntPoint& ImportedSizeField() { return *GetNativePointerField<FIntPoint*>(this, "UTexture2D.ImportedSize"); }
	float& ForceMipLevelsToBeResidentTimestampField() { return *GetNativePointerField<float*>(this, "UTexture2D.ForceMipLevelsToBeResidentTimestamp"); }
	TEnumAsByte<enum EPixelFormat>& Format_DEPRECATEDField() { return *GetNativePointerField<TEnumAsByte<enum EPixelFormat>*>(this, "UTexture2D.Format_DEPRECATED"); }
	TEnumAsByte<enum TextureAddress>& AddressXField() { return *GetNativePointerField<TEnumAsByte<enum TextureAddress>*>(this, "UTexture2D.AddressX"); }
	TEnumAsByte<enum TextureAddress>& AddressYField() { return *GetNativePointerField<TEnumAsByte<enum TextureAddress>*>(this, "UTexture2D.AddressY"); }
	FGuid& TextureFileCacheGuid_DEPRECATEDField() { return *GetNativePointerField<FGuid*>(this, "UTexture2D.TextureFileCacheGuid_DEPRECATED"); }
	FTexturePlatformData * PlatformDataField() { return GetNativePointerField<FTexturePlatformData *>(this, "UTexture2D.PlatformData"); }
	FThreadSafeCounter& PendingMipChangeRequestStatusField() { return *GetNativePointerField<FThreadSafeCounter*>(this, "UTexture2D.PendingMipChangeRequestStatus"); }
	FTexture2DResourceMem * ResourceMemField() { return GetNativePointerField<FTexture2DResourceMem *>(this, "UTexture2D.ResourceMem"); }

	// Functions

	float GetSurfaceHeight() { return NativeCall<float>(this, "UTexture2D.GetSurfaceHeight"); }
	float GetSurfaceWidth() { return NativeCall<float>(this, "UTexture2D.GetSurfaceWidth"); }
	void BeginDestroy() { NativeCall<void>(this, "UTexture2D.BeginDestroy"); }
	int Blueprint_GetSizeX() { return NativeCall<int>(this, "UTexture2D.Blueprint_GetSizeX"); }
	int Blueprint_GetSizeY() { return NativeCall<int>(this, "UTexture2D.Blueprint_GetSizeY"); }
	int CalcTextureMemorySize(int MipCount) { return NativeCall<int, int>(this, "UTexture2D.CalcTextureMemorySize", MipCount); }
	unsigned int CalcTextureMemorySizeEnum(ETextureMipCount Enum) { return NativeCall<unsigned int, ETextureMipCount>(this, "UTexture2D.CalcTextureMemorySizeEnum", Enum); }
	FTextureResource * CreateResource() { return NativeCall<FTextureResource *>(this, "UTexture2D.CreateResource"); }
	void GetAssetRegistryTags(TArray<UObject::FAssetRegistryTag> * OutTags) { NativeCall<void, TArray<UObject::FAssetRegistryTag> *>(this, "UTexture2D.GetAssetRegistryTags", OutTags); }
	FString * GetDesc(FString * result) { return NativeCall<FString *, FString *>(this, "UTexture2D.GetDesc", result); }
	void GetMipData(int FirstMipToLoad, void ** OutMipData) { NativeCall<void, int, void **>(this, "UTexture2D.GetMipData", FirstMipToLoad, OutMipData); }
	int GetNumNonStreamingMips() { return NativeCall<int>(this, "UTexture2D.GetNumNonStreamingMips"); }
	unsigned __int64 GetResourceSize(EResourceSizeMode::Type Mode) { return NativeCall<unsigned __int64, EResourceSizeMode::Type>(this, "UTexture2D.GetResourceSize", Mode); }
	void PostLoad() { NativeCall<void>(this, "UTexture2D.PostLoad"); }
	void PreSave() { NativeCall<void>(this, "UTexture2D.PreSave"); }
	void Serialize(FArchive * Ar) { NativeCall<void, FArchive *>(this, "UTexture2D.Serialize", Ar); }
	void SetForceMipLevelsToBeResident(float Seconds, int CinematicTextureGroups) { NativeCall<void, float, int>(this, "UTexture2D.SetForceMipLevelsToBeResident", Seconds, CinematicTextureGroups); }
	void UpdateResourceW() { NativeCall<void>(this, "UTexture2D.UpdateResourceW"); }
	bool UpdateStreamingStatus(bool bWaitForMipFading) { return NativeCall<bool, bool>(this, "UTexture2D.UpdateStreamingStatus", bWaitForMipFading); }
	void WaitForStreaming() { NativeCall<void>(this, "UTexture2D.WaitForStreaming"); }
};

