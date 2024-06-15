#pragma once

#include "BaseDeclarations.h"
struct F2DTransformKey
{
	char __padding[0x28L];
	FWidgetTransform& ValueField() { return *GetNativePointerField<FWidgetTransform*>(this, "F2DTransformKey.Value"); }
	FName& CurveNameField() { return *GetNativePointerField<FName*>(this, "F2DTransformKey.CurveName"); }
	bool& bAddKeyEvenIfUnchangedField() { return *GetNativePointerField<bool*>(this, "F2DTransformKey.bAddKeyEvenIfUnchanged"); }
};

