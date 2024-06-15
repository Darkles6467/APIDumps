#pragma once

#include "BaseDeclarations.h"
#include "FArchiveUObject.h"
#include "FArchive.h"

struct FArchiveSaveTagImports : FArchiveUObject
{
	char __padding[0x20L];
	TArray<FString> * StringAssetReferencesMapField() { return GetNativePointerField<TArray<FString> *>(this, "FArchiveSaveTagImports.StringAssetReferencesMap"); }
};

