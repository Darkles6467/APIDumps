#pragma once

#include "BaseDeclarations.h"
struct FInitStaticResourceRenderThreadTask
{
	char __padding[0x10L];
	FScopedEvent * EventField() { return GetNativePointerField<FScopedEvent *>(this, "FInitStaticResourceRenderThreadTask.Event"); }
};

