#pragma once

#include "BaseDeclarations.h"
#include "FLocMetadataValue.h"

struct FLocMetadataValueArray : FLocMetadataValue
{
	char __padding[0x10L];

	// Functions

	bool EqualTo(FLocMetadataValue * Other) { return NativeCall<bool, FLocMetadataValue *>(this, "FLocMetadataValueArray.EqualTo", Other); }
	FString * GetType(FString * result) { return NativeCall<FString *, FString *>(this, "FLocMetadataValueArray.GetType", result); }
	bool LessThan(FLocMetadataValue * Other) { return NativeCall<bool, FLocMetadataValue *>(this, "FLocMetadataValueArray.LessThan", Other); }
};

