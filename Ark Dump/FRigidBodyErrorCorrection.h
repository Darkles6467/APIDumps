#pragma once

#include "BaseDeclarations.h"
struct FRigidBodyErrorCorrection
{
	char __padding[0x1cL];
	float& LinearDeltaThresholdSqField() { return *GetNativePointerField<float*>(this, "FRigidBodyErrorCorrection.LinearDeltaThresholdSq"); }
	float& LinearInterpAlphaField() { return *GetNativePointerField<float*>(this, "FRigidBodyErrorCorrection.LinearInterpAlpha"); }
	float& LinearRecipFixTimeField() { return *GetNativePointerField<float*>(this, "FRigidBodyErrorCorrection.LinearRecipFixTime"); }
	float& AngularDeltaThresholdField() { return *GetNativePointerField<float*>(this, "FRigidBodyErrorCorrection.AngularDeltaThreshold"); }
	float& AngularInterpAlphaField() { return *GetNativePointerField<float*>(this, "FRigidBodyErrorCorrection.AngularInterpAlpha"); }
	float& AngularRecipFixTimeField() { return *GetNativePointerField<float*>(this, "FRigidBodyErrorCorrection.AngularRecipFixTime"); }
	float& BodySpeedThresholdSqField() { return *GetNativePointerField<float*>(this, "FRigidBodyErrorCorrection.BodySpeedThresholdSq"); }

	// Functions

};

