#pragma once

#include "BaseDeclarations.h"
struct Actor_eventGetUsablePriority_Parms
{
	char __padding[0x4L];
	float& ReturnValueField() { return *GetNativePointerField<float*>(this, "Actor_eventGetUsablePriority_Parms.ReturnValue"); }
};

