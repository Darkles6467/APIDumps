#pragma once

#include "BaseDeclarations.h"
struct FMergeDirtyListState
{
	char __padding[0x28L];
	const TArray<unsigned short> * DirtyList1Field() { return GetNativePointerField<const TArray<unsigned short> *>(this, "FMergeDirtyListState.DirtyList1"); }
	const TArray<unsigned short> * DirtyList2Field() { return GetNativePointerField<const TArray<unsigned short> *>(this, "FMergeDirtyListState.DirtyList2"); }
	int& DirtyListIndex1Field() { return *GetNativePointerField<int*>(this, "FMergeDirtyListState.DirtyListIndex1"); }
	int& DirtyListIndex2Field() { return *GetNativePointerField<int*>(this, "FMergeDirtyListState.DirtyListIndex2"); }
	unsigned __int16& HandleField() { return *GetNativePointerField<unsigned __int16*>(this, "FMergeDirtyListState.Handle"); }
	bool& DirtyValid1Field() { return *GetNativePointerField<bool*>(this, "FMergeDirtyListState.DirtyValid1"); }
	bool& DirtyValid2Field() { return *GetNativePointerField<bool*>(this, "FMergeDirtyListState.DirtyValid2"); }
	TArray<unsigned short> * MergedDirtyListField() { return GetNativePointerField<TArray<unsigned short> *>(this, "FMergeDirtyListState.MergedDirtyList"); }
};

