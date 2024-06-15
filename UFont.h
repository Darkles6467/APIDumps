#pragma once

#include "BaseDeclarations.h"
#include "UObject.h"
#include "UObjectBaseUtility.h"
#include "UObjectBase.h"

struct UFont : UObject
{
	char __padding[0x180L];
	FieldArray<_BYTE, 1> FontCacheTypeField() { return {this, "UFont.FontCacheType"}; }
	TArray<FFontCharacter>& CharactersField() { return *GetNativePointerField<TArray<FFontCharacter>*>(this, "UFont.Characters"); }
	TSharedRef<FFontData,0>& FontDataField() { return *GetNativePointerField<TSharedRef<FFontData,0>*>(this, "UFont.FontData"); }
	int& IsRemappedField() { return *GetNativePointerField<int*>(this, "UFont.IsRemapped"); }
	float& EmScaleField() { return *GetNativePointerField<float*>(this, "UFont.EmScale"); }
	float& AscentField() { return *GetNativePointerField<float*>(this, "UFont.Ascent"); }
	float& DescentField() { return *GetNativePointerField<float*>(this, "UFont.Descent"); }
	float& LeadingField() { return *GetNativePointerField<float*>(this, "UFont.Leading"); }
	float& DistanceFieldScreenSpaceScalarField() { return *GetNativePointerField<float*>(this, "UFont.DistanceFieldScreenSpaceScalar"); }
	int& KerningField() { return *GetNativePointerField<int*>(this, "UFont.Kerning"); }
	FFontImportOptionsData& ImportOptionsField() { return *GetNativePointerField<FFontImportOptionsData*>(this, "UFont.ImportOptions"); }
	int& NumCharactersField() { return *GetNativePointerField<int*>(this, "UFont.NumCharacters"); }
	TArray<int>& MaxCharHeightField() { return *GetNativePointerField<TArray<int>*>(this, "UFont.MaxCharHeight"); }
	float& ScalingFactorField() { return *GetNativePointerField<float*>(this, "UFont.ScalingFactor"); }

	// Functions

	void CacheCharacterCountAndMaxCharHeight() { NativeCall<void>(this, "UFont.CacheCharacterCountAndMaxCharHeight"); }
	bool GenerateRenderData(const FSlateFontInfo * InFontInfo, wchar_t Char, FCharacterRenderData * OutRenderData, float Scale) { return NativeCall<bool, const FSlateFontInfo *, wchar_t, FCharacterRenderData *, float>(this, "UFont.GenerateRenderData", InFontInfo, Char, OutRenderData, Scale); }
	void GetCharSize(wchar_t InCh, float * Width, float * Height) { NativeCall<void, wchar_t, float *, float *>(this, "UFont.GetCharSize", InCh, Width, Height); }
	float GetMaxCharHeight() { return NativeCall<float>(this, "UFont.GetMaxCharHeight"); }
	unsigned __int16 GetMaxCharacterHeight(const FSlateFontInfo * InFontInfo, float FontScale) { return NativeCall<unsigned __int16, const FSlateFontInfo *, float>(this, "UFont.GetMaxCharacterHeight", InFontInfo, FontScale); }
	unsigned __int64 GetResourceSize(EResourceSizeMode::Type Mode) { return NativeCall<unsigned __int64, EResourceSizeMode::Type>(this, "UFont.GetResourceSize", Mode); }
	void GetStringHeightAndWidth(const FString * InString, int * Height, int * Width) { NativeCall<void, const FString *, int *, int *>(this, "UFont.GetStringHeightAndWidth", InString, Height, Width); }
	bool IsDistanceFieldAlphaFont() { return NativeCall<bool>(this, "UFont.IsDistanceFieldAlphaFont"); }
	void PostLoad() { NativeCall<void>(this, "UFont.PostLoad"); }
	void Serialize(FArchive * Ar) { NativeCall<void, FArchive *>(this, "UFont.Serialize", Ar); }
	void SetFontScalingFactor(float InScalingFactor) { NativeCall<void, float>(this, "UFont.SetFontScalingFactor", InScalingFactor); }
	bool GetKerning() { return NativeCall<bool>(this, "UFont.GetKerning"); }
};

