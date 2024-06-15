#pragma once

#include "BaseDeclarations.h"
struct AccountId
{
	char __padding[0x50L];
	FString& _domainField() { return *GetNativePointerField<FString*>(this, "AccountId._domain"); }
	FString& _nameField() { return *GetNativePointerField<FString*>(this, "AccountId._name"); }
	FString& _issuerField() { return *GetNativePointerField<FString*>(this, "AccountId._issuer"); }
	FString& _displayNameField() { return *GetNativePointerField<FString*>(this, "AccountId._displayName"); }
	TArray<FString>& _spokenLanguagesField() { return *GetNativePointerField<TArray<FString>*>(this, "AccountId._spokenLanguages"); }

	// Functions

	AccountId * operator=(const AccountId * __that) { return NativeCall<AccountId *, const AccountId *>(this, "AccountId.operator=", __that); }
	bool operator==(const AccountId * RHS) { return NativeCall<bool, const AccountId *>(this, "AccountId.operator==", RHS); }
	static FString * AccountNameFromUri(FString * result, const FString * uri) { return NativeCall<FString *, FString *, const FString *>(nullptr, "AccountId.AccountNameFromUri", result, uri); }
	static AccountId * CreateFromUri(AccountId * result, const FString * uri, const TOptional<FString> * displayName) { return NativeCall<AccountId *, AccountId *, const FString *, const TOptional<FString> *>(nullptr, "AccountId.CreateFromUri", result, uri, displayName); }
	bool IsValid() { return NativeCall<bool>(this, "AccountId.IsValid"); }
	FString * ToString(FString * result) { return NativeCall<FString *, FString *>(this, "AccountId.ToString", result); }
};

