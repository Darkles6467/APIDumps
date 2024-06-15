#pragma once

#include "BaseDeclarations.h"
struct FFieldCompiledInInfo
{
	char __padding[0x28L];
	unsigned __int64& SizeField() { return *GetNativePointerField<unsigned __int64*>(this, "FFieldCompiledInInfo.Size"); }
	unsigned int& CrcField() { return *GetNativePointerField<unsigned int*>(this, "FFieldCompiledInInfo.Crc"); }
	bool& bHasChangedField() { return *GetNativePointerField<bool*>(this, "FFieldCompiledInInfo.bHasChanged"); }

	// Functions

};

