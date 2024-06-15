#pragma once

#include "BaseDeclarations.h"
struct FCharacterEntry
{
	char __padding[0x1cL];
	float& StartUField() { return *GetNativePointerField<float*>(this, "FCharacterEntry.StartU"); }
	float& StartVField() { return *GetNativePointerField<float*>(this, "FCharacterEntry.StartV"); }
	float& USizeField() { return *GetNativePointerField<float*>(this, "FCharacterEntry.USize"); }
	float& VSizeField() { return *GetNativePointerField<float*>(this, "FCharacterEntry.VSize"); }
	__int16& VerticalOffsetField() { return *GetNativePointerField<__int16*>(this, "FCharacterEntry.VerticalOffset"); }
	__int16& HorizontalOffsetField() { return *GetNativePointerField<__int16*>(this, "FCharacterEntry.HorizontalOffset"); }
	__int16& GlobalDescenderField() { return *GetNativePointerField<__int16*>(this, "FCharacterEntry.GlobalDescender"); }
	__int16& XAdvanceField() { return *GetNativePointerField<__int16*>(this, "FCharacterEntry.XAdvance"); }
	char& TextureIndexField() { return *GetNativePointerField<char*>(this, "FCharacterEntry.TextureIndex"); }
	char& ValidField() { return *GetNativePointerField<char*>(this, "FCharacterEntry.Valid"); }
};

