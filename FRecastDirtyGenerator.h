#pragma once

#include "BaseDeclarations.h"
struct FRecastDirtyGenerator
{
	char __padding[0x20L];
	FRecastTileGenerator * GeneratorField() { return GetNativePointerField<FRecastTileGenerator *>(this, "FRecastDirtyGenerator.Generator"); }
	FRecastTileDirtyState& StateField() { return *GetNativePointerField<FRecastTileDirtyState*>(this, "FRecastDirtyGenerator.State"); }
};

