#pragma once

#include "BaseDeclarations.h"
struct FAnimationStateBase
{
	char __padding[0x8L];
	FName& StateNameField() { return *GetNativePointerField<FName*>(this, "FAnimationStateBase.StateName"); }

	// Functions

};

