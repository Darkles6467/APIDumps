#pragma once

#include "BaseDeclarations.h"
#include "SCompoundWidget.h"
#include "SWidget.h"
#include "FSlateControlledConstruction.h"

struct SColorTrash : SCompoundWidget
{
	char __padding[0x8L];
	bool& bBorderActivatedField() { return *GetNativePointerField<bool*>(this, "SColorTrash.bBorderActivated"); }
};

