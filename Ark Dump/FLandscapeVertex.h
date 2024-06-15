#pragma once

#include "BaseDeclarations.h"
struct FLandscapeVertex
{
	char __padding[0x10L];
	float& VertexXField() { return *GetNativePointerField<float*>(this, "FLandscapeVertex.VertexX"); }
	float& VertexYField() { return *GetNativePointerField<float*>(this, "FLandscapeVertex.VertexY"); }
	float& SubXField() { return *GetNativePointerField<float*>(this, "FLandscapeVertex.SubX"); }
	float& SubYField() { return *GetNativePointerField<float*>(this, "FLandscapeVertex.SubY"); }
};

