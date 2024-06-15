#pragma once

#include "BaseDeclarations.h"
struct FTributePlayerTribeInfo
{
	char __padding[0x20L];
	TArray<unsigned __int64>& PlayerDataIDsField() { return *GetNativePointerField<TArray<unsigned __int64>*>(this, "FTributePlayerTribeInfo.PlayerDataIDs"); }
	TArray<unsigned __int64>& TribeIDsField() { return *GetNativePointerField<TArray<unsigned __int64>*>(this, "FTributePlayerTribeInfo.TribeIDs"); }

	// Functions

	FTributePlayerTribeInfo * operator=(const FTributePlayerTribeInfo * __that) { return NativeCall<FTributePlayerTribeInfo *, const FTributePlayerTribeInfo *>(this, "FTributePlayerTribeInfo.operator=", __that); }
};

