#pragma once

#include "BaseDeclarations.h"
#include "UObject.h"
#include "UObjectBaseUtility.h"
#include "UObjectBase.h"

struct UBoneMaskFilter : UObject
{
	char __padding[0x10L];
	TArray<FInputBlendPose>& BlendPosesField() { return *GetNativePointerField<TArray<FInputBlendPose>*>(this, "UBoneMaskFilter.BlendPoses"); }

	// Functions

};

