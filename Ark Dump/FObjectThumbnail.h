#pragma once

#include "BaseDeclarations.h"
struct FObjectThumbnail
{
	char __padding[0x30L];
	int& ImageWidthField() { return *GetNativePointerField<int*>(this, "FObjectThumbnail.ImageWidth"); }
	int& ImageHeightField() { return *GetNativePointerField<int*>(this, "FObjectThumbnail.ImageHeight"); }
	TArray<unsigned char>& CompressedImageDataField() { return *GetNativePointerField<TArray<unsigned char>*>(this, "FObjectThumbnail.CompressedImageData"); }
	TArray<unsigned char>& ImageDataField() { return *GetNativePointerField<TArray<unsigned char>*>(this, "FObjectThumbnail.ImageData"); }
	bool& bIsDirtyField() { return *GetNativePointerField<bool*>(this, "FObjectThumbnail.bIsDirty"); }
	bool& bLoadedFromDiskField() { return *GetNativePointerField<bool*>(this, "FObjectThumbnail.bLoadedFromDisk"); }
	bool& bCreatedAfterCustomThumbForSharedTypesEnabledField() { return *GetNativePointerField<bool*>(this, "FObjectThumbnail.bCreatedAfterCustomThumbForSharedTypesEnabled"); }
};

