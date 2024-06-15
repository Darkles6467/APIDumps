#pragma once

#include "BaseDeclarations.h"
#include "UMaterialExpression.h"
#include "UObject.h"
#include "UObjectBaseUtility.h"
#include "UObjectBase.h"

struct UMaterialExpressionLightmassReplace : UMaterialExpression
{
	char __padding[0x70L];
	FExpressionInput& RealtimeField() { return *GetNativePointerField<FExpressionInput*>(this, "UMaterialExpressionLightmassReplace.Realtime"); }
	FExpressionInput& LightmassField() { return *GetNativePointerField<FExpressionInput*>(this, "UMaterialExpressionLightmassReplace.Lightmass"); }

	// Functions

	int Compile(FMaterialCompiler * Compiler, int OutputIndex, int MultiplexIndex) { return NativeCall<int, FMaterialCompiler *, int, int>(this, "UMaterialExpressionLightmassReplace.Compile", Compiler, OutputIndex, MultiplexIndex); }
	void GetCaption(TArray<FString> * OutCaptions) { NativeCall<void, TArray<FString> *>(this, "UMaterialExpressionLightmassReplace.GetCaption", OutCaptions); }
};

