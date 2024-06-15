#pragma once

#include "BaseDeclarations.h"
#include "FComponentReregisterContextBase.h"

struct FMultiComponentReregisterContext : FComponentReregisterContextBase
{
	char __padding[0x10L];
	TArray<FMultiComponentReregisterPair>& ComponentsPairField() { return *GetNativePointerField<TArray<FMultiComponentReregisterPair>*>(this, "FMultiComponentReregisterContext.ComponentsPair"); }
};

