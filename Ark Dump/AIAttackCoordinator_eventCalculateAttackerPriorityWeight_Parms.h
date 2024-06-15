#pragma once

#include "BaseDeclarations.h"
struct AIAttackCoordinator_eventCalculateAttackerPriorityWeight_Parms
{
	char __padding[0x10L];
	float& ReturnValueField() { return *GetNativePointerField<float*>(this, "AIAttackCoordinator_eventCalculateAttackerPriorityWeight_Parms.ReturnValue"); }
};

