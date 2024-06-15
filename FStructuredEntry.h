#pragma once

#include "BaseDeclarations.h"
struct FStructuredEntry
{
	char __padding[0x30L];
	const FString& NamespaceField() { return *GetNativePointerField<const FString*>(this, "FStructuredEntry.Namespace"); }
	TArray<TSharedPtr<FStructuredEntry,0>>& SubNamespacesField() { return *GetNativePointerField<TArray<TSharedPtr<FStructuredEntry,0>>*>(this, "FStructuredEntry.SubNamespaces"); }
	TArray<TSharedPtr<FManifestEntry,0>>& ManifestEntriesField() { return *GetNativePointerField<TArray<TSharedPtr<FManifestEntry,0>>*>(this, "FStructuredEntry.ManifestEntries"); }
};

