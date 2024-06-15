#pragma once

#include "BaseDeclarations.h"
#include "FColor.h"

struct FComposableDistribution
{
	char __padding[0x28L];
	FDistributionLookupTable& LookupTableField() { return *GetNativePointerField<FDistributionLookupTable*>(this, "FComposableDistribution.LookupTable"); }

	// Functions

	static void BuildVector4(FVector4Distribution * OutDistribution, const FComposableFloatDistribution * X, const FComposableFloatDistribution * Y, const FComposableFloatDistribution * Z, const FComposableFloatDistribution * W) { NativeCall<void, FVector4Distribution *, const FComposableFloatDistribution *, const FComposableFloatDistribution *, const FComposableFloatDistribution *, const FComposableFloatDistribution *>(nullptr, "FComposableDistribution.BuildVector4", OutDistribution, X, Y, Z, W); }
	static void BuildVector4(FVector4Distribution * OutDistribution, const FComposableVectorDistribution * XY0, const FComposableFloatDistribution * Z, const FComposableFloatDistribution * W) { NativeCall<void, FVector4Distribution *, const FComposableVectorDistribution *, const FComposableFloatDistribution *, const FComposableFloatDistribution *>(nullptr, "FComposableDistribution.BuildVector4", OutDistribution, XY0, Z, W); }
	static void BuildVector4(FVector4Distribution * OutDistribution, const FComposableVectorDistribution * XYZ, const FComposableFloatDistribution * W) { NativeCall<void, FVector4Distribution *, const FComposableVectorDistribution *, const FComposableFloatDistribution *>(nullptr, "FComposableDistribution.BuildVector4", OutDistribution, XYZ, W); }
	static void BuildVector(FVectorDistribution * OutDistribution, const FComposableVectorDistribution * XYZ) { NativeCall<void, FVectorDistribution *, const FComposableVectorDistribution *>(nullptr, "FComposableDistribution.BuildVector", OutDistribution, XYZ); }
	static void QuantizeVector4(TArray<FColor> * OutQuantizedSamples, FVector4 * OutScale, FVector4 * OutBias, const FVector4Distribution * Distribution) { NativeCall<void, TArray<FColor> *, FVector4 *, FVector4 *, const FVector4Distribution *>(nullptr, "FComposableDistribution.QuantizeVector4", OutQuantizedSamples, OutScale, OutBias, Distribution); }
};

struct FComposableFloatDistribution : FComposableDistribution
{

	// Functions

	void Initialize(const UDistributionFloat * FloatDistribution) { NativeCall<void, const UDistributionFloat *>(this, "FComposableFloatDistribution.Initialize", FloatDistribution); }
	void InitializeWithConstant(float Value) { NativeCall<void, float>(this, "FComposableFloatDistribution.InitializeWithConstant", Value); }
	void Normalize(float * OutScale, float * OutBias) { NativeCall<void, float *, float *>(this, "FComposableFloatDistribution.Normalize", OutScale, OutBias); }
	void Resample(float MinIn, float MaxIn) { NativeCall<void, float, float>(this, "FComposableFloatDistribution.Resample", MinIn, MaxIn); }
	void ScaleByConstant(float Scale) { NativeCall<void, float>(this, "FComposableFloatDistribution.ScaleByConstant", Scale); }
	void ScaleByDistribution(const UDistributionFloat * FloatDistribution) { NativeCall<void, const UDistributionFloat *>(this, "FComposableFloatDistribution.ScaleByDistribution", FloatDistribution); }
};

