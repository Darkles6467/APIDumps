#pragma once

#include "BaseDeclarations.h"
struct FPathPair
{
	char __padding[0x20L];
	const FString& RootPathField() { return *GetNativePointerField<const FString*>(this, "FPathPair.RootPath"); }
	const FString& ContentPathField() { return *GetNativePointerField<const FString*>(this, "FPathPair.ContentPath"); }
};

