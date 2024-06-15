#pragma once

#include "BaseDeclarations.h"
#include "UInterpTrackInst.h"
#include "UObject.h"
#include "UObjectBaseUtility.h"
#include "UObjectBase.h"

struct UInterpTrackInstSlomo : UInterpTrackInst
{
	char __padding[0x8L];
	float& OldTimeDilationField() { return *GetNativePointerField<float*>(this, "UInterpTrackInstSlomo.OldTimeDilation"); }

	// Functions

	void InitTrackInst(UInterpTrack * Track) { NativeCall<void, UInterpTrack *>(this, "UInterpTrackInstSlomo.InitTrackInst", Track); }
	void RestoreActorState(UInterpTrack * Track) { NativeCall<void, UInterpTrack *>(this, "UInterpTrackInstSlomo.RestoreActorState", Track); }
	void SaveActorState(UInterpTrack * Track) { NativeCall<void, UInterpTrack *>(this, "UInterpTrackInstSlomo.SaveActorState", Track); }
	bool ShouldBeApplied() { return NativeCall<bool>(this, "UInterpTrackInstSlomo.ShouldBeApplied"); }
	void TermTrackInst(UInterpTrack * Track) { NativeCall<void, UInterpTrack *>(this, "UInterpTrackInstSlomo.TermTrackInst", Track); }
};

