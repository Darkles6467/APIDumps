#pragma once

#include "BaseDeclarations.h"
#include "UObject.h"
#include "UObjectBaseUtility.h"
#include "UObjectBase.h"

struct UInterpData : UObject
{
	char __padding[0x58L];
	float& InterpLengthField() { return *GetNativePointerField<float*>(this, "UInterpData.InterpLength"); }
	float& PathBuildTimeField() { return *GetNativePointerField<float*>(this, "UInterpData.PathBuildTime"); }
	UInterpCurveEdSetup * CurveEdSetupField() { return GetNativePointerField<UInterpCurveEdSetup *>(this, "UInterpData.CurveEdSetup"); }
	float& EdSectionStartField() { return *GetNativePointerField<float*>(this, "UInterpData.EdSectionStart"); }
	float& EdSectionEndField() { return *GetNativePointerField<float*>(this, "UInterpData.EdSectionEnd"); }
	TArray<FAnimSetBakeAndPruneStatus>& BakeAndPruneStatusField() { return *GetNativePointerField<TArray<FAnimSetBakeAndPruneStatus>*>(this, "UInterpData.BakeAndPruneStatus"); }
	TArray<FName>& AllEventNamesField() { return *GetNativePointerField<TArray<FName>*>(this, "UInterpData.AllEventNames"); }

	// Functions

	void FindTracksByClass(UClass * TrackClass, TArray<UInterpTrack *> * OutputTracks) { NativeCall<void, UClass *, TArray<UInterpTrack *> *>(this, "UInterpData.FindTracksByClass", TrackClass, OutputTracks); }
	void PostLoad() { NativeCall<void>(this, "UInterpData.PostLoad"); }
	void UpdateEventNames() { NativeCall<void>(this, "UInterpData.UpdateEventNames"); }
};

