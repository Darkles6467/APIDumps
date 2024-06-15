#pragma once

#include "BaseDeclarations.h"
struct FCharacterList
{
	char __padding[0x128L];
	TArray<FCharacterEntry>& DirectIndexEntriesField() { return *GetNativePointerField<TArray<FCharacterEntry>*>(this, "FCharacterList.DirectIndexEntries"); }
	FKerningTable& KerningTableField() { return *GetNativePointerField<FKerningTable*>(this, "FCharacterList.KerningTable"); }
	FSlateFontKey& FontKeyField() { return *GetNativePointerField<FSlateFontKey*>(this, "FCharacterList.FontKey"); }
	const FSlateFontCache * FontCacheField() { return GetNativePointerField<const FSlateFontCache *>(this, "FCharacterList.FontCache"); }
	int& MaxDirectIndexedEntriesField() { return *GetNativePointerField<int*>(this, "FCharacterList.MaxDirectIndexedEntries"); }
	unsigned __int16& MaxHeightField() { return *GetNativePointerField<unsigned __int16*>(this, "FCharacterList.MaxHeight"); }
	unsigned __int16& BaselineField() { return *GetNativePointerField<unsigned __int16*>(this, "FCharacterList.Baseline"); }

	// Functions

	const FCharacterEntry * operator[](wchar_t Character) { return NativeCall<const FCharacterEntry *, wchar_t>(this, "FCharacterList.operator[]", Character); }
	FCharacterEntry * CacheCharacter(wchar_t Character) { return NativeCall<FCharacterEntry *, wchar_t>(this, "FCharacterList.CacheCharacter", Character); }
	char GetKerning(wchar_t First, wchar_t Second) { return NativeCall<char, wchar_t, wchar_t>(this, "FCharacterList.GetKerning", First, Second); }
	unsigned __int16 GetMaxHeight() { return NativeCall<unsigned __int16>(this, "FCharacterList.GetMaxHeight"); }
};

