#pragma once

#include "BaseDeclarations.h"
struct FExtendedFileInfo
{
	char __padding[0x28L];
	__int64& OffsetField() { return *GetNativePointerField<__int64*>(this, "FExtendedFileInfo.Offset"); }
	__int64& SizeField() { return *GetNativePointerField<__int64*>(this, "FExtendedFileInfo.Size"); }
	__int64& ActualSizeField() { return *GetNativePointerField<__int64*>(this, "FExtendedFileInfo.ActualSize"); }
	FString& FileNameField() { return *GetNativePointerField<FString*>(this, "FExtendedFileInfo.FileName"); }
};

