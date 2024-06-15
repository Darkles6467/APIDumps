#pragma once

#include "BaseDeclarations.h"
struct FFileInfo
{
	char __padding[0x20L];
	bool& FileExistsField() { return *GetNativePointerField<bool*>(this, "FFileInfo.FileExists"); }
	bool& ReadOnlyField() { return *GetNativePointerField<bool*>(this, "FFileInfo.ReadOnly"); }
	FDateTime& TimeStampField() { return *GetNativePointerField<FDateTime*>(this, "FFileInfo.TimeStamp"); }
	FDateTime& AccessTimeStampField() { return *GetNativePointerField<FDateTime*>(this, "FFileInfo.AccessTimeStamp"); }
	__int64& SizeField() { return *GetNativePointerField<__int64*>(this, "FFileInfo.Size"); }
};

