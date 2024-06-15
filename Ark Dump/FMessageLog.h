#pragma once

#include "BaseDeclarations.h"
struct FMessageLog
{
	char __padding[0x20L];

	// Functions

	void Open(EMessageSeverity::Type InSeverityFilter, bool bOpenEvenIfEmpty) { NativeCall<void, EMessageSeverity::Type, bool>(this, "FMessageLog.Open", InSeverityFilter, bOpenEvenIfEmpty); }
};

