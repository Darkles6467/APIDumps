#pragma once

#include "BaseDeclarations.h"
#include "UField.h"
#include "UObject.h"
#include "UObjectBaseUtility.h"
#include "UObjectBase.h"

struct UEnum : UField
{
	enum ECppForm
	{
		Regular = 0x0,
		Namespaced = 0x1,
		EnumClass = 0x2,
	};

	char __padding[0x28L];
	FString& CppTypeField() { return *GetNativePointerField<FString*>(this, "UEnum.CppType"); }
	TArray<FName>& NamesField() { return *GetNativePointerField<TArray<FName>*>(this, "UEnum.Names"); }

	// Functions

	FString * GetEnumName(FString * result, int InIndex) { return NativeCall<FString *, FString *, int>(this, "UEnum.GetEnumName", result, InIndex); }
	static FString * GetValueAsString_Internal(FString * result, const wchar_t * EnumPath, const int Value) { return NativeCall<FString *, FString *, const wchar_t *, const int>(nullptr, "UEnum.GetValueAsString_Internal", result, EnumPath, Value); }
	static void * operator new(const unsigned __int64 InSize, UObject * InOuter, FName InName, EObjectFlags InSetFlags) { return NativeCall<void *, const unsigned __int64, UObject *, FName, EObjectFlags>(nullptr, "UEnum.operator new", InSize, InOuter, InName, InSetFlags); }
	FText * GetEnumText(FText * result, int InIndex) { return NativeCall<FText *, FText *, int>(this, "UEnum.GetEnumText", result, InIndex); }
	void AddNamesToMasterList() { NativeCall<void>(this, "UEnum.AddNamesToMasterList"); }
	int FindEnumIndex(FName InName) { return NativeCall<int, FName>(this, "UEnum.FindEnumIndex", InName); }
	static int FindEnumRedirects(const UEnum * Enum, FName EnumEntryName) { return NativeCall<int, const UEnum *, FName>(nullptr, "UEnum.FindEnumRedirects", Enum, EnumEntryName); }
	FString * GenerateEnumPrefix(FString * result) { return NativeCall<FString *, FString *>(this, "UEnum.GenerateEnumPrefix", result); }
	static FString * GenerateFullEnumName(FString * result, const UEnum * InEnum, const wchar_t * InEnumName) { return NativeCall<FString *, FString *, const UEnum *, const wchar_t *>(nullptr, "UEnum.GenerateFullEnumName", result, InEnum, InEnumName); }
	FString * GenerateFullEnumName(FString * result, const wchar_t * InEnumName) { return NativeCall<FString *, FString *, const wchar_t *>(this, "UEnum.GenerateFullEnumName", result, InEnumName); }
	bool GenerateMaxEnum() { return NativeCall<bool>(this, "UEnum.GenerateMaxEnum"); }
	static int LookupEnumName(FName TestName, UEnum ** FoundEnum) { return NativeCall<int, FName, UEnum **>(nullptr, "UEnum.LookupEnumName", TestName, FoundEnum); }
	static int ParseEnum(const wchar_t ** Str) { return NativeCall<int, const wchar_t **>(nullptr, "UEnum.ParseEnum", Str); }
	void RemoveNamesFromMasterList() { NativeCall<void>(this, "UEnum.RemoveNamesFromMasterList"); }
	void Serialize(FArchive * Ar) { NativeCall<void, FArchive *>(this, "UEnum.Serialize", Ar); }
	bool SetEnums(TArray<FName> * InNames, UEnum::ECppForm InCppForm) { return NativeCall<bool, TArray<FName> *, UEnum::ECppForm>(this, "UEnum.SetEnums", InNames, InCppForm); }
};

struct UUserDefinedEnum : UEnum
{
	char __padding[0x10L];
	TArray<FText>& DisplayNamesField() { return *GetNativePointerField<TArray<FText>*>(this, "UUserDefinedEnum.DisplayNames"); }

	// Functions

	FString * GenerateFullEnumName(FString * result, const wchar_t * InEnumName) { return NativeCall<FString *, FString *, const wchar_t *>(this, "UUserDefinedEnum.GenerateFullEnumName", result, InEnumName); }
	FText * GetEnumText(FText * result, int InIndex) { return NativeCall<FText *, FText *, int>(this, "UUserDefinedEnum.GetEnumText", result, InIndex); }
	int ResolveEnumerator(FArchive * Ar, int EnumeratorIndex) { return NativeCall<int, FArchive *, int>(this, "UUserDefinedEnum.ResolveEnumerator", Ar, EnumeratorIndex); }
};

