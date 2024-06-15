#pragma once

#include "BaseDeclarations.h"
struct FBspSurf
{
	char __padding[0x50L];
	unsigned int& PolyFlagsField() { return *GetNativePointerField<unsigned int*>(this, "FBspSurf.PolyFlags"); }
	int& pBaseField() { return *GetNativePointerField<int*>(this, "FBspSurf.pBase"); }
	int& vNormalField() { return *GetNativePointerField<int*>(this, "FBspSurf.vNormal"); }
	int& vTextureUField() { return *GetNativePointerField<int*>(this, "FBspSurf.vTextureU"); }
	int& vTextureVField() { return *GetNativePointerField<int*>(this, "FBspSurf.vTextureV"); }
	int& iBrushPolyField() { return *GetNativePointerField<int*>(this, "FBspSurf.iBrushPoly"); }
	float& LightMapScaleField() { return *GetNativePointerField<float*>(this, "FBspSurf.LightMapScale"); }
	int& iLightmassIndexField() { return *GetNativePointerField<int*>(this, "FBspSurf.iLightmassIndex"); }
	bool& bHiddenEdTemporaryField() { return *GetNativePointerField<bool*>(this, "FBspSurf.bHiddenEdTemporary"); }
	bool& bHiddenEdLevelField() { return *GetNativePointerField<bool*>(this, "FBspSurf.bHiddenEdLevel"); }
};

