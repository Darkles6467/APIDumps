#pragma once

#include "BaseDeclarations.h"
struct UParseError
{
	char __padding[0x48L];
	int& lineField() { return *GetNativePointerField<int*>(this, "UParseError.line"); }
	int& offsetField() { return *GetNativePointerField<int*>(this, "UParseError.offset"); }
	FieldArray<wchar_t, 16> preContextField() { return {this, "UParseError.preContext"}; }
	FieldArray<wchar_t, 16> postContextField() { return {this, "UParseError.postContext"}; }
};

