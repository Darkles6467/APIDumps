#pragma once

#include "BaseDeclarations.h"
struct FScopedCommandListWaitForTasks
{
	char __padding[0x10L];
	bool& bWaitForTasksField() { return *GetNativePointerField<bool*>(this, "FScopedCommandListWaitForTasks.bWaitForTasks"); }
};

