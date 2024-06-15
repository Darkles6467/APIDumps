#pragma once

#include "BaseDeclarations.h"
struct FCursorReply
{
	char __padding[0x8L];
	bool& bIsHandledField() { return *GetNativePointerField<bool*>(this, "FCursorReply.bIsHandled"); }
	EMouseCursor::Type& MouseCursorField() { return *GetNativePointerField<EMouseCursor::Type*>(this, "FCursorReply.MouseCursor"); }
};

