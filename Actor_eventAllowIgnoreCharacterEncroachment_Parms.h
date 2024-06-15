#pragma once

#include "BaseDeclarations.h"
struct Actor_eventAllowIgnoreCharacterEncroachment_Parms
{
	char __padding[0x18L];
	bool& ReturnValueField() { return *GetNativePointerField<bool*>(this, "Actor_eventAllowIgnoreCharacterEncroachment_Parms.ReturnValue"); }
};

