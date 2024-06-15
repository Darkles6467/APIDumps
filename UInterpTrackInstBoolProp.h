#pragma once

#include "BaseDeclarations.h"
#include "UInterpTrackInstProperty.h"
#include "UInterpTrackInst.h"
#include "UObject.h"
#include "UObjectBaseUtility.h"
#include "UObjectBase.h"

struct UInterpTrackInstBoolProp : UInterpTrackInstProperty
{
	char __padding[0x18L];
	void * BoolPropertyAddressField() { return GetNativePointerField<void *>(this, "UInterpTrackInstBoolProp.BoolPropertyAddress"); }
	UBoolProperty * BoolPropertyField() { return GetNativePointerField<UBoolProperty *>(this, "UInterpTrackInstBoolProp.BoolProperty"); }
	bool& ResetBoolField() { return *GetNativePointerField<bool*>(this, "UInterpTrackInstBoolProp.ResetBool"); }

	// Functions

	void InitTrackInst(UInterpTrack * Track) { NativeCall<void, UInterpTrack *>(this, "UInterpTrackInstBoolProp.InitTrackInst", Track); }
	void RestoreActorState(UInterpTrack * Track) { NativeCall<void, UInterpTrack *>(this, "UInterpTrackInstBoolProp.RestoreActorState", Track); }
	void SaveActorState(UInterpTrack * Track) { NativeCall<void, UInterpTrack *>(this, "UInterpTrackInstBoolProp.SaveActorState", Track); }
};

