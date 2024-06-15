#pragma once

#include "BaseDeclarations.h"
struct FStreamingHandlerTextureBase
{
	char __padding[0x10L];
	const wchar_t * HandlerNameField() { return GetNativePointerField<const wchar_t *>(this, "FStreamingHandlerTextureBase.HandlerName"); }
};

