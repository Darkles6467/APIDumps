#pragma once

#include "BaseDeclarations.h"
#include "SCompoundWidget.h"
#include "SWidget.h"
#include "FSlateControlledConstruction.h"

struct SExpandableArea : SCompoundWidget
{
	char __padding[0x50L];
	FCurveSequence& RolloutCurveField() { return *GetNativePointerField<FCurveSequence*>(this, "SExpandableArea.RolloutCurve"); }
	float& MaxHeightField() { return *GetNativePointerField<float*>(this, "SExpandableArea.MaxHeight"); }
	bool& bAreaCollapsedField() { return *GetNativePointerField<bool*>(this, "SExpandableArea.bAreaCollapsed"); }
};

