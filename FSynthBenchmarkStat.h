#pragma once

#include "BaseDeclarations.h"
struct FSynthBenchmarkStat
{
	char __padding[0x28L];
	const wchar_t * DescField() { return GetNativePointerField<const wchar_t *>(this, "FSynthBenchmarkStat.Desc"); }
	float& MeasuredTotalTimeField() { return *GetNativePointerField<float*>(this, "FSynthBenchmarkStat.MeasuredTotalTime"); }
	float& MeasuredNormalizedTimeField() { return *GetNativePointerField<float*>(this, "FSynthBenchmarkStat.MeasuredNormalizedTime"); }
	float& IndexNormalizedTimeField() { return *GetNativePointerField<float*>(this, "FSynthBenchmarkStat.IndexNormalizedTime"); }
	const wchar_t * ValueTypeField() { return GetNativePointerField<const wchar_t *>(this, "FSynthBenchmarkStat.ValueType"); }
	float& ConfidenceField() { return *GetNativePointerField<float*>(this, "FSynthBenchmarkStat.Confidence"); }
};

