#pragma once

#include "BaseDeclarations.h"
#include "UObject.h"

struct UInterpGroup : UObject
{
	char __padding[0x28L];
	FName& GroupNameField() { return *GetNativePointerField<FName*>(this, "UInterpGroup.GroupName"); }
	FColor& GroupColorField() { return *GetNativePointerField<FColor*>(this, "UInterpGroup.GroupColor"); }

	// Functions

	bool HasMoveTrack() { return NativeCall<bool>(this, "UInterpGroup.HasMoveTrack"); }
	void PostLoad() { NativeCall<void>(this, "UInterpGroup.PostLoad"); }
	void SetSelected(bool bInSelected) { NativeCall<void, bool>(this, "UInterpGroup.SetSelected", bInSelected); }
	void UpdateAnimWeights(float NewPosition, UInterpGroupInst * GrInst, bool bPreview, bool bJump) { NativeCall<void, float, UInterpGroupInst *, bool, bool>(this, "UInterpGroup.UpdateAnimWeights", NewPosition, GrInst, bPreview, bJump); }
	void UpdateGroup(float NewPosition, UInterpGroupInst * GrInst, bool bPreview, bool bJump) { NativeCall<void, float, UInterpGroupInst *, bool, bool>(this, "UInterpGroup.UpdateGroup", NewPosition, GrInst, bPreview, bJump); }
};

