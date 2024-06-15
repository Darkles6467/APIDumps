#pragma once

#include "BaseDeclarations.h"
#include "UInterpTrackInstProperty.h"
#include "UInterpTrackInst.h"
#include "UObject.h"
#include "UObjectBaseUtility.h"
#include "UObjectBase.h"

struct UInterpTrackInstColorProp : UInterpTrackInstProperty
{
	char __padding[0x10L];
	FColor * ColorPropField() { return GetNativePointerField<FColor *>(this, "UInterpTrackInstColorProp.ColorProp"); }
	FColor& ResetColorField() { return *GetNativePointerField<FColor*>(this, "UInterpTrackInstColorProp.ResetColor"); }

	// Functions

	void InitTrackInst(UInterpTrack * Track) { NativeCall<void, UInterpTrack *>(this, "UInterpTrackInstColorProp.InitTrackInst", Track); }
	void RestoreActorState(UInterpTrack * Track) { NativeCall<void, UInterpTrack *>(this, "UInterpTrackInstColorProp.RestoreActorState", Track); }
	void SaveActorState(UInterpTrack * Track) { NativeCall<void, UInterpTrack *>(this, "UInterpTrackInstColorProp.SaveActorState", Track); }
};

