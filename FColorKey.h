#pragma once

#include "BaseDeclarations.h"
struct FColorKey
{
	char __padding[0x1cL];
	FLinearColor& ValueField() { return *GetNativePointerField<FLinearColor*>(this, "FColorKey.Value"); }
	FName& CurveNameField() { return *GetNativePointerField<FName*>(this, "FColorKey.CurveName"); }
	bool& bAddKeyEvenIfUnchangedField() { return *GetNativePointerField<bool*>(this, "FColorKey.bAddKeyEvenIfUnchanged"); }
};

