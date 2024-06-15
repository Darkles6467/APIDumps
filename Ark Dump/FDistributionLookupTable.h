#pragma once

#include "BaseDeclarations.h"
struct FDistributionLookupTable
{
	char __padding[0x28L];
	char& OpField() { return *GetNativePointerField<char*>(this, "FDistributionLookupTable.Op"); }
	char& EntryCountField() { return *GetNativePointerField<char*>(this, "FDistributionLookupTable.EntryCount"); }
	char& EntryStrideField() { return *GetNativePointerField<char*>(this, "FDistributionLookupTable.EntryStride"); }
	char& SubEntryStrideField() { return *GetNativePointerField<char*>(this, "FDistributionLookupTable.SubEntryStride"); }
	float& TimeScaleField() { return *GetNativePointerField<float*>(this, "FDistributionLookupTable.TimeScale"); }
	float& TimeBiasField() { return *GetNativePointerField<float*>(this, "FDistributionLookupTable.TimeBias"); }
	TArray<float>& ValuesField() { return *GetNativePointerField<TArray<float>*>(this, "FDistributionLookupTable.Values"); }
	char& LockFlagField() { return *GetNativePointerField<char*>(this, "FDistributionLookupTable.LockFlag"); }

	// Functions

	void GetRange(float * OutMinValues, float * OutMaxValues) { NativeCall<void, float *, float *>(this, "FDistributionLookupTable.GetRange", OutMinValues, OutMaxValues); }
};

