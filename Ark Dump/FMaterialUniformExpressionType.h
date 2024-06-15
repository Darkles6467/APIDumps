#pragma once

#include "BaseDeclarations.h"
struct FMaterialUniformExpressionType
{
	char __padding[0x10L];
	const wchar_t * NameField() { return GetNativePointerField<const wchar_t *>(this, "FMaterialUniformExpressionType.Name"); }

	// Functions

};

