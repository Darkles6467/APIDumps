#pragma once

#include "BaseDeclarations.h"
struct FViewTargetTransitionParams
{
	char __padding[0x10L];
	float& BlendTimeField() { return *GetNativePointerField<float*>(this, "FViewTargetTransitionParams.BlendTime"); }
	TEnumAsByte<enum EViewTargetBlendFunction>& BlendFunctionField() { return *GetNativePointerField<TEnumAsByte<enum EViewTargetBlendFunction>*>(this, "FViewTargetTransitionParams.BlendFunction"); }
	float& BlendExpField() { return *GetNativePointerField<float*>(this, "FViewTargetTransitionParams.BlendExp"); }

	// Functions

};

