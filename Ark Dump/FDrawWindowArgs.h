#pragma once

#include "BaseDeclarations.h"
struct FDrawWindowArgs
{
	char __padding[0x78L];
	FSlateDrawBuffer * OutDrawBufferField() { return GetNativePointerField<FSlateDrawBuffer *>(this, "FDrawWindowArgs.OutDrawBuffer"); }
	const FWidgetPath * FocusedPathField() { return GetNativePointerField<const FWidgetPath *>(this, "FDrawWindowArgs.FocusedPath"); }
	const FWidgetPath * WidgetsUnderCursorField() { return GetNativePointerField<const FWidgetPath *>(this, "FDrawWindowArgs.WidgetsUnderCursor"); }
};

