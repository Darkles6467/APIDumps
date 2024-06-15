#pragma once

#include "BaseDeclarations.h"
struct ISlateStyle
{
	enum EStyleMessageSeverity
	{
		CriticalError = 0x0,
		Error = 0x1,
		PerformanceWarning = 0x2,
		Warning = 0x3,
		Info = 0x4,
	};

	char __padding[0x8L];

	// Functions

	static FName * Join(FName * result, FName A, const char * B) { return NativeCall<FName *, FName *, FName, const char *>(nullptr, "ISlateStyle.Join", result, A, B); }
};

