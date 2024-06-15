#pragma once

#include "BaseDeclarations.h"
#include "SCompoundWidget.h"
#include "SWidget.h"
#include "FSlateControlledConstruction.h"

struct SElementTesting : SCompoundWidget
{
	char __padding[0x20L];
	TSharedPtr<SVerticalBox,0>& VerticalBoxField() { return *GetNativePointerField<TSharedPtr<SVerticalBox,0>*>(this, "SElementTesting.VerticalBox"); }
	float& FontScaleField() { return *GetNativePointerField<float*>(this, "SElementTesting.FontScale"); }
	float& CenterRotationField() { return *GetNativePointerField<float*>(this, "SElementTesting.CenterRotation"); }
	float& OuterRotationField() { return *GetNativePointerField<float*>(this, "SElementTesting.OuterRotation"); }
};

