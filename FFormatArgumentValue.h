#pragma once

#include "BaseDeclarations.h"
struct FFormatArgumentValue
{
	char __padding[0x10L];
	EFormatArgumentType::Type& TypeField() { return *GetNativePointerField<EFormatArgumentType::Type*>(this, "FFormatArgumentValue.Type"); }

	// Functions

};

