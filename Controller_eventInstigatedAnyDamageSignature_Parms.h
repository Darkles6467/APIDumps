#pragma once

#include "BaseDeclarations.h"
struct Controller_eventInstigatedAnyDamageSignature_Parms
{
	char __padding[0x20L];
	float& DamageField() { return *GetNativePointerField<float*>(this, "Controller_eventInstigatedAnyDamageSignature_Parms.Damage"); }
};

