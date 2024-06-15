#pragma once

#include "BaseDeclarations.h"
struct LoadAssetReportEntry
{
	char __padding[0x18L];
	unsigned int& ObjectCountField() { return *GetNativePointerField<unsigned int*>(this, "LoadAssetReportEntry.ObjectCount"); }
	__int64& TotalHeaderBytesField() { return *GetNativePointerField<__int64*>(this, "LoadAssetReportEntry.TotalHeaderBytes"); }
	__int64& TotalDataBytesField() { return *GetNativePointerField<__int64*>(this, "LoadAssetReportEntry.TotalDataBytes"); }
};

