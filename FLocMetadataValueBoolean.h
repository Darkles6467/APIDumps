#pragma once

#include "BaseDeclarations.h"
#include "FLocMetadataValue.h"

struct FLocMetadataValueBoolean : FLocMetadataValue
{
	char __padding[0x8L];
	bool& ValueField() { return *GetNativePointerField<bool*>(this, "FLocMetadataValueBoolean.Value"); }

	// Functions

	bool EqualTo(FLocMetadataValue * Other) { return NativeCall<bool, FLocMetadataValue *>(this, "FLocMetadataValueBoolean.EqualTo", Other); }
	FString * GetType(FString * result) { return NativeCall<FString *, FString *>(this, "FLocMetadataValueBoolean.GetType", result); }
	bool LessThan(FLocMetadataValue * Other) { return NativeCall<bool, FLocMetadataValue *>(this, "FLocMetadataValueBoolean.LessThan", Other); }
};

