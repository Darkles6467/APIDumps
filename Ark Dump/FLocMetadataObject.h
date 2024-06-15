#pragma once

#include "BaseDeclarations.h"
#include "FLocMetadataObject.h"

struct FLocMetadataObject
{
	char __padding[0x50L];

	// Functions

	bool operator==(const FLocMetadataObject * Other) { return NativeCall<bool, const FLocMetadataObject *>(this, "FLocMetadataObject.operator==", Other); }
	bool IsExactMatch(const FLocMetadataObject * Other) { return NativeCall<bool, const FLocMetadataObject *>(this, "FLocMetadataObject.IsExactMatch", Other); }
	static bool IsMetadataExactMatch(TSharedPtr<FLocMetadataObject,0> MetadataA, TSharedPtr<FLocMetadataObject,0> MetadataB) { return NativeCall<bool, TSharedPtr<FLocMetadataObject,0>, TSharedPtr<FLocMetadataObject,0>>(nullptr, "FLocMetadataObject.IsMetadataExactMatch", MetadataA, MetadataB); }
	void RemoveField(const FString * FieldName) { NativeCall<void, const FString *>(this, "FLocMetadataObject.RemoveField", FieldName); }
	void SetStringField(const FString * FieldName, const FString * StringValue) { NativeCall<void, const FString *, const FString *>(this, "FLocMetadataObject.SetStringField", FieldName, StringValue); }
};

