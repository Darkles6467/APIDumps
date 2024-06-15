#pragma once

#include "BaseDeclarations.h"
struct FStructuredArchiveEntry
{
	char __padding[0x30L];
	const FString& NamespaceField() { return *GetNativePointerField<const FString*>(this, "FStructuredArchiveEntry.Namespace"); }
	TArray<TSharedPtr<FStructuredArchiveEntry,0>>& SubNamespacesField() { return *GetNativePointerField<TArray<TSharedPtr<FStructuredArchiveEntry,0>>*>(this, "FStructuredArchiveEntry.SubNamespaces"); }
};

