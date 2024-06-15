#pragma once

#include "BaseDeclarations.h"
struct FRigTransformConstraint
{
	char __padding[0x10L];
	TEnumAsByte<enum EConstraintTransform::Type>& TranformTypeField() { return *GetNativePointerField<TEnumAsByte<enum EConstraintTransform::Type>*>(this, "FRigTransformConstraint.TranformType"); }
	FName& ParentSpaceField() { return *GetNativePointerField<FName*>(this, "FRigTransformConstraint.ParentSpace"); }
	float& WeightField() { return *GetNativePointerField<float*>(this, "FRigTransformConstraint.Weight"); }

	// Functions

};

