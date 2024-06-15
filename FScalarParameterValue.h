#pragma once

#include "BaseDeclarations.h"
struct FScalarParameterValue
{
	char __padding[0x1cL];
	FName& ParameterNameField() { return *GetNativePointerField<FName*>(this, "FScalarParameterValue.ParameterName"); }
	float& ParameterValueField() { return *GetNativePointerField<float*>(this, "FScalarParameterValue.ParameterValue"); }
	FGuid& ExpressionGUIDField() { return *GetNativePointerField<FGuid*>(this, "FScalarParameterValue.ExpressionGUID"); }

	// Functions

};

