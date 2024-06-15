#pragma once

#include "BaseDeclarations.h"
struct FBattleTribeData
{
	char __padding[0x18L];
	FString& TribeNameField() { return *GetNativePointerField<FString*>(this, "FBattleTribeData.TribeName"); }
	int& TribeIDField() { return *GetNativePointerField<int*>(this, "FBattleTribeData.TribeID"); }

	// Functions

	FBattleTribeData * operator=(const FBattleTribeData * __that) { return NativeCall<FBattleTribeData *, const FBattleTribeData *>(this, "FBattleTribeData.operator=", __that); }
};

