#pragma once

#include "BaseDeclarations.h"
struct FPreviewAssetAttachContainer
{
	char __padding[0x10L];
	TArray<FPreviewAttachedObjectPair>& AttachedObjectsField() { return *GetNativePointerField<TArray<FPreviewAttachedObjectPair>*>(this, "FPreviewAssetAttachContainer.AttachedObjects"); }

	// Functions

};

