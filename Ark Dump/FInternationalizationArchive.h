#pragma once

#include "BaseDeclarations.h"
#include "FArchiveEntry.h"
#include "FLocMetadataObject.h"

struct FInternationalizationArchive
{
	enum EFormatVersion
	{
		Initial = 0x0,
		EscapeFixes = 0x1,
		LatestPlusOne = 0x2,
		Latest = 0x1,
	};

	char __padding[0x58L];
	int& FormatVersionField() { return *GetNativePointerField<int*>(this, "FInternationalizationArchive.FormatVersion"); }

	// Functions

	bool AddEntry(const TSharedRef<FArchiveEntry,0> * InEntry) { return NativeCall<bool, const TSharedRef<FArchiveEntry,0> *>(this, "FInternationalizationArchive.AddEntry", InEntry); }
	bool AddEntry(const FString * Namespace, const FLocItem * Source, const FLocItem * Translation, const TSharedPtr<FLocMetadataObject,0> KeyMetadataObj, const bool bOptional) { return NativeCall<bool, const FString *, const FLocItem *, const FLocItem *, const TSharedPtr<FLocMetadataObject,0>, const bool>(this, "FInternationalizationArchive.AddEntry", Namespace, Source, Translation, KeyMetadataObj, bOptional); }
};

