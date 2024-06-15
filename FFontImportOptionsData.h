#pragma once

#include "BaseDeclarations.h"
struct FFontImportOptionsData
{
	char __padding[0xb0L];
	FString& FontNameField() { return *GetNativePointerField<FString*>(this, "FFontImportOptionsData.FontName"); }
	float& HeightField() { return *GetNativePointerField<float*>(this, "FFontImportOptionsData.Height"); }
	TEnumAsByte<enum EFontImportCharacterSet>& CharacterSetField() { return *GetNativePointerField<TEnumAsByte<enum EFontImportCharacterSet>*>(this, "FFontImportOptionsData.CharacterSet"); }
	FString& CharsField() { return *GetNativePointerField<FString*>(this, "FFontImportOptionsData.Chars"); }
	FString& UnicodeRangeField() { return *GetNativePointerField<FString*>(this, "FFontImportOptionsData.UnicodeRange"); }
	FString& CharsFilePathField() { return *GetNativePointerField<FString*>(this, "FFontImportOptionsData.CharsFilePath"); }
	FString& CharsFileWildcardField() { return *GetNativePointerField<FString*>(this, "FFontImportOptionsData.CharsFileWildcard"); }
	FLinearColor& ForegroundColorField() { return *GetNativePointerField<FLinearColor*>(this, "FFontImportOptionsData.ForegroundColor"); }
	int& TexturePageWidthField() { return *GetNativePointerField<int*>(this, "FFontImportOptionsData.TexturePageWidth"); }
	int& TexturePageMaxHeightField() { return *GetNativePointerField<int*>(this, "FFontImportOptionsData.TexturePageMaxHeight"); }
	int& XPaddingField() { return *GetNativePointerField<int*>(this, "FFontImportOptionsData.XPadding"); }
	int& YPaddingField() { return *GetNativePointerField<int*>(this, "FFontImportOptionsData.YPadding"); }
	int& ExtendBoxTopField() { return *GetNativePointerField<int*>(this, "FFontImportOptionsData.ExtendBoxTop"); }
	int& ExtendBoxBottomField() { return *GetNativePointerField<int*>(this, "FFontImportOptionsData.ExtendBoxBottom"); }
	int& ExtendBoxRightField() { return *GetNativePointerField<int*>(this, "FFontImportOptionsData.ExtendBoxRight"); }
	int& ExtendBoxLeftField() { return *GetNativePointerField<int*>(this, "FFontImportOptionsData.ExtendBoxLeft"); }
	int& KerningField() { return *GetNativePointerField<int*>(this, "FFontImportOptionsData.Kerning"); }
	int& DistanceFieldScaleFactorField() { return *GetNativePointerField<int*>(this, "FFontImportOptionsData.DistanceFieldScaleFactor"); }
	float& DistanceFieldScanRadiusScaleField() { return *GetNativePointerField<float*>(this, "FFontImportOptionsData.DistanceFieldScanRadiusScale"); }

	// Functions

	FFontImportOptionsData * operator=(const FFontImportOptionsData * __that) { return NativeCall<FFontImportOptionsData *, const FFontImportOptionsData *>(this, "FFontImportOptionsData.operator=", __that); }
};

