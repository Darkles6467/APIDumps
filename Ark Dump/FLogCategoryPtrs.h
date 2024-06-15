#pragma once

#include "BaseDeclarations.h"
struct FLogCategoryPtrs
{
	char __padding[0x18L];
	FString& NameField() { return *GetNativePointerField<FString*>(this, "FLogCategoryPtrs.Name"); }
	ELogVerbosity::Type& VerbosityField() { return *GetNativePointerField<ELogVerbosity::Type*>(this, "FLogCategoryPtrs.Verbosity"); }
	bool& PostfixField() { return *GetNativePointerField<bool*>(this, "FLogCategoryPtrs.Postfix"); }
};

