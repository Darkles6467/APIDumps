#pragma once

#include "BaseDeclarations.h"
struct FBTCompositeChild
{
	char __padding[0x30L];
	TArray<FBTDecoratorLogic>& DecoratorOpsField() { return *GetNativePointerField<TArray<FBTDecoratorLogic>*>(this, "FBTCompositeChild.DecoratorOps"); }

	// Functions

};

