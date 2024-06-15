#pragma once

#include "BaseDeclarations.h"
struct PrimalItem_eventIsCustomContextMenuItemEnabled_Parms
{
	char __padding[0xcL];
	FName& ContextItemField() { return *GetNativePointerField<FName*>(this, "PrimalItem_eventIsCustomContextMenuItemEnabled_Parms.ContextItem"); }
	bool& ReturnValueField() { return *GetNativePointerField<bool*>(this, "PrimalItem_eventIsCustomContextMenuItemEnabled_Parms.ReturnValue"); }
};

