#pragma once

#include "BaseDeclarations.h"
struct FFormatArgumentData
{
	char __padding[0x50L];
	FText& ArgumentNameField() { return *GetNativePointerField<FText*>(this, "FFormatArgumentData.ArgumentName"); }
	FText& ArgumentValueField() { return *GetNativePointerField<FText*>(this, "FFormatArgumentData.ArgumentValue"); }
};

