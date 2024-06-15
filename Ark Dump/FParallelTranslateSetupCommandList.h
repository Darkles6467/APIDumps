#pragma once

#include "BaseDeclarations.h"
struct FParallelTranslateSetupCommandList
{
	char __padding[0x20L];
	int& NumCommandListsField() { return *GetNativePointerField<int*>(this, "FParallelTranslateSetupCommandList.NumCommandLists"); }
	bool& bIsPrepassField() { return *GetNativePointerField<bool*>(this, "FParallelTranslateSetupCommandList.bIsPrepass"); }
	int& MinSizeField() { return *GetNativePointerField<int*>(this, "FParallelTranslateSetupCommandList.MinSize"); }
	int& MinCountField() { return *GetNativePointerField<int*>(this, "FParallelTranslateSetupCommandList.MinCount"); }
};

