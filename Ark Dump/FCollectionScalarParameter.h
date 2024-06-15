#pragma once

#include "BaseDeclarations.h"
struct FCollectionParameterBase
{
	char __padding[0x18L];
	FName& ParameterNameField() { return *GetNativePointerField<FName*>(this, "FCollectionParameterBase.ParameterName"); }
	FGuid& IdField() { return *GetNativePointerField<FGuid*>(this, "FCollectionParameterBase.Id"); }

	// Functions

};

struct FCollectionScalarParameter : FCollectionParameterBase
{
	char __padding[0x4L];
	float& DefaultValueField() { return *GetNativePointerField<float*>(this, "FCollectionScalarParameter.DefaultValue"); }

	// Functions

};

