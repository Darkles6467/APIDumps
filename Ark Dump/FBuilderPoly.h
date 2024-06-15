#pragma once

#include "BaseDeclarations.h"
struct FBuilderPoly
{
	char __padding[0x20L];
	TArray<int>& VertexIndicesField() { return *GetNativePointerField<TArray<int>*>(this, "FBuilderPoly.VertexIndices"); }
	int& DirectionField() { return *GetNativePointerField<int*>(this, "FBuilderPoly.Direction"); }
	FName& ItemNameField() { return *GetNativePointerField<FName*>(this, "FBuilderPoly.ItemName"); }
	int& PolyFlagsField() { return *GetNativePointerField<int*>(this, "FBuilderPoly.PolyFlags"); }

	// Functions

};

