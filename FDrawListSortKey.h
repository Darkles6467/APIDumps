#pragma once

#include "BaseDeclarations.h"
struct FDrawListSortKey
{
	char __padding[0x8L];
	FDrawListSortKeyFields& FieldsField() { return *GetNativePointerField<FDrawListSortKeyFields*>(this, "FDrawListSortKey.Fields"); }
	unsigned __int64& PackedIntField() { return *GetNativePointerField<unsigned __int64*>(this, "FDrawListSortKey.PackedInt"); }
};

