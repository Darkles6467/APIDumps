#pragma once

#include "BaseDeclarations.h"
struct FGenericPlatformMemoryConstants
{
	char __padding[0x20L];
	unsigned __int64& TotalPhysicalField() { return *GetNativePointerField<unsigned __int64*>(this, "FGenericPlatformMemoryConstants.TotalPhysical"); }
	unsigned __int64& TotalVirtualField() { return *GetNativePointerField<unsigned __int64*>(this, "FGenericPlatformMemoryConstants.TotalVirtual"); }
	unsigned __int64& PageSizeField() { return *GetNativePointerField<unsigned __int64*>(this, "FGenericPlatformMemoryConstants.PageSize"); }
	unsigned int& TotalPhysicalGBField() { return *GetNativePointerField<unsigned int*>(this, "FGenericPlatformMemoryConstants.TotalPhysicalGB"); }
};

struct FGenericPlatformMemoryStats : FGenericPlatformMemoryConstants
{
	char __padding[0x30L];
	unsigned __int64& AvailablePhysicalField() { return *GetNativePointerField<unsigned __int64*>(this, "FGenericPlatformMemoryStats.AvailablePhysical"); }
	unsigned __int64& AvailableVirtualField() { return *GetNativePointerField<unsigned __int64*>(this, "FGenericPlatformMemoryStats.AvailableVirtual"); }
	unsigned __int64& UsedPhysicalField() { return *GetNativePointerField<unsigned __int64*>(this, "FGenericPlatformMemoryStats.UsedPhysical"); }
	unsigned __int64& PeakUsedPhysicalField() { return *GetNativePointerField<unsigned __int64*>(this, "FGenericPlatformMemoryStats.PeakUsedPhysical"); }
	unsigned __int64& UsedVirtualField() { return *GetNativePointerField<unsigned __int64*>(this, "FGenericPlatformMemoryStats.UsedVirtual"); }
	unsigned __int64& PeakUsedVirtualField() { return *GetNativePointerField<unsigned __int64*>(this, "FGenericPlatformMemoryStats.PeakUsedVirtual"); }

	// Functions

};

struct FPlatformMemoryStats : FGenericPlatformMemoryStats
{
	char __padding[0x8L];
	unsigned __int64& WindowsSpecificMemoryStatField() { return *GetNativePointerField<unsigned __int64*>(this, "FPlatformMemoryStats.WindowsSpecificMemoryStat"); }
};

