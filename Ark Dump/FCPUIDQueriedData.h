#pragma once

#include "BaseDeclarations.h"
struct FCPUIDQueriedData
{
	char __padding[0x30L];
	bool& bHasCPUIDInstructionField() { return *GetNativePointerField<bool*>(this, "FCPUIDQueriedData.bHasCPUIDInstruction"); }
	FString& VendorField() { return *GetNativePointerField<FString*>(this, "FCPUIDQueriedData.Vendor"); }
	FString& BrandField() { return *GetNativePointerField<FString*>(this, "FCPUIDQueriedData.Brand"); }
	unsigned int& CPUInfoField() { return *GetNativePointerField<unsigned int*>(this, "FCPUIDQueriedData.CPUInfo"); }
	int& CacheLineSizeField() { return *GetNativePointerField<int*>(this, "FCPUIDQueriedData.CacheLineSize"); }

	// Functions

	static bool CheckForCPUIDInstruction() { return NativeCall<bool>(nullptr, "FCPUIDQueriedData.CheckForCPUIDInstruction"); }
	static FString * QueryCPUBrand(FString * result) { return NativeCall<FString *, FString *>(nullptr, "FCPUIDQueriedData.QueryCPUBrand", result); }
	static FString * QueryCPUVendor(FString * result) { return NativeCall<FString *, FString *>(nullptr, "FCPUIDQueriedData.QueryCPUVendor", result); }
};

