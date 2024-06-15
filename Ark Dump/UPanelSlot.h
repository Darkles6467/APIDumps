#pragma once

#include "BaseDeclarations.h"
#include "UVisual.h"

struct UPanelSlot : UVisual
{
	char __padding[0x10L];

	// Functions

	void ReleaseSlateResources(bool bReleaseChildren) { NativeCall<void, bool>(this, "UPanelSlot.ReleaseSlateResources", bReleaseChildren); }
};

