#pragma once

#include "BaseDeclarations.h"
struct FVolumeBounds
{
	char __padding[0x18L];
	int& MinXField() { return *GetNativePointerField<int*>(this, "FVolumeBounds.MinX"); }
	int& MinYField() { return *GetNativePointerField<int*>(this, "FVolumeBounds.MinY"); }
	int& MinZField() { return *GetNativePointerField<int*>(this, "FVolumeBounds.MinZ"); }
	int& MaxXField() { return *GetNativePointerField<int*>(this, "FVolumeBounds.MaxX"); }
	int& MaxYField() { return *GetNativePointerField<int*>(this, "FVolumeBounds.MaxY"); }
	int& MaxZField() { return *GetNativePointerField<int*>(this, "FVolumeBounds.MaxZ"); }
};

