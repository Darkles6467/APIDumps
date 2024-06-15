#pragma once

#include "BaseDeclarations.h"
#include "UInterpTrackInstProperty.h"
#include "UInterpTrackInst.h"
#include "UObject.h"
#include "UObjectBaseUtility.h"
#include "UObjectBase.h"

struct UInterpTrackInstLinearColorProp : UInterpTrackInstProperty
{
	char __padding[0x18L];
	FLinearColor * ColorPropField() { return GetNativePointerField<FLinearColor *>(this, "UInterpTrackInstLinearColorProp.ColorProp"); }
	FLinearColor& ResetColorField() { return *GetNativePointerField<FLinearColor*>(this, "UInterpTrackInstLinearColorProp.ResetColor"); }

	// Functions

	void InitTrackInst(UInterpTrack * Track) { NativeCall<void, UInterpTrack *>(this, "UInterpTrackInstLinearColorProp.InitTrackInst", Track); }
	void RestoreActorState(UInterpTrack * Track) { NativeCall<void, UInterpTrack *>(this, "UInterpTrackInstLinearColorProp.RestoreActorState", Track); }
	void SaveActorState(UInterpTrack * Track) { NativeCall<void, UInterpTrack *>(this, "UInterpTrackInstLinearColorProp.SaveActorState", Track); }
};

