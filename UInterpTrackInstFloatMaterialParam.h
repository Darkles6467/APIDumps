#pragma once

#include "BaseDeclarations.h"
#include "UInterpTrackInst.h"
#include "UObject.h"
#include "UObjectBaseUtility.h"
#include "UObjectBase.h"

struct UInterpTrackInstFloatMaterialParam : UInterpTrackInst
{
	char __padding[0x38L];
	TArray<float>& ResetFloatsField() { return *GetNativePointerField<TArray<float>*>(this, "UInterpTrackInstFloatMaterialParam.ResetFloats"); }
	TArray<FPrimitiveMaterialRef>& PrimitiveMaterialRefsField() { return *GetNativePointerField<TArray<FPrimitiveMaterialRef>*>(this, "UInterpTrackInstFloatMaterialParam.PrimitiveMaterialRefs"); }

	// Functions

	void InitTrackInst(UInterpTrack * Track) { NativeCall<void, UInterpTrack *>(this, "UInterpTrackInstFloatMaterialParam.InitTrackInst", Track); }
	void RestoreActorState(UInterpTrack * Track) { NativeCall<void, UInterpTrack *>(this, "UInterpTrackInstFloatMaterialParam.RestoreActorState", Track); }
	void SaveActorState(UInterpTrack * Track) { NativeCall<void, UInterpTrack *>(this, "UInterpTrackInstFloatMaterialParam.SaveActorState", Track); }
};

