#pragma once

#include "BaseDeclarations.h"
struct FLandscapeVertexRef
{
	char __padding[0x6L];
	__int16& XField() { return *GetNativePointerField<__int16*>(this, "FLandscapeVertexRef.X"); }
	__int16& YField() { return *GetNativePointerField<__int16*>(this, "FLandscapeVertexRef.Y"); }
	char& SubXField() { return *GetNativePointerField<char*>(this, "FLandscapeVertexRef.SubX"); }
	char& SubYField() { return *GetNativePointerField<char*>(this, "FLandscapeVertexRef.SubY"); }
};

