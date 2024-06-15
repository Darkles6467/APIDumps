#pragma once

#include "BaseDeclarations.h"
struct FKerningTable
{
	char __padding[0x90L];
	char * DirectAccessTableField() { return GetNativePointerField<char *>(this, "FKerningTable.DirectAccessTable"); }
	const FSlateFontCache * FontCacheField() { return GetNativePointerField<const FSlateFontCache *>(this, "FKerningTable.FontCache"); }
	FSlateFontKey& FontKeyField() { return *GetNativePointerField<FSlateFontKey*>(this, "FKerningTable.FontKey"); }
	bool& bHasKerningField() { return *GetNativePointerField<bool*>(this, "FKerningTable.bHasKerning"); }

	// Functions

	void CreateDirectTable() { NativeCall<void>(this, "FKerningTable.CreateDirectTable"); }
	char GetKerning(wchar_t FirstChar, wchar_t SecondChar) { return NativeCall<char, wchar_t, wchar_t>(this, "FKerningTable.GetKerning", FirstChar, SecondChar); }
};

