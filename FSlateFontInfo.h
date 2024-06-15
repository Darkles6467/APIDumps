#pragma once

#include "BaseDeclarations.h"
struct FSlateFontInfo
{
	char __padding[0x20L];
	float& FontDrawScalarField() { return *GetNativePointerField<float*>(this, "FSlateFontInfo.FontDrawScalar"); }
	bool& EnableOutlineAndGlowInShaderField() { return *GetNativePointerField<bool*>(this, "FSlateFontInfo.EnableOutlineAndGlowInShader"); }
	FName& FontNameField() { return *GetNativePointerField<FName*>(this, "FSlateFontInfo.FontName"); }
	int& SizeField() { return *GetNativePointerField<int*>(this, "FSlateFontInfo.Size"); }
	FieldArray<_BYTE, 1> HintingField() { return {this, "FSlateFontInfo.Hinting"}; }

	// Functions

};

