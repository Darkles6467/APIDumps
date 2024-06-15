#pragma once

#include "BaseDeclarations.h"
#include "UWidget.h"
#include "UVisual.h"
#include "UObject.h"
#include "UObjectBaseUtility.h"
#include "UObjectBase.h"

struct UComboBox : UWidget
{
	char __padding[0x30L];

	// Functions

	void ReleaseSlateResources(bool bReleaseChildren) { NativeCall<void, bool>(this, "UComboBox.ReleaseSlateResources", bReleaseChildren); }
};

