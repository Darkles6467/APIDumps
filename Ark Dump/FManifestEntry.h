#pragma once

#include "BaseDeclarations.h"
struct FManifestEntry
{
	char __padding[0x40L];
	const FString& NamespaceField() { return *GetNativePointerField<const FString*>(this, "FManifestEntry.Namespace"); }
	const FLocItem& SourceField() { return *GetNativePointerField<const FLocItem*>(this, "FManifestEntry.Source"); }
	TArray<FContext>& ContextsField() { return *GetNativePointerField<TArray<FContext>*>(this, "FManifestEntry.Contexts"); }

	// Functions

};

