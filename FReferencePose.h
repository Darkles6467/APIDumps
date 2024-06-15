#pragma once

#include "BaseDeclarations.h"
struct FReferencePose
{
	char __padding[0x18L];
	FName& PoseNameField() { return *GetNativePointerField<FName*>(this, "FReferencePose.PoseName"); }
	TArray<FTransform>& ReferencePoseField() { return *GetNativePointerField<TArray<FTransform>*>(this, "FReferencePose.ReferencePose"); }

	// Functions

};

