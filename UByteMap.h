#pragma once

#include "BaseDeclarations.h"
#include "UObject.h"
#include "UObjectBaseUtility.h"
#include "UObjectBase.h"

struct UByteMap : UObject
{
	char __padding[0x10L];
	Map2DData<unsigned char>& HeightMapDataField() { return *GetNativePointerField<Map2DData<unsigned char>*>(this, "UByteMap.HeightMapData"); }

	// Functions

	void Delete() { NativeCall<void>(this, "UByteMap.Delete"); }
	void Init(int InSizeX, int InSizeY) { NativeCall<void, int, int>(this, "UByteMap.Init", InSizeX, InSizeY); }
	void Serialize(FArchive * Ar) { NativeCall<void, FArchive *>(this, "UByteMap.Serialize", Ar); }
};

