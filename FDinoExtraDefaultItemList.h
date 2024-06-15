#pragma once

#include "BaseDeclarations.h"
struct FDinoExtraDefaultItemList
{
	char __padding[0x18L];
	int& MinimumDinoLevelField() { return *GetNativePointerField<int*>(this, "FDinoExtraDefaultItemList.MinimumDinoLevel"); }
	float& ChanceToGiveField() { return *GetNativePointerField<float*>(this, "FDinoExtraDefaultItemList.ChanceToGive"); }

	// Functions

	FDinoExtraDefaultItemList * operator=(const FDinoExtraDefaultItemList * __that) { return NativeCall<FDinoExtraDefaultItemList *, const FDinoExtraDefaultItemList *>(this, "FDinoExtraDefaultItemList.operator=", __that); }
};

