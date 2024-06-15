#pragma once

#include "BaseDeclarations.h"
struct FLogScopedVerbosityOverride
{
	char __padding[0x10L];
	FLogCategoryBase * SavedCategoryField() { return GetNativePointerField<FLogCategoryBase *>(this, "FLogScopedVerbosityOverride.SavedCategory"); }
	ELogVerbosity::Type& SavedVerbosityField() { return *GetNativePointerField<ELogVerbosity::Type*>(this, "FLogScopedVerbosityOverride.SavedVerbosity"); }
};

