#pragma once

#include "BaseDeclarations.h"
struct FLocItem
{
	char __padding[0x20L];
	FString& TextField() { return *GetNativePointerField<FString*>(this, "FLocItem.Text"); }
	TSharedPtr<FLocMetadataObject,0>& MetadataObjField() { return *GetNativePointerField<TSharedPtr<FLocMetadataObject,0>*>(this, "FLocItem.MetadataObj"); }

	// Functions

	bool operator==(const FLocItem * Other) { return NativeCall<bool, const FLocItem *>(this, "FLocItem.operator==", Other); }
	bool IsExactMatch(const FLocItem * Other) { return NativeCall<bool, const FLocItem *>(this, "FLocItem.IsExactMatch", Other); }
};

