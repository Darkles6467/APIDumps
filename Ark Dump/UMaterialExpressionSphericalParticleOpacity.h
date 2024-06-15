#pragma once

#include "BaseDeclarations.h"
#include "UMaterialExpression.h"
#include "UObject.h"
#include "UObjectBaseUtility.h"
#include "UObjectBase.h"

struct UMaterialExpressionSphericalParticleOpacity : UMaterialExpression
{
	char __padding[0x40L];
	FExpressionInput& DensityField() { return *GetNativePointerField<FExpressionInput*>(this, "UMaterialExpressionSphericalParticleOpacity.Density"); }
	float& ConstantDensityField() { return *GetNativePointerField<float*>(this, "UMaterialExpressionSphericalParticleOpacity.ConstantDensity"); }

	// Functions

	int Compile(FMaterialCompiler * Compiler, int OutputIndex, int MultiplexIndex) { return NativeCall<int, FMaterialCompiler *, int, int>(this, "UMaterialExpressionSphericalParticleOpacity.Compile", Compiler, OutputIndex, MultiplexIndex); }
	void GetCaption(TArray<FString> * OutCaptions) { NativeCall<void, TArray<FString> *>(this, "UMaterialExpressionSphericalParticleOpacity.GetCaption", OutCaptions); }
};

