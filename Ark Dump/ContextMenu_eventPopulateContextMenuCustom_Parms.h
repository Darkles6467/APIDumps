#pragma once

#include "BaseDeclarations.h"
struct ContextMenu_eventPopulateContextMenuCustom_Parms
{
	char __padding[0x10L];
	FName& MenuNameField() { return *GetNativePointerField<FName*>(this, "ContextMenu_eventPopulateContextMenuCustom_Parms.MenuName"); }
};

