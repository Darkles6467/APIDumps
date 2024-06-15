#pragma once

#include "BaseDeclarations.h"
struct FCsvParser
{
	enum EParseResult
	{
		EndOfCell = 0x0,
		EndOfRow = 0x1,
		EndOfString = 0x2,
	};

	char __padding[0x30L];
	FString& SourceStringField() { return *GetNativePointerField<FString*>(this, "FCsvParser.SourceString"); }
	wchar_t * BufferStartField() { return GetNativePointerField<wchar_t *>(this, "FCsvParser.BufferStart"); }
	const wchar_t * ReadAtField() { return GetNativePointerField<const wchar_t *>(this, "FCsvParser.ReadAt"); }
	TArray<TArray<wchar_t const *>>& RowsField() { return *GetNativePointerField<TArray<TArray<wchar_t const *>>*>(this, "FCsvParser.Rows"); }
};

