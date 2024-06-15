#pragma once

#include "BaseDeclarations.h"
struct FExpressionOutput
{
	char __padding[0x28L];
	FString& OutputNameField() { return *GetNativePointerField<FString*>(this, "FExpressionOutput.OutputName"); }
	int& MaskField() { return *GetNativePointerField<int*>(this, "FExpressionOutput.Mask"); }
	int& MaskRField() { return *GetNativePointerField<int*>(this, "FExpressionOutput.MaskR"); }
	int& MaskGField() { return *GetNativePointerField<int*>(this, "FExpressionOutput.MaskG"); }
	int& MaskBField() { return *GetNativePointerField<int*>(this, "FExpressionOutput.MaskB"); }
	int& MaskAField() { return *GetNativePointerField<int*>(this, "FExpressionOutput.MaskA"); }
};

