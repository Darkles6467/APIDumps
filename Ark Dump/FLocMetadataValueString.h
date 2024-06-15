#pragma once

#include "BaseDeclarations.h"
#include "FLocMetadataValue.h"

struct FLocMetadataValueString : FLocMetadataValue
{
	char __padding[0x10L];
	FString& ValueField() { return *GetNativePointerField<FString*>(this, "FLocMetadataValueString.Value"); }

	// Functions

	bool EqualTo(FLocMetadataValue * Other) { return NativeCall<bool, FLocMetadataValue *>(this, "FLocMetadataValueString.EqualTo", Other); }
	FString * GetType(FString * result) { return NativeCall<FString *, FString *>(this, "FLocMetadataValueString.GetType", result); }
	bool LessThan(FLocMetadataValue * Other) { return NativeCall<bool, FLocMetadataValue *>(this, "FLocMetadataValueString.LessThan", Other); }
};

