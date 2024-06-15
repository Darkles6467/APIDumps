#pragma once

#include "BaseDeclarations.h"
struct FCharacterRenderData
{
	char __padding[0x28L];
	FCharacterMeasureInfo& MeasureInfoField() { return *GetNativePointerField<FCharacterMeasureInfo*>(this, "FCharacterRenderData.MeasureInfo"); }
	TArray<unsigned char>& RawPixelsField() { return *GetNativePointerField<TArray<unsigned char>*>(this, "FCharacterRenderData.RawPixels"); }
	unsigned __int16& MaxHeightField() { return *GetNativePointerField<unsigned __int16*>(this, "FCharacterRenderData.MaxHeight"); }
	wchar_t& CharField() { return *GetNativePointerField<wchar_t*>(this, "FCharacterRenderData.Char"); }
};

