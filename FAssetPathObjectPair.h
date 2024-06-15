#pragma once

#include "BaseDeclarations.h"
struct FAssetPathObjectPair
{
	char __padding[0x18L];
	FStringAssetReference& AssetPathField() { return *GetNativePointerField<FStringAssetReference*>(this, "FAssetPathObjectPair.AssetPath"); }

	// Functions

};

