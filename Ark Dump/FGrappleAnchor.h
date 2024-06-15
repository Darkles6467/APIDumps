#pragma once

#include "BaseDeclarations.h"
struct FGrappleAnchor
{
	char __padding[0x40L];
	FVector& AnchorWorldLocationField() { return *GetNativePointerField<FVector*>(this, "FGrappleAnchor.AnchorWorldLocation"); }
	int& AnchoredItemIndexField() { return *GetNativePointerField<int*>(this, "FGrappleAnchor.AnchoredItemIndex"); }
	FString& AnchoredBoneNameField() { return *GetNativePointerField<FString*>(this, "FGrappleAnchor.AnchoredBoneName"); }
	FVector& AnchorRelativeOffsetField() { return *GetNativePointerField<FVector*>(this, "FGrappleAnchor.AnchorRelativeOffset"); }

	// Functions

	FGrappleAnchor * operator=(const FGrappleAnchor * __that) { return NativeCall<FGrappleAnchor *, const FGrappleAnchor *>(this, "FGrappleAnchor.operator=", __that); }
	bool IsGrappleAnchorDynamic() { return NativeCall<bool>(this, "FGrappleAnchor.IsGrappleAnchorDynamic"); }
};

