#pragma once

#include "BaseDeclarations.h"
struct FPostprocessContext
{
	char __padding[0x30L];
	FRenderingCompositionGraph * GraphField() { return GetNativePointerField<FRenderingCompositionGraph *>(this, "FPostprocessContext.Graph"); }
	const FViewInfo * ViewField() { return GetNativePointerField<const FViewInfo *>(this, "FPostprocessContext.View"); }
	FRenderingCompositePass * SceneColorField() { return GetNativePointerField<FRenderingCompositePass *>(this, "FPostprocessContext.SceneColor"); }
	FRenderingCompositePass * SceneDepthField() { return GetNativePointerField<FRenderingCompositePass *>(this, "FPostprocessContext.SceneDepth"); }
	FRenderingCompositeOutputRef& FinalOutputField() { return *GetNativePointerField<FRenderingCompositeOutputRef*>(this, "FPostprocessContext.FinalOutput"); }

	// Functions

};

