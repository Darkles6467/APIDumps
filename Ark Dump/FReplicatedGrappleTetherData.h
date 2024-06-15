#pragma once

#include "BaseDeclarations.h"
struct FReplicatedGrappleTetherData
{
	char __padding[0x138L];
	FString& Rep_TetherTagField() { return *GetNativePointerField<FString*>(this, "FReplicatedGrappleTetherData.Rep_TetherTag"); }
	FGrappleAnchor& Rep_TetherAnchor_StartField() { return *GetNativePointerField<FGrappleAnchor*>(this, "FReplicatedGrappleTetherData.Rep_TetherAnchor_Start"); }
	FGrappleAnchor& Rep_TetherAnchor_EndField() { return *GetNativePointerField<FGrappleAnchor*>(this, "FReplicatedGrappleTetherData.Rep_TetherAnchor_End"); }
	FGrappleAnchor& Rep_TetherAnchor_Visual_StartField() { return *GetNativePointerField<FGrappleAnchor*>(this, "FReplicatedGrappleTetherData.Rep_TetherAnchor_Visual_Start"); }
	FGrappleAnchor& Rep_TetherAnchor_Visual_EndField() { return *GetNativePointerField<FGrappleAnchor*>(this, "FReplicatedGrappleTetherData.Rep_TetherAnchor_Visual_End"); }
	float& Rep_TetherLifetimeField() { return *GetNativePointerField<float*>(this, "FReplicatedGrappleTetherData.Rep_TetherLifetime"); }
	long double& Rep_TetherCreationTimeField() { return *GetNativePointerField<long double*>(this, "FReplicatedGrappleTetherData.Rep_TetherCreationTime"); }
	float& Rep_TetherLengthField() { return *GetNativePointerField<float*>(this, "FReplicatedGrappleTetherData.Rep_TetherLength"); }

	// Functions

	FReplicatedGrappleTetherData * operator=(const FReplicatedGrappleTetherData * __that) { return NativeCall<FReplicatedGrappleTetherData *, const FReplicatedGrappleTetherData *>(this, "FReplicatedGrappleTetherData.operator=", __that); }
};

