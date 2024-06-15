#pragma once

#include "BaseDeclarations.h"
struct FGPUProfileInfoPair
{
	char __padding[0x10L];
	__int64& TrianglesField() { return *GetNativePointerField<__int64*>(this, "FGPUProfileInfoPair.Triangles"); }
	int& DrawCallsField() { return *GetNativePointerField<int*>(this, "FGPUProfileInfoPair.DrawCalls"); }
};

