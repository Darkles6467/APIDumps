#pragma once

#include "BaseDeclarations.h"
struct UserWidget_eventOnPaint_Parms
{
	char __padding[0x30L];
	FPaintContext& ContextField() { return *GetNativePointerField<FPaintContext*>(this, "UserWidget_eventOnPaint_Parms.Context"); }
};

