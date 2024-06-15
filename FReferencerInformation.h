#pragma once

#include "BaseDeclarations.h"
struct FReferencerInformation
{
	char __padding[0x20L];
	int& TotalReferencesField() { return *GetNativePointerField<int*>(this, "FReferencerInformation.TotalReferences"); }
};

