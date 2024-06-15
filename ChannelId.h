#pragma once

#include "BaseDeclarations.h"
struct ChannelId
{
	char __padding[0x50L];
	FString& _domainField() { return *GetNativePointerField<FString*>(this, "ChannelId._domain"); }
	FString& _nameField() { return *GetNativePointerField<FString*>(this, "ChannelId._name"); }
	FString& _issuerField() { return *GetNativePointerField<FString*>(this, "ChannelId._issuer"); }
	FieldArray<_BYTE, 1> _typeField() { return {this, "ChannelId._type"}; }
	Channel3DProperties& _propertiesField() { return *GetNativePointerField<Channel3DProperties*>(this, "ChannelId._properties"); }

	// Functions

	ChannelId * operator=(const ChannelId * __that) { return NativeCall<ChannelId *, const ChannelId *>(this, "ChannelId.operator=", __that); }
	bool operator==(const ChannelId * RHS) { return NativeCall<bool, const ChannelId *>(this, "ChannelId.operator==", RHS); }
	bool IsValid() { return NativeCall<bool>(this, "ChannelId.IsValid"); }
	FString * ToString(FString * result) { return NativeCall<FString *, FString *>(this, "ChannelId.ToString", result); }
};

