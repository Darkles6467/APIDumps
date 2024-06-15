#pragma once

#include "BaseDeclarations.h"
struct FSmartNameMapping
{
	char __padding[0x68L];
	unsigned __int16& NextUidField() { return *GetNativePointerField<unsigned __int16*>(this, "FSmartNameMapping.NextUid"); }
	TArray<unsigned short>& FreeListField() { return *GetNativePointerField<TArray<unsigned short>*>(this, "FSmartNameMapping.FreeList"); }

	// Functions

	bool AddName(FName Name, unsigned __int16 * OutUid) { return NativeCall<bool, FName, unsigned __int16 *>(this, "FSmartNameMapping.AddName", Name, OutUid); }
	bool GetName(const unsigned __int16 * Uid, FName * OutName) { return NativeCall<bool, const unsigned __int16 *, FName *>(this, "FSmartNameMapping.GetName", Uid, OutName); }
	void Serialize(FArchive * Ar) { NativeCall<void, FArchive *>(this, "FSmartNameMapping.Serialize", Ar); }
};

