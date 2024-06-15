#pragma once

#include "BaseDeclarations.h"
struct FQueryVisualizeTexureInfo
{
	char __padding[0x10L];
	TArray<FString>& EntriesField() { return *GetNativePointerField<TArray<FString>*>(this, "FQueryVisualizeTexureInfo.Entries"); }
};

