#pragma once

#include "BaseDeclarations.h"
struct FAnimExtractContext
{
	char __padding[0xcL];
	bool& bExtractRootMotionTranslationField() { return *GetNativePointerField<bool*>(this, "FAnimExtractContext.bExtractRootMotionTranslation"); }
	bool& bExtractRootMotionRotationField() { return *GetNativePointerField<bool*>(this, "FAnimExtractContext.bExtractRootMotionRotation"); }
	float& CurrentTimeField() { return *GetNativePointerField<float*>(this, "FAnimExtractContext.CurrentTime"); }
	TEnumAsByte<enum ERootMotionRootLock::Type>& RootMotionRootLockField() { return *GetNativePointerField<TEnumAsByte<enum ERootMotionRootLock::Type>*>(this, "FAnimExtractContext.RootMotionRootLock"); }

	// Functions

};

