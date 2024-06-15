#pragma once

#include "BaseDeclarations.h"
#include "FNavigationModifier.h"

struct FCustomLinkNavModifier : FNavigationModifier
{
	char __padding[0x4cL];
	FTransform& LocalToWorldField() { return *GetNativePointerField<FTransform*>(this, "FCustomLinkNavModifier.LocalToWorld"); }
};

