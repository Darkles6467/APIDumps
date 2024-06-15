#pragma once

#include "BaseDeclarations.h"
#include "SCompoundWidget.h"
#include "SWidget.h"
#include "FSlateControlledConstruction.h"

struct SDPIScalingTest : SCompoundWidget
{
	char __padding[0x10L];
	float& DPIScaleField() { return *GetNativePointerField<float*>(this, "SDPIScalingTest.DPIScale"); }
	SVerticalBox::FSlot * ScalerSlotField() { return GetNativePointerField<SVerticalBox::FSlot *>(this, "SDPIScalingTest.ScalerSlot"); }
};

