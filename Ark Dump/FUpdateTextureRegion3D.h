#pragma once

#include "BaseDeclarations.h"
struct FUpdateTextureRegion3D
{
	char __padding[0x24L];
	unsigned int& DestXField() { return *GetNativePointerField<unsigned int*>(this, "FUpdateTextureRegion3D.DestX"); }
	unsigned int& DestYField() { return *GetNativePointerField<unsigned int*>(this, "FUpdateTextureRegion3D.DestY"); }
	unsigned int& DestZField() { return *GetNativePointerField<unsigned int*>(this, "FUpdateTextureRegion3D.DestZ"); }
	int& SrcXField() { return *GetNativePointerField<int*>(this, "FUpdateTextureRegion3D.SrcX"); }
	int& SrcYField() { return *GetNativePointerField<int*>(this, "FUpdateTextureRegion3D.SrcY"); }
	int& SrcZField() { return *GetNativePointerField<int*>(this, "FUpdateTextureRegion3D.SrcZ"); }
	unsigned int& WidthField() { return *GetNativePointerField<unsigned int*>(this, "FUpdateTextureRegion3D.Width"); }
	unsigned int& HeightField() { return *GetNativePointerField<unsigned int*>(this, "FUpdateTextureRegion3D.Height"); }
	unsigned int& DepthField() { return *GetNativePointerField<unsigned int*>(this, "FUpdateTextureRegion3D.Depth"); }
};

