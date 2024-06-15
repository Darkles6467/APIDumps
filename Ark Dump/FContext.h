#pragma once

#include "BaseDeclarations.h"
struct FContext
{
	char __padding[0x48L];
	FString& KeyField() { return *GetNativePointerField<FString*>(this, "FContext.Key"); }
	FString& SourceLocationField() { return *GetNativePointerField<FString*>(this, "FContext.SourceLocation"); }
	bool& bIsOptionalField() { return *GetNativePointerField<bool*>(this, "FContext.bIsOptional"); }
	TSharedPtr<FLocMetadataObject,0>& InfoMetadataObjField() { return *GetNativePointerField<TSharedPtr<FLocMetadataObject,0>*>(this, "FContext.InfoMetadataObj"); }
	TSharedPtr<FLocMetadataObject,0>& KeyMetadataObjField() { return *GetNativePointerField<TSharedPtr<FLocMetadataObject,0>*>(this, "FContext.KeyMetadataObj"); }

	// Functions

	FContext * operator=(const FContext * Other) { return NativeCall<FContext *, const FContext *>(this, "FContext.operator=", Other); }
};

