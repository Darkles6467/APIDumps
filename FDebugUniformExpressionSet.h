#pragma once

#include "BaseDeclarations.h"
struct FDebugUniformExpressionSet
{
	char __padding[0x10L];
	int& NumVectorExpressionsField() { return *GetNativePointerField<int*>(this, "FDebugUniformExpressionSet.NumVectorExpressions"); }
	int& NumScalarExpressionsField() { return *GetNativePointerField<int*>(this, "FDebugUniformExpressionSet.NumScalarExpressions"); }
	int& Num2DTextureExpressionsField() { return *GetNativePointerField<int*>(this, "FDebugUniformExpressionSet.Num2DTextureExpressions"); }
	int& NumCubeTextureExpressionsField() { return *GetNativePointerField<int*>(this, "FDebugUniformExpressionSet.NumCubeTextureExpressions"); }
};

