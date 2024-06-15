#pragma once

#include "BaseDeclarations.h"
struct OptimizeVertexData
{
	char __padding[0x14L];
	float& ScoreField() { return *GetNativePointerField<float*>(this, "OptimizeVertexData.Score"); }
	unsigned int& ActiveFaceListStartField() { return *GetNativePointerField<unsigned int*>(this, "OptimizeVertexData.ActiveFaceListStart"); }
	unsigned int& ActiveFaceListSizeField() { return *GetNativePointerField<unsigned int*>(this, "OptimizeVertexData.ActiveFaceListSize"); }
	unsigned int& CachePos0Field() { return *GetNativePointerField<unsigned int*>(this, "OptimizeVertexData.CachePos0"); }
	unsigned int& CachePos1Field() { return *GetNativePointerField<unsigned int*>(this, "OptimizeVertexData.CachePos1"); }
};

