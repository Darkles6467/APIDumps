#pragma once

#include "BaseDeclarations.h"
#include "SWidget.h"

struct FSlotBase
{
	char __padding[0x18L];

	// Functions

	void AttachWidget(const TSharedRef<SWidget,0> * InWidget) { NativeCall<void, const TSharedRef<SWidget,0> *>(this, "FSlotBase.AttachWidget", InWidget); }
};

