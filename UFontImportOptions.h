#pragma once

#include "BaseDeclarations.h"
#include "UObject.h"
#include "UObjectBaseUtility.h"
#include "UObjectBase.h"

struct UFontImportOptions : UObject
{
	char __padding[0xb0L];
	FFontImportOptionsData& DataField() { return *GetNativePointerField<FFontImportOptionsData*>(this, "UFontImportOptions.Data"); }

	// Functions

};

