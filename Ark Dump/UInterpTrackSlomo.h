#pragma once

#include "BaseDeclarations.h"
#include "UInterpTrackFloatBase.h"
#include "UInterpTrack.h"
#include "UObject.h"
#include "UObjectBaseUtility.h"
#include "UObjectBase.h"

struct UInterpTrackSlomo : UInterpTrackFloatBase
{

	// Functions

	int AddKeyframe(float Time, UInterpTrackInst * TrInst, EInterpCurveMode InitInterpMode) { return NativeCall<int, float, UInterpTrackInst *, EInterpCurveMode>(this, "UInterpTrackSlomo.AddKeyframe", Time, TrInst, InitInterpMode); }
	void SetTrackToSensibleDefault() { NativeCall<void>(this, "UInterpTrackSlomo.SetTrackToSensibleDefault"); }
	void UpdateTrack(float NewPosition, UInterpTrackInst * TrInst, bool bJump) { NativeCall<void, float, UInterpTrackInst *, bool>(this, "UInterpTrackSlomo.UpdateTrack", NewPosition, TrInst, bJump); }
};

