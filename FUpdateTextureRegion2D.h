#pragma once

#include "BaseDeclarations.h"
struct FUpdateTextureRegion2D
{
	char __padding[0x18L];
	unsigned int& DestXField() { return *GetNativePointerField<unsigned int*>(this, "FUpdateTextureRegion2D.DestX"); }
	unsigned int& DestYField() { return *GetNativePointerField<unsigned int*>(this, "FUpdateTextureRegion2D.DestY"); }
	int& SrcXField() { return *GetNativePointerField<int*>(this, "FUpdateTextureRegion2D.SrcX"); }
	int& SrcYField() { return *GetNativePointerField<int*>(this, "FUpdateTextureRegion2D.SrcY"); }
	unsigned int& WidthField() { return *GetNativePointerField<unsigned int*>(this, "FUpdateTextureRegion2D.Width"); }
	unsigned int& HeightField() { return *GetNativePointerField<unsigned int*>(this, "FUpdateTextureRegion2D.Height"); }
};

