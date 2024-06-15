#pragma once

#include "BaseDeclarations.h"
struct FCharacterMeasureInfo
{
	char __padding[0xeL];
	__int16& SizeXField() { return *GetNativePointerField<__int16*>(this, "FCharacterMeasureInfo.SizeX"); }
	__int16& SizeYField() { return *GetNativePointerField<__int16*>(this, "FCharacterMeasureInfo.SizeY"); }
	__int16& XAdvanceField() { return *GetNativePointerField<__int16*>(this, "FCharacterMeasureInfo.XAdvance"); }
	__int16& GlobalAscenderField() { return *GetNativePointerField<__int16*>(this, "FCharacterMeasureInfo.GlobalAscender"); }
	__int16& GlobalDescenderField() { return *GetNativePointerField<__int16*>(this, "FCharacterMeasureInfo.GlobalDescender"); }
	__int16& VerticalOffsetField() { return *GetNativePointerField<__int16*>(this, "FCharacterMeasureInfo.VerticalOffset"); }
	__int16& HorizontalOffsetField() { return *GetNativePointerField<__int16*>(this, "FCharacterMeasureInfo.HorizontalOffset"); }
};

