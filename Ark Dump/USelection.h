#pragma once

#include "BaseDeclarations.h"
#include "UObject.h"
#include "UObjectBaseUtility.h"
#include "UObjectBase.h"

struct USelection : UObject
{
	char __padding[0x30L];
	int& SelectionMutexField() { return *GetNativePointerField<int*>(this, "USelection.SelectionMutex"); }
	bool& bIsBatchDirtyField() { return *GetNativePointerField<bool*>(this, "USelection.bIsBatchDirty"); }

	// Functions

	void Serialize(FArchive * Ar) { NativeCall<void, FArchive *>(this, "USelection.Serialize", Ar); }
};

