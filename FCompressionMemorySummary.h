#pragma once

#include "BaseDeclarations.h"
struct FCompressionMemorySummary
{
	char __padding[0x38L];
	bool& bEnabledField() { return *GetNativePointerField<bool*>(this, "FCompressionMemorySummary.bEnabled"); }
	int& TotalRawField() { return *GetNativePointerField<int*>(this, "FCompressionMemorySummary.TotalRaw"); }
	int& TotalBeforeCompressedField() { return *GetNativePointerField<int*>(this, "FCompressionMemorySummary.TotalBeforeCompressed"); }
	int& TotalAfterCompressedField() { return *GetNativePointerField<int*>(this, "FCompressionMemorySummary.TotalAfterCompressed"); }
	float& ErrorTotalField() { return *GetNativePointerField<float*>(this, "FCompressionMemorySummary.ErrorTotal"); }
	float& ErrorCountField() { return *GetNativePointerField<float*>(this, "FCompressionMemorySummary.ErrorCount"); }
	float& AverageErrorField() { return *GetNativePointerField<float*>(this, "FCompressionMemorySummary.AverageError"); }
	float& MaxErrorField() { return *GetNativePointerField<float*>(this, "FCompressionMemorySummary.MaxError"); }
	float& MaxErrorTimeField() { return *GetNativePointerField<float*>(this, "FCompressionMemorySummary.MaxErrorTime"); }
	int& MaxErrorBoneField() { return *GetNativePointerField<int*>(this, "FCompressionMemorySummary.MaxErrorBone"); }
	FName& MaxErrorBoneNameField() { return *GetNativePointerField<FName*>(this, "FCompressionMemorySummary.MaxErrorBoneName"); }
	FName& MaxErrorAnimNameField() { return *GetNativePointerField<FName*>(this, "FCompressionMemorySummary.MaxErrorAnimName"); }
};

