#pragma once

#include "BaseDeclarations.h"
struct FRenderingCompositeOutputRef
{
	char __padding[0x10L];
	FRenderingCompositePass * SourceField() { return GetNativePointerField<FRenderingCompositePass *>(this, "FRenderingCompositeOutputRef.Source"); }
	EPassOutputId& PassOutputIdField() { return *GetNativePointerField<EPassOutputId*>(this, "FRenderingCompositeOutputRef.PassOutputId"); }

	// Functions

	FRenderingCompositeOutput * GetOutput() { return NativeCall<FRenderingCompositeOutput *>(this, "FRenderingCompositeOutputRef.GetOutput"); }
};

