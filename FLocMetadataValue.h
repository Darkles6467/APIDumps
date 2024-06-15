#pragma once

#include "BaseDeclarations.h"
#include "FLocMetadataObject.h"

struct FLocMetadataValue
{
	char __padding[0x10L];
	ELocMetadataType::Type& TypeField() { return *GetNativePointerField<ELocMetadataType::Type*>(this, "FLocMetadataValue.Type"); }

	// Functions

	bool AsBool() { return NativeCall<bool>(this, "FLocMetadataValue.AsBool"); }
	TSharedPtr<FLocMetadataObject,0> * AsObject(TSharedPtr<FLocMetadataObject,0> * result) { return NativeCall<TSharedPtr<FLocMetadataObject,0> *, TSharedPtr<FLocMetadataObject,0> *>(this, "FLocMetadataValue.AsObject", result); }
	FString * AsString(FString * result) { return NativeCall<FString *, FString *>(this, "FLocMetadataValue.AsString", result); }
	void ErrorMessage(const FString * InType) { NativeCall<void, const FString *>(this, "FLocMetadataValue.ErrorMessage", InType); }
};

