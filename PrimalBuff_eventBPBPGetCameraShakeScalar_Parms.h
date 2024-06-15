#pragma once

#include "BaseDeclarations.h"
struct PrimalBuff_eventBPBPGetCameraShakeScalar_Parms
{
	char __padding[0x10L];
	TSubclassOf<UCameraShake>& currentShakeField() { return *GetNativePointerField<TSubclassOf<UCameraShake>*>(this, "PrimalBuff_eventBPBPGetCameraShakeScalar_Parms.currentShake"); }
	float& currentScaleField() { return *GetNativePointerField<float*>(this, "PrimalBuff_eventBPBPGetCameraShakeScalar_Parms.currentScale"); }
	float& ReturnValueField() { return *GetNativePointerField<float*>(this, "PrimalBuff_eventBPBPGetCameraShakeScalar_Parms.ReturnValue"); }

	// Functions

};

