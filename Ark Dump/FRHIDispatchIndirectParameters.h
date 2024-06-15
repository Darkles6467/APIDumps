#pragma once

#include "BaseDeclarations.h"
struct FRHIDispatchIndirectParameters
{
	char __padding[0xcL];
	unsigned int& ThreadGroupCountXField() { return *GetNativePointerField<unsigned int*>(this, "FRHIDispatchIndirectParameters.ThreadGroupCountX"); }
	unsigned int& ThreadGroupCountYField() { return *GetNativePointerField<unsigned int*>(this, "FRHIDispatchIndirectParameters.ThreadGroupCountY"); }
	unsigned int& ThreadGroupCountZField() { return *GetNativePointerField<unsigned int*>(this, "FRHIDispatchIndirectParameters.ThreadGroupCountZ"); }
};

