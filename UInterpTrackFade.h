#pragma once

#include "BaseDeclarations.h"
#include "UInterpTrackFloatBase.h"
#include "UInterpTrack.h"
#include "UObject.h"
#include "UObjectBaseUtility.h"
#include "UObjectBase.h"

struct UInterpTrackFade : UInterpTrackFloatBase
{
	char __padding[0x8L];

	// Functions

	float GetFadeAmountAtTime(float Time) { return NativeCall<float, float>(this, "UInterpTrackFade.GetFadeAmountAtTime", Time); }
	void UpdateTrack(float NewPosition, UInterpTrackInst * TrInst, bool bJump) { NativeCall<void, float, UInterpTrackInst *, bool>(this, "UInterpTrackFade.UpdateTrack", NewPosition, TrInst, bJump); }
};

