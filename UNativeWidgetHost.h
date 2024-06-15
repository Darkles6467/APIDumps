#pragma once

#include "BaseDeclarations.h"
#include "UWidget.h"
#include "UVisual.h"
#include "UObject.h"
#include "UObjectBaseUtility.h"
#include "UObjectBase.h"

struct UNativeWidgetHost : UWidget
{
	char __padding[0x10L];

	// Functions

	void ReleaseSlateResources(bool bReleaseChildren) { NativeCall<void, bool>(this, "UNativeWidgetHost.ReleaseSlateResources", bReleaseChildren); }
};

