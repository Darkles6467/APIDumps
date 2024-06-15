#pragma once

#include "BaseDeclarations.h"
struct FFontCharacter
{
	char __padding[0x18L];
	int& StartUField() { return *GetNativePointerField<int*>(this, "FFontCharacter.StartU"); }
	int& StartVField() { return *GetNativePointerField<int*>(this, "FFontCharacter.StartV"); }
	int& USizeField() { return *GetNativePointerField<int*>(this, "FFontCharacter.USize"); }
	int& VSizeField() { return *GetNativePointerField<int*>(this, "FFontCharacter.VSize"); }
	char& TextureIndexField() { return *GetNativePointerField<char*>(this, "FFontCharacter.TextureIndex"); }
	int& VerticalOffsetField() { return *GetNativePointerField<int*>(this, "FFontCharacter.VerticalOffset"); }

	// Functions

};

