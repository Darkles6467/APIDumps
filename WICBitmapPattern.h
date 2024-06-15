#pragma once

#include "BaseDeclarations.h"
struct WICBitmapPattern
{
	char __padding[0x28L];
	_ULARGE_INTEGER& PositionField() { return *GetNativePointerField<_ULARGE_INTEGER*>(this, "WICBitmapPattern.Position"); }
	unsigned int& LengthField() { return *GetNativePointerField<unsigned int*>(this, "WICBitmapPattern.Length"); }
	char * PatternField() { return GetNativePointerField<char *>(this, "WICBitmapPattern.Pattern"); }
	char * MaskField() { return GetNativePointerField<char *>(this, "WICBitmapPattern.Mask"); }
	int& EndOfStreamField() { return *GetNativePointerField<int*>(this, "WICBitmapPattern.EndOfStream"); }
};

