#pragma once

#include "BaseDeclarations.h"
struct FScopedSlowTask
{
	char __padding[0x1L];
	bool& bIsBeginSlowTaskField() { return *GetNativePointerField<bool*>(this, "FScopedSlowTask.bIsBeginSlowTask"); }
};

