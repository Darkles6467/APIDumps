#pragma once

#include "BaseDeclarations.h"
#include "UInterpTrackInst.h"
#include "UObject.h"
#include "UObjectBaseUtility.h"
#include "UObjectBase.h"

struct UInterpTrackInstSound : UInterpTrackInst
{
	char __padding[0x10L];
	float& LastUpdatePositionField() { return *GetNativePointerField<float*>(this, "UInterpTrackInstSound.LastUpdatePosition"); }
	UAudioComponent * PlayAudioCompField() { return GetNativePointerField<UAudioComponent *>(this, "UInterpTrackInstSound.PlayAudioComp"); }

	// Functions

	void TermTrackInst(UInterpTrack * Track) { NativeCall<void, UInterpTrack *>(this, "UInterpTrackInstSound.TermTrackInst", Track); }
};

