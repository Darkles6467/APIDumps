#pragma once

#include "BaseDeclarations.h"
struct FSlateFontCache
{
	char __padding[0x90L];
	TSharedRef<FFreeTypeInterface,0>& FTInterfaceField() { return *GetNativePointerField<TSharedRef<FFreeTypeInterface,0>*>(this, "FSlateFontCache.FTInterface"); }
	TArray<TSharedRef<FSlateFontAtlas,0>>& FontAtlasesField() { return *GetNativePointerField<TArray<TSharedRef<FSlateFontAtlas,0>>*>(this, "FSlateFontCache.FontAtlases"); }
	TSharedRef<ISlateFontAtlasFactory,0>& FontAtlasFactoryField() { return *GetNativePointerField<TSharedRef<ISlateFontAtlasFactory,0>*>(this, "FSlateFontCache.FontAtlasFactory"); }
	bool& bFlushRequestedField() { return *GetNativePointerField<bool*>(this, "FSlateFontCache.bFlushRequested"); }

	// Functions

	bool AddNewEntry(wchar_t Character, const FSlateFontKey * InKey, FCharacterEntry * OutCharacterEntry) { return NativeCall<bool, wchar_t, const FSlateFontKey *, FCharacterEntry *>(this, "FSlateFontCache.AddNewEntry", Character, InKey, OutCharacterEntry); }
	unsigned __int16 GetBaseline(const FSlateFontInfo * InFontInfo, float FontScale) { return NativeCall<unsigned __int16, const FSlateFontInfo *, float>(this, "FSlateFontCache.GetBaseline", InFontInfo, FontScale); }
	FCharacterList * GetCharacterList(const FSlateFontInfo * InFontInfo, float FontScale) { return NativeCall<FCharacterList *, const FSlateFontInfo *, float>(this, "FSlateFontCache.GetCharacterList", InFontInfo, FontScale); }
	char GetKerning(wchar_t First, wchar_t Second, const FSlateFontKey * FontKey) { return NativeCall<char, wchar_t, wchar_t, const FSlateFontKey *>(this, "FSlateFontCache.GetKerning", First, Second, FontKey); }
	unsigned __int16 GetMaxCharacterHeight(const FSlateFontInfo * InFontInfo, float FontScale) { return NativeCall<unsigned __int16, const FSlateFontInfo *, float>(this, "FSlateFontCache.GetMaxCharacterHeight", InFontInfo, FontScale); }
	void UpdateCache() { NativeCall<void>(this, "FSlateFontCache.UpdateCache"); }
};

