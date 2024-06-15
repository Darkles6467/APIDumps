#pragma once

#include "BaseDeclarations.h"
#include "FManifestEntry.h"

struct FInternationalizationManifest
{
	enum EFormatVersion
	{
		Initial = 0x0,
		EscapeFixes = 0x1,
		LatestPlusOne = 0x2,
		Latest = 0x1,
	};

	char __padding[0xa8L];
	int& FormatVersionField() { return *GetNativePointerField<int*>(this, "FInternationalizationManifest.FormatVersion"); }

	// Functions

	bool AddSource(const FString * Namespace, const FLocItem * Source, const FContext * Context) { return NativeCall<bool, const FString *, const FLocItem *, const FContext *>(this, "FInternationalizationManifest.AddSource", Namespace, Source, Context); }
	TSharedPtr<FManifestEntry,0> * FindEntryByContext(TSharedPtr<FManifestEntry,0> * result, const FString * Namespace, const FContext * Context) { return NativeCall<TSharedPtr<FManifestEntry,0> *, TSharedPtr<FManifestEntry,0> *, const FString *, const FContext *>(this, "FInternationalizationManifest.FindEntryByContext", result, Namespace, Context); }
	TSharedPtr<FManifestEntry,0> * FindEntryBySource(TSharedPtr<FManifestEntry,0> * result, const FString * Namespace, const FLocItem * Source) { return NativeCall<TSharedPtr<FManifestEntry,0> *, TSharedPtr<FManifestEntry,0> *, const FString *, const FLocItem *>(this, "FInternationalizationManifest.FindEntryBySource", result, Namespace, Source); }
};

