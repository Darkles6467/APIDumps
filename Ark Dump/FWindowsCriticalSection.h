#pragma once

#include "BaseDeclarations.h"
struct FWindowsCriticalSection
{
	char __padding[0x28L];
	_RTL_CRITICAL_SECTION& CriticalSectionField() { return *GetNativePointerField<_RTL_CRITICAL_SECTION*>(this, "FWindowsCriticalSection.CriticalSection"); }

	// Functions

};

