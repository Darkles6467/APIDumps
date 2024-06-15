#pragma once

#include "BaseDeclarations.h"
#include "UInterpTrackInst.h"
#include "UObject.h"
#include "UObjectBaseUtility.h"
#include "UObjectBase.h"

struct UInterpTrackInstFloatParticleParam : UInterpTrackInst
{
	char __padding[0x8L];
	float& ResetFloatField() { return *GetNativePointerField<float*>(this, "UInterpTrackInstFloatParticleParam.ResetFloat"); }

	// Functions

	void RestoreActorState(UInterpTrack * Track) { NativeCall<void, UInterpTrack *>(this, "UInterpTrackInstFloatParticleParam.RestoreActorState", Track); }
	void SaveActorState(UInterpTrack * Track) { NativeCall<void, UInterpTrack *>(this, "UInterpTrackInstFloatParticleParam.SaveActorState", Track); }
};

