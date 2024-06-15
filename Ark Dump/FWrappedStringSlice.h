#pragma once

#include "BaseDeclarations.h"
struct FWrappedStringSlice
{
	char __padding[0x18L];
	FString * SourceStringField() { return GetNativePointerField<FString *>(this, "FWrappedStringSlice.SourceString"); }
	int& FirstCharIndexField() { return *GetNativePointerField<int*>(this, "FWrappedStringSlice.FirstCharIndex"); }
	int& LastCharIndexField() { return *GetNativePointerField<int*>(this, "FWrappedStringSlice.LastCharIndex"); }
	FVector2D& SizeField() { return *GetNativePointerField<FVector2D*>(this, "FWrappedStringSlice.Size"); }
};

