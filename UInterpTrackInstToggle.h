#pragma once

#include "BaseDeclarations.h"
#include "UInterpTrackInst.h"
#include "UObject.h"
#include "UObjectBaseUtility.h"
#include "UObjectBase.h"

struct UInterpTrackInstToggle : UInterpTrackInst
{
	char __padding[0x10L];
	TEnumAsByte<enum ETrackToggleAction>& ActionField() { return *GetNativePointerField<TEnumAsByte<enum ETrackToggleAction>*>(this, "UInterpTrackInstToggle.Action"); }
	float& LastUpdatePositionField() { return *GetNativePointerField<float*>(this, "UInterpTrackInstToggle.LastUpdatePosition"); }

	// Functions

	void RestoreActorState(UInterpTrack * Track) { NativeCall<void, UInterpTrack *>(this, "UInterpTrackInstToggle.RestoreActorState", Track); }
	void SaveActorState(UInterpTrack * Track) { NativeCall<void, UInterpTrack *>(this, "UInterpTrackInstToggle.SaveActorState", Track); }
};

