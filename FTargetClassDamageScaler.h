#pragma once

#include "BaseDeclarations.h"
struct FTargetClassDamageScaler
{
	char __padding[0x10L];
	float& DamageScaleField() { return *GetNativePointerField<float*>(this, "FTargetClassDamageScaler.DamageScale"); }

	// Functions

};

