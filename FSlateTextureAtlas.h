#pragma once

#include "BaseDeclarations.h"
struct FSlateTextureAtlas
{
	char __padding[0x38L];
	TArray<unsigned char>& AtlasDataField() { return *GetNativePointerField<TArray<unsigned char>*>(this, "FSlateTextureAtlas.AtlasData"); }
	FAtlasedTextureSlot * RootNodeField() { return GetNativePointerField<FAtlasedTextureSlot *>(this, "FSlateTextureAtlas.RootNode"); }
	unsigned int& AtlasWidthField() { return *GetNativePointerField<unsigned int*>(this, "FSlateTextureAtlas.AtlasWidth"); }
	unsigned int& AtlasHeightField() { return *GetNativePointerField<unsigned int*>(this, "FSlateTextureAtlas.AtlasHeight"); }
	unsigned int& StrideField() { return *GetNativePointerField<unsigned int*>(this, "FSlateTextureAtlas.Stride"); }
	ESlateTextureAtlasPaddingStyle& PaddingStyleField() { return *GetNativePointerField<ESlateTextureAtlasPaddingStyle*>(this, "FSlateTextureAtlas.PaddingStyle"); }
	bool& bNeedsUpdateField() { return *GetNativePointerField<bool*>(this, "FSlateTextureAtlas.bNeedsUpdate"); }

	// Functions

	void CopyDataIntoSlot(const FAtlasedTextureSlot * SlotToCopyTo, const TArray<unsigned char> * Data) { NativeCall<void, const FAtlasedTextureSlot *, const TArray<unsigned char> *>(this, "FSlateTextureAtlas.CopyDataIntoSlot", SlotToCopyTo, Data); }
	void CopyRow(const FSlateTextureAtlas::FCopyRowData * CopyRowData) { NativeCall<void, const FSlateTextureAtlas::FCopyRowData *>(this, "FSlateTextureAtlas.CopyRow", CopyRowData); }
	const FAtlasedTextureSlot * FindSlotForTexture(FAtlasedTextureSlot * Start, unsigned int InWidth, unsigned int InHeight) { return NativeCall<const FAtlasedTextureSlot *, FAtlasedTextureSlot *, unsigned int, unsigned int>(this, "FSlateTextureAtlas.FindSlotForTexture", Start, InWidth, InHeight); }
};

