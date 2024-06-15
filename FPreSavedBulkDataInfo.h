#pragma once

#include "BaseDeclarations.h"
struct FPreSavedBulkDataInfo
{
	char __padding[0x20L];
	__int64& SizeOnDiskField() { return *GetNativePointerField<__int64*>(this, "FPreSavedBulkDataInfo.SizeOnDisk"); }
	__int64& OffsetOnDiskField() { return *GetNativePointerField<__int64*>(this, "FPreSavedBulkDataInfo.OffsetOnDisk"); }
	FString& FileNameField() { return *GetNativePointerField<FString*>(this, "FPreSavedBulkDataInfo.FileName"); }

	// Functions

};

