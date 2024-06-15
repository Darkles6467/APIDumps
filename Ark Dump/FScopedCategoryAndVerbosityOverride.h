#pragma once

#include "BaseDeclarations.h"
struct FScopedCategoryAndVerbosityOverride
{
	char __padding[0xcL];
	FScopedCategoryAndVerbosityOverride::FOverride& BackupField() { return *GetNativePointerField<FScopedCategoryAndVerbosityOverride::FOverride*>(this, "FScopedCategoryAndVerbosityOverride.Backup"); }

	// Functions

	static FScopedCategoryAndVerbosityOverride::FOverride * GetTLSCurrent() { return NativeCall<FScopedCategoryAndVerbosityOverride::FOverride *>(nullptr, "FScopedCategoryAndVerbosityOverride.GetTLSCurrent"); }
};

