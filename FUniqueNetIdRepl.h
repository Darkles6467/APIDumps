#pragma once

#include "BaseDeclarations.h"
#include "FUniqueNetId.h"

struct FUniqueNetIdRepl
{
	char __padding[0x10L];

	// Functions

	bool IsValid() { return NativeCall<bool>(this, "FUniqueNetIdRepl.IsValid"); }
	bool operator==(const FUniqueNetIdRepl * Other) { return NativeCall<bool, const FUniqueNetIdRepl *>(this, "FUniqueNetIdRepl.operator==", Other); }
	void SetUniqueNetId(const TSharedPtr<FUniqueNetId,0> * InUniqueNetId) { NativeCall<void, const TSharedPtr<FUniqueNetId,0> *>(this, "FUniqueNetIdRepl.SetUniqueNetId", InUniqueNetId); }
	bool ExportTextItem(FString * ValueStr, const FUniqueNetIdRepl * DefaultValue, UObject * Parent, int PortFlags, UObject * ExportRootScope) { return NativeCall<bool, FString *, const FUniqueNetIdRepl *, UObject *, int, UObject *>(this, "FUniqueNetIdRepl.ExportTextItem", ValueStr, DefaultValue, Parent, PortFlags, ExportRootScope); }
	bool NetSerialize(FArchive * Ar, UPackageMap * Map, bool * bOutSuccess) { return NativeCall<bool, FArchive *, UPackageMap *, bool *>(this, "FUniqueNetIdRepl.NetSerialize", Ar, Map, bOutSuccess); }
	bool Serialize(FArchive * Ar) { return NativeCall<bool, FArchive *>(this, "FUniqueNetIdRepl.Serialize", Ar); }
	FString * ToString(FString * result) { return NativeCall<FString *, FString *>(this, "FUniqueNetIdRepl.ToString", result); }
};

