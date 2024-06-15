#pragma once

#include "BaseDeclarations.h"
struct FParallelTranslateCommandList
{
	char __padding[0x20L];
	int& NumCommandListsField() { return *GetNativePointerField<int*>(this, "FParallelTranslateCommandList.NumCommandLists"); }
	bool& bIsPrepassField() { return *GetNativePointerField<bool*>(this, "FParallelTranslateCommandList.bIsPrepass"); }
};

