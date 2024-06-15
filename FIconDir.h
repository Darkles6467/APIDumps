#pragma once

#include "BaseDeclarations.h"
struct FIconDir
{
	char __padding[0x16L];
	unsigned __int16& idReservedField() { return *GetNativePointerField<unsigned __int16*>(this, "FIconDir.idReserved"); }
	unsigned __int16& idTypeField() { return *GetNativePointerField<unsigned __int16*>(this, "FIconDir.idType"); }
	unsigned __int16& idCountField() { return *GetNativePointerField<unsigned __int16*>(this, "FIconDir.idCount"); }
	FieldArray<FIconDirEntry, 1> idEntriesField() { return {this, "FIconDir.idEntries"}; }
};

