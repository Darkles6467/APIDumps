#pragma once

#include "BaseDeclarations.h"
#include "UInterpTrackFloatBase.h"
#include "UInterpTrack.h"
#include "UObject.h"
#include "UObjectBaseUtility.h"
#include "UObjectBase.h"

struct UInterpTrackFloatMaterialParam : UInterpTrackFloatBase
{
	char __padding[0x18L];
	FName& ParamNameField() { return *GetNativePointerField<FName*>(this, "UInterpTrackFloatMaterialParam.ParamName"); }

	// Functions

	int AddKeyframe(float Time, UInterpTrackInst * TrInst, EInterpCurveMode InitInterpMode) { return NativeCall<int, float, UInterpTrackInst *, EInterpCurveMode>(this, "UInterpTrackFloatMaterialParam.AddKeyframe", Time, TrInst, InitInterpMode); }
	void UpdateTrack(float NewPosition, UInterpTrackInst * TrInst, bool bJump) { NativeCall<void, float, UInterpTrackInst *, bool>(this, "UInterpTrackFloatMaterialParam.UpdateTrack", NewPosition, TrInst, bJump); }
};

