#pragma once

#include "BaseDeclarations.h"
struct FArchiveEntry
{
	char __padding[0x68L];
	const FString& NamespaceField() { return *GetNativePointerField<const FString*>(this, "FArchiveEntry.Namespace"); }
	FLocItem& SourceField() { return *GetNativePointerField<FLocItem*>(this, "FArchiveEntry.Source"); }
	FLocItem& TranslationField() { return *GetNativePointerField<FLocItem*>(this, "FArchiveEntry.Translation"); }
	bool& bIsOptionalField() { return *GetNativePointerField<bool*>(this, "FArchiveEntry.bIsOptional"); }
	TSharedPtr<FLocMetadataObject,0>& KeyMetadataObjField() { return *GetNativePointerField<TSharedPtr<FLocMetadataObject,0>*>(this, "FArchiveEntry.KeyMetadataObj"); }

	// Functions

};

