#pragma once

#include "BaseDeclarations.h"
struct FRenderTargetPoolEventIterator
{
	char __padding[0x20L];
	int& IndexField() { return *GetNativePointerField<int*>(this, "FRenderTargetPoolEventIterator.Index"); }
	bool& bLineContentField() { return *GetNativePointerField<bool*>(this, "FRenderTargetPoolEventIterator.bLineContent"); }
	unsigned int& TotalWidthField() { return *GetNativePointerField<unsigned int*>(this, "FRenderTargetPoolEventIterator.TotalWidth"); }
	int& YField() { return *GetNativePointerField<int*>(this, "FRenderTargetPoolEventIterator.Y"); }
};

