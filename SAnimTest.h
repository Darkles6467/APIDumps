#pragma once

#include "BaseDeclarations.h"
#include "SCompoundWidget.h"
#include "SWidget.h"
#include "FSlateControlledConstruction.h"

struct SAnimTest : SCompoundWidget
{
	char __padding[0x48L];
	float& AnimTimeField() { return *GetNativePointerField<float*>(this, "SAnimTest.AnimTime"); }
	FCurveSequence& SpawnAnimationField() { return *GetNativePointerField<FCurveSequence*>(this, "SAnimTest.SpawnAnimation"); }
	FCurveHandle& ZoomCurveField() { return *GetNativePointerField<FCurveHandle*>(this, "SAnimTest.ZoomCurve"); }
	FCurveHandle& FadeCurveField() { return *GetNativePointerField<FCurveHandle*>(this, "SAnimTest.FadeCurve"); }
};

