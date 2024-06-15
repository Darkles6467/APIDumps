#pragma once

#include "BaseDeclarations.h"
struct FScopedDebugInfo
{
	char __padding[0x18L];
	const int& NumReplacedOuterCallsField() { return *GetNativePointerField<const int*>(this, "FScopedDebugInfo.NumReplacedOuterCalls"); }
	FScopedDebugInfo *const& NextOuterInfoField() { return *GetNativePointerField<FScopedDebugInfo *const*>(this, "FScopedDebugInfo.NextOuterInfo"); }

	// Functions

};

