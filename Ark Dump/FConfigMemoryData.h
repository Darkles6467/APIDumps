#pragma once

#include "BaseDeclarations.h"
struct FConfigMemoryData
{
	char __padding[0x20L];
	int& NameIndentField() { return *GetNativePointerField<int*>(this, "FConfigMemoryData.NameIndent"); }
	int& SizeIndentField() { return *GetNativePointerField<int*>(this, "FConfigMemoryData.SizeIndent"); }
	int& MaxSizeIndentField() { return *GetNativePointerField<int*>(this, "FConfigMemoryData.MaxSizeIndent"); }
};

