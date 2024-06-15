#pragma once

#include "BaseDeclarations.h"
struct FGlobalComponentReregisterContext
{
	char __padding[0x10L];
	TIndirectArray<FComponentReregisterContext>& ComponentContextsField() { return *GetNativePointerField<TIndirectArray<FComponentReregisterContext>*>(this, "FGlobalComponentReregisterContext.ComponentContexts"); }

	// Functions

};

