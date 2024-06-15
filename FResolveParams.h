#pragma once

#include "BaseDeclarations.h"
struct FResolveParams
{
	char __padding[0x20L];
	ECubeFace& CubeFaceField() { return *GetNativePointerField<ECubeFace*>(this, "FResolveParams.CubeFace"); }
	FResolveRect& RectField() { return *GetNativePointerField<FResolveRect*>(this, "FResolveParams.Rect"); }
	int& MipIndexField() { return *GetNativePointerField<int*>(this, "FResolveParams.MipIndex"); }
	int& SourceArrayIndexField() { return *GetNativePointerField<int*>(this, "FResolveParams.SourceArrayIndex"); }
	int& DestArrayIndexField() { return *GetNativePointerField<int*>(this, "FResolveParams.DestArrayIndex"); }

	// Functions

};

