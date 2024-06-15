#pragma once

#include "BaseDeclarations.h"
#include "UInterpTrackInst.h"
#include "UObject.h"
#include "UObjectBaseUtility.h"
#include "UObjectBase.h"

struct UInterpTrackInstMove : UInterpTrackInst
{
	char __padding[0x18L];
	FVector& ResetLocationField() { return *GetNativePointerField<FVector*>(this, "UInterpTrackInstMove.ResetLocation"); }
	FRotator& ResetRotationField() { return *GetNativePointerField<FRotator*>(this, "UInterpTrackInstMove.ResetRotation"); }

	// Functions

};

