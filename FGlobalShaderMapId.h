#pragma once

#include "BaseDeclarations.h"
struct FGlobalShaderMapId
{
	char __padding[0x10L];

	// Functions

	void AppendKeyString(FString * KeyString) { NativeCall<void, FString *>(this, "FGlobalShaderMapId.AppendKeyString", KeyString); }
};

