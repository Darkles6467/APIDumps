#pragma once

#include "BaseDeclarations.h"
struct FMarginKey
{
	char __padding[0x1cL];
	FMargin& ValueField() { return *GetNativePointerField<FMargin*>(this, "FMarginKey.Value"); }
	FName& CurveNameField() { return *GetNativePointerField<FName*>(this, "FMarginKey.CurveName"); }
	bool& bAddKeyEvenIfUnchangedField() { return *GetNativePointerField<bool*>(this, "FMarginKey.bAddKeyEvenIfUnchanged"); }
};

