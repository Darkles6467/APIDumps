#pragma once

#include "BaseDeclarations.h"
struct FObjectFullNameAndThumbnail
{
	char __padding[0x18L];
	FName& ObjectFullNameField() { return *GetNativePointerField<FName*>(this, "FObjectFullNameAndThumbnail.ObjectFullName"); }
	const FObjectThumbnail * ObjectThumbnailField() { return GetNativePointerField<const FObjectThumbnail *>(this, "FObjectFullNameAndThumbnail.ObjectThumbnail"); }
	int& FileOffsetField() { return *GetNativePointerField<int*>(this, "FObjectFullNameAndThumbnail.FileOffset"); }
};

