#pragma once

#include "BaseDeclarations.h"
struct FWindowsOSVersionHelper
{
	enum ErrorCodes
	{
		SUCCEEDED = 0x0,
		ERROR_UNKNOWNVERSION = 0x1,
		ERROR_GETPRODUCTINFO_FAILED = 0x2,
		ERROR_GETVERSIONEX_FAILED = 0x4,
	};


	// Functions

	static int GetOSVersions(FString * out_OSVersionLabel, FString * out_OSSubVersionLabel) { return NativeCall<int, FString *, FString *>(nullptr, "FWindowsOSVersionHelper.GetOSVersions", out_OSVersionLabel, out_OSSubVersionLabel); }
};

