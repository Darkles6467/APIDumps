#pragma once

#include "BaseDeclarations.h"
#include "IFileHandle.h"

struct FSandboxFileHandle : IFileHandle
{
	char __padding[0x18L];
	FString& FilenameField() { return *GetNativePointerField<FString*>(this, "FSandboxFileHandle.Filename"); }
};

