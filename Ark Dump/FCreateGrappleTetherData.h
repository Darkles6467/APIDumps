#pragma once

#include "BaseDeclarations.h"
struct FCreateGrappleTetherData
{
	char __padding[0x120L];
	FString& WithTagField() { return *GetNativePointerField<FString*>(this, "FCreateGrappleTetherData.WithTag"); }
	FGrappleAnchor& WithTetherStartAnchorField() { return *GetNativePointerField<FGrappleAnchor*>(this, "FCreateGrappleTetherData.WithTetherStartAnchor"); }
	FGrappleAnchor& WithTetherEndAnchorField() { return *GetNativePointerField<FGrappleAnchor*>(this, "FCreateGrappleTetherData.WithTetherEndAnchor"); }
	FGrappleAnchor& WithTetherVisualStartAnchorField() { return *GetNativePointerField<FGrappleAnchor*>(this, "FCreateGrappleTetherData.WithTetherVisualStartAnchor"); }
	FGrappleAnchor& WithTetherVisualEndAnchorField() { return *GetNativePointerField<FGrappleAnchor*>(this, "FCreateGrappleTetherData.WithTetherVisualEndAnchor"); }
	float& WithTetherLifetimeField() { return *GetNativePointerField<float*>(this, "FCreateGrappleTetherData.WithTetherLifetime"); }

	// Functions

	FCreateGrappleTetherData * operator=(const FCreateGrappleTetherData * __that) { return NativeCall<FCreateGrappleTetherData *, const FCreateGrappleTetherData *>(this, "FCreateGrappleTetherData.operator=", __that); }
};

