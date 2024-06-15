#pragma once

#include "BaseDeclarations.h"
struct FScopedSwitchWorldHack
{
	char __padding[0x18L];
	TSharedPtr<SWindow,0>& WindowField() { return *GetNativePointerField<TSharedPtr<SWindow,0>*>(this, "FScopedSwitchWorldHack.Window"); }
	int& WorldIdField() { return *GetNativePointerField<int*>(this, "FScopedSwitchWorldHack.WorldId"); }
};

