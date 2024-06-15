#pragma once

#include "BaseDeclarations.h"
struct FTViewTarget
{
	char __padding[0x3a8L];
	FMinimalViewInfo& POVField() { return *GetNativePointerField<FMinimalViewInfo*>(this, "FTViewTarget.POV"); }

	// Functions

	void CheckViewTarget(APlayerController * OwningController) { NativeCall<void, APlayerController *>(this, "FTViewTarget.CheckViewTarget", OwningController); }
	bool Equal(const FTViewTarget * OtherTarget) { return NativeCall<bool, const FTViewTarget *>(this, "FTViewTarget.Equal", OtherTarget); }
};

