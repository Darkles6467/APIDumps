#pragma once

#include "BaseDeclarations.h"
struct FSimpleLightInstacePerViewIndexData
{
	char __padding[0x8L];
	unsigned int& bHasPerViewDataField() { return *GetNativePointerField<unsigned int*>(this, "FSimpleLightInstacePerViewIndexData.bHasPerViewData"); }
};

