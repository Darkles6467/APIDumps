#pragma once

#include "BaseDeclarations.h"
#include "FLocMetadataValue.h"
#include "FLocMetadataObject.h"

struct FLocMetadataValueObject : FLocMetadataValue
{
	char __padding[0x10L];
	TSharedPtr<FLocMetadataObject,0>& ValueField() { return *GetNativePointerField<TSharedPtr<FLocMetadataObject,0>*>(this, "FLocMetadataValueObject.Value"); }

	// Functions

	TSharedPtr<FLocMetadataObject,0> * AsObject(TSharedPtr<FLocMetadataObject,0> * result) { return NativeCall<TSharedPtr<FLocMetadataObject,0> *, TSharedPtr<FLocMetadataObject,0> *>(this, "FLocMetadataValueObject.AsObject", result); }
	FString * GetType(FString * result) { return NativeCall<FString *, FString *>(this, "FLocMetadataValueObject.GetType", result); }
	bool EqualTo(FLocMetadataValue * Other) { return NativeCall<bool, FLocMetadataValue *>(this, "FLocMetadataValueObject.EqualTo", Other); }
	bool LessThan(FLocMetadataValue * Other) { return NativeCall<bool, FLocMetadataValue *>(this, "FLocMetadataValueObject.LessThan", Other); }
};

