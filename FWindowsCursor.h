#pragma once

#include "BaseDeclarations.h"
struct ICursor
{
	char __padding[0x8L];
};

struct FWindowsCursor : ICursor
{
	char __padding[0x78L];
	FieldArray<HICON__ *, 14> CursorHandlesField() { return {this, "FWindowsCursor.CursorHandles"}; }
	EMouseCursor::Type& LastCursorTypeField() { return *GetNativePointerField<EMouseCursor::Type*>(this, "FWindowsCursor.LastCursorType"); }
};

