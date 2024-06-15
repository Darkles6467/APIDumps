#pragma once

#include "BaseDeclarations.h"
struct FMessageLogInitializationOptions
{
	char __padding[0x8L];
	bool& bShowFiltersField() { return *GetNativePointerField<bool*>(this, "FMessageLogInitializationOptions.bShowFilters"); }
	bool& bShowPagesField() { return *GetNativePointerField<bool*>(this, "FMessageLogInitializationOptions.bShowPages"); }
	bool& bAllowClearField() { return *GetNativePointerField<bool*>(this, "FMessageLogInitializationOptions.bAllowClear"); }
	bool& bDiscardDuplicatesField() { return *GetNativePointerField<bool*>(this, "FMessageLogInitializationOptions.bDiscardDuplicates"); }
	unsigned int& MaxPageCountField() { return *GetNativePointerField<unsigned int*>(this, "FMessageLogInitializationOptions.MaxPageCount"); }
};

