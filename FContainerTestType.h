#pragma once

#include "BaseDeclarations.h"
struct FContainerTestType
{
	char __padding[0x10L];
	const wchar_t * StrField() { return GetNativePointerField<const wchar_t *>(this, "FContainerTestType.Str"); }
	EContainerTestType::Type& TypeField() { return *GetNativePointerField<EContainerTestType::Type*>(this, "FContainerTestType.Type"); }
	int& IdField() { return *GetNativePointerField<int*>(this, "FContainerTestType.Id"); }
};

