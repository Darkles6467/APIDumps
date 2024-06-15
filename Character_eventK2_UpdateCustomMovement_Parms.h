#pragma once

#include "BaseDeclarations.h"
struct Character_eventK2_UpdateCustomMovement_Parms
{
	char __padding[0x4L];
	float& DeltaTimeField() { return *GetNativePointerField<float*>(this, "Character_eventK2_UpdateCustomMovement_Parms.DeltaTime"); }
};

