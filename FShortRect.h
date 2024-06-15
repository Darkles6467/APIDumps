#pragma once

#include "BaseDeclarations.h"
struct FShortRect
{
	char __padding[0x8L];
	unsigned __int16& LeftField() { return *GetNativePointerField<unsigned __int16*>(this, "FShortRect.Left"); }
	unsigned __int16& TopField() { return *GetNativePointerField<unsigned __int16*>(this, "FShortRect.Top"); }
	unsigned __int16& RightField() { return *GetNativePointerField<unsigned __int16*>(this, "FShortRect.Right"); }
	unsigned __int16& BottomField() { return *GetNativePointerField<unsigned __int16*>(this, "FShortRect.Bottom"); }

	// Functions

};

