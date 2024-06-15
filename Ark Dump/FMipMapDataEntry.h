#pragma once

#include "BaseDeclarations.h"
struct FMipMapDataEntry
{
	char __padding[0x18L];
	unsigned int& SizeXField() { return *GetNativePointerField<unsigned int*>(this, "FMipMapDataEntry.SizeX"); }
	unsigned int& SizeYField() { return *GetNativePointerField<unsigned int*>(this, "FMipMapDataEntry.SizeY"); }
	TArray<unsigned char>& DataField() { return *GetNativePointerField<TArray<unsigned char>*>(this, "FMipMapDataEntry.Data"); }
};

