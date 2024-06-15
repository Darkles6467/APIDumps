#pragma once

#include "BaseDeclarations.h"
struct FBoxCenterAndExtent
{
	char __padding[0x20L];
	FVector4& CenterField() { return *GetNativePointerField<FVector4*>(this, "FBoxCenterAndExtent.Center"); }
	FVector4& ExtentField() { return *GetNativePointerField<FVector4*>(this, "FBoxCenterAndExtent.Extent"); }

	// Functions

	FBox * GetBox(FBox * result) { return NativeCall<FBox *, FBox *>(this, "FBoxCenterAndExtent.GetBox", result); }
};

