#pragma once

#include "BaseDeclarations.h"
struct FKey
{
	char __padding[0x18L];
	FName& KeyNameField() { return *GetNativePointerField<FName*>(this, "FKey.KeyName"); }
	TSharedPtr<FKeyDetails,0>& KeyDetailsField() { return *GetNativePointerField<TSharedPtr<FKeyDetails,0>*>(this, "FKey.KeyDetails"); }

	// Functions

	FKey * operator=(const FKey * __that) { return NativeCall<FKey *, const FKey *>(this, "FKey.operator=", __that); }
	void ConditionalLookupKeyDetails() { NativeCall<void>(this, "FKey.ConditionalLookupKeyDetails"); }
	bool ExportTextItem(FString * ValueStr, const FKey * DefaultValue, UObject * Parent, int PortFlags, UObject * ExportRootScope) { return NativeCall<bool, FString *, const FKey *, UObject *, int, UObject *>(this, "FKey.ExportTextItem", ValueStr, DefaultValue, Parent, PortFlags, ExportRootScope); }
	FText * GetDisplayName(FText * result) { return NativeCall<FText *, FText *>(this, "FKey.GetDisplayName", result); }
	bool ImportTextItem(const wchar_t ** Buffer, int PortFlags, UObject * Parent, FOutputDevice * ErrorText) { return NativeCall<bool, const wchar_t **, int, UObject *, FOutputDevice *>(this, "FKey.ImportTextItem", Buffer, PortFlags, Parent, ErrorText); }
	bool IsFloatAxis() { return NativeCall<bool>(this, "FKey.IsFloatAxis"); }
	bool IsGamepadKey() { return NativeCall<bool>(this, "FKey.IsGamepadKey"); }
	bool IsModifierKey() { return NativeCall<bool>(this, "FKey.IsModifierKey"); }
	bool IsMouseButton() { return NativeCall<bool>(this, "FKey.IsMouseButton"); }
	bool IsValid() { return NativeCall<bool>(this, "FKey.IsValid"); }
	bool IsVectorAxis() { return NativeCall<bool>(this, "FKey.IsVectorAxis"); }
	void PostSerialize(const FArchive * Ar) { NativeCall<void, const FArchive *>(this, "FKey.PostSerialize", Ar); }
	bool SerializeFromMismatchedTag(const FPropertyTag * Tag, FArchive * Ar) { return NativeCall<bool, const FPropertyTag *, FArchive *>(this, "FKey.SerializeFromMismatchedTag", Tag, Ar); }
	FString * ToDisplayString(FString * result) { return NativeCall<FString *, FString *>(this, "FKey.ToDisplayString", result); }
	FString * ToString(FString * result) { return NativeCall<FString *, FString *>(this, "FKey.ToString", result); }
	FName * GetFName(FName * result) { return NativeCall<FName *, FName *>(this, "FKey.GetFName", result); }
};

