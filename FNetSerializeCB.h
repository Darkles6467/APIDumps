#pragma once

#include "BaseDeclarations.h"
struct INetSerializeCB
{
	char __padding[0x8L];
};

struct FNetSerializeCB : INetSerializeCB
{
	char __padding[0x8L];

	// Functions

	void NetSerializeStruct(UStruct * Struct, FArchive * Ar, UPackageMap * Map, void * Data, bool * bHasUnmapped) { NativeCall<void, UStruct *, FArchive *, UPackageMap *, void *, bool *>(this, "FNetSerializeCB.NetSerializeStruct", Struct, Ar, Map, Data, bHasUnmapped); }
};

