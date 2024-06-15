#pragma once

#include "BaseDeclarations.h"
struct FMessageDeserializeTask
{
	char __padding[0x20L];
	ENamedThreads::Type& ThreadField() { return *GetNativePointerField<ENamedThreads::Type*>(this, "FMessageDeserializeTask.Thread"); }
};

