#pragma once

#include "BaseDeclarations.h"
struct FRenderingCompositionGraph
{
	char __padding[0x10L];
	TArray<FRenderingCompositePass *>& NodesField() { return *GetNativePointerField<TArray<FRenderingCompositePass *>*>(this, "FRenderingCompositionGraph.Nodes"); }

	// Functions

	void Free() { NativeCall<void>(this, "FRenderingCompositionGraph.Free"); }
	static void RecursivelyGatherDependencies(const FRenderingCompositeOutputRef * InOutputRef) { NativeCall<void, const FRenderingCompositeOutputRef *>(nullptr, "FRenderingCompositionGraph.RecursivelyGatherDependencies", InOutputRef); }
	void RecursivelyProcess(const FRenderingCompositeOutputRef * InOutputRef, FRenderingCompositePassContext * Context) { NativeCall<void, const FRenderingCompositeOutputRef *, FRenderingCompositePassContext *>(this, "FRenderingCompositionGraph.RecursivelyProcess", InOutputRef, Context); }
	void ResetDependencies() { NativeCall<void>(this, "FRenderingCompositionGraph.ResetDependencies"); }
};

