#pragma once

#include "BaseDeclarations.h"
#include "UInterpTrackInst.h"
#include "UObject.h"
#include "UObjectBaseUtility.h"
#include "UObjectBase.h"

struct UInterpTrackInstParticleReplay : UInterpTrackInst
{
	char __padding[0x8L];
	float& LastUpdatePositionField() { return *GetNativePointerField<float*>(this, "UInterpTrackInstParticleReplay.LastUpdatePosition"); }

	// Functions

	void RestoreActorState(UInterpTrack * Track) { NativeCall<void, UInterpTrack *>(this, "UInterpTrackInstParticleReplay.RestoreActorState", Track); }
};

