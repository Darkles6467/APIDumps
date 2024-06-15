#pragma once

#include "BaseDeclarations.h"
struct FRecastTileDirtyState
{
	char __padding[0x18L];
	TArray<unsigned char>& FallbackDirtyLayersField() { return *GetNativePointerField<TArray<unsigned char>*>(this, "FRecastTileDirtyState.FallbackDirtyLayers"); }
	FieldArray<char, 7> DirtyLayersField() { return {this, "FRecastTileDirtyState.DirtyLayers"}; }

	// Functions

	FRecastTileDirtyState * operator=(const FRecastTileDirtyState * __that) { return NativeCall<FRecastTileDirtyState *, const FRecastTileDirtyState *>(this, "FRecastTileDirtyState.operator=", __that); }
	void Append(const FRecastTileDirtyState * Other) { NativeCall<void, const FRecastTileDirtyState *>(this, "FRecastTileDirtyState.Append", Other); }
	void MarkDirtyLayer(int LayerIdx) { NativeCall<void, int>(this, "FRecastTileDirtyState.MarkDirtyLayer", LayerIdx); }
};

