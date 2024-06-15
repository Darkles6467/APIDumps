#pragma once

#include "BaseDeclarations.h"
#include "UInterpTrackFloatBase.h"
#include "UInterpTrack.h"
#include "UObject.h"
#include "UObjectBaseUtility.h"
#include "UObjectBase.h"

struct UInterpTrackFloatParticleParam : UInterpTrackFloatBase
{
	char __padding[0x8L];
	FName& ParamNameField() { return *GetNativePointerField<FName*>(this, "UInterpTrackFloatParticleParam.ParamName"); }

	// Functions

	int AddKeyframe(float Time, UInterpTrackInst * TrInst, EInterpCurveMode InitInterpMode) { return NativeCall<int, float, UInterpTrackInst *, EInterpCurveMode>(this, "UInterpTrackFloatParticleParam.AddKeyframe", Time, TrInst, InitInterpMode); }
	void UpdateTrack(float NewPosition, UInterpTrackInst * TrInst, bool bJump) { NativeCall<void, float, UInterpTrackInst *, bool>(this, "UInterpTrackFloatParticleParam.UpdateTrack", NewPosition, TrInst, bJump); }
};

