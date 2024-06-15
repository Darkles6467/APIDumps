#pragma once

#include "BaseDeclarations.h"
#include "UObject.h"

struct UInterpTrack : UObject
{
	char __padding[0x58L];
	TEnumAsByte<enum ETrackActiveCondition>& ActiveConditionField() { return *GetNativePointerField<TEnumAsByte<enum ETrackActiveCondition>*>(this, "UInterpTrack.ActiveCondition"); }
	FString& TrackTitleField() { return *GetNativePointerField<FString*>(this, "UInterpTrack.TrackTitle"); }

	// Functions

	void ConditionalPreviewUpdateTrack(float NewPosition, UInterpTrackInst * TrInst) { NativeCall<void, float, UInterpTrackInst *>(this, "UInterpTrack.ConditionalPreviewUpdateTrack", NewPosition, TrInst); }
	void ConditionalUpdateTrack(float NewPosition, UInterpTrackInst * TrInst, bool bJump) { NativeCall<void, float, UInterpTrackInst *, bool>(this, "UInterpTrack.ConditionalUpdateTrack", NewPosition, TrInst, bJump); }
	const FString * GetEdHelperClassName(const FString * result) { return NativeCall<const FString *, const FString *>(this, "UInterpTrack.GetEdHelperClassName", result); }
	const FString * GetSlateHelperClassName(const FString * result) { return NativeCall<const FString *, const FString *>(this, "UInterpTrack.GetSlateHelperClassName", result); }
	void SetSelected(bool bInSelected) { NativeCall<void, bool>(this, "UInterpTrack.SetSelected", bInSelected); }
	FColor * GetKeyframeColor(FColor * result, int KeyIndex) { return NativeCall<FColor *, FColor *, int>(this, "UInterpTrack.GetKeyframeColor", result, KeyIndex); }
};

