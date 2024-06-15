#pragma once

#include "BaseDeclarations.h"
struct FLogCategoryBase
{
	char __padding[0xcL];
	char& VerbosityField() { return *GetNativePointerField<char*>(this, "FLogCategoryBase.Verbosity"); }
	bool& DebugBreakOnLogField() { return *GetNativePointerField<bool*>(this, "FLogCategoryBase.DebugBreakOnLog"); }
	char& DefaultVerbosityField() { return *GetNativePointerField<char*>(this, "FLogCategoryBase.DefaultVerbosity"); }
	char& CompileTimeVerbosityField() { return *GetNativePointerField<char*>(this, "FLogCategoryBase.CompileTimeVerbosity"); }
	FName& CategoryFNameField() { return *GetNativePointerField<FName*>(this, "FLogCategoryBase.CategoryFName"); }
};

