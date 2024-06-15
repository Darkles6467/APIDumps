#pragma once

#include "BaseDeclarations.h"
struct CsFrame
{
	char __padding[0x10L];
	unsigned __int64& SavedR10Field() { return *GetNativePointerField<unsigned __int64*>(this, "CsFrame.SavedR10"); }
	unsigned __int64& SavedR11Field() { return *GetNativePointerField<unsigned __int64*>(this, "CsFrame.SavedR11"); }
};

