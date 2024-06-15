#pragma once

#include "BaseDeclarations.h"
struct INavRelevantInterface
{
	char __padding[0x8L];

	// Functions

	FBox * GetNavigationBounds(FBox * result) { return NativeCall<FBox *, FBox *>(this, "INavRelevantInterface.GetNavigationBounds", result); }
};

