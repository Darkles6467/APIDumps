#pragma once

#include "BaseDeclarations.h"
#include "FJsonObject.h"
#include "FJsonValue.h"

struct FJsonObject
{
	char __padding[0x50L];

	// Functions

	bool HasField(const FString * FieldName) { return NativeCall<bool, const FString *>(this, "FJsonObject.HasField", FieldName); }
	bool GetBoolField(const FString * FieldName) { return NativeCall<bool, const FString *>(this, "FJsonObject.GetBoolField", FieldName); }
	long double GetNumberField(const FString * FieldName) { return NativeCall<long double, const FString *>(this, "FJsonObject.GetNumberField", FieldName); }
	const TSharedPtr<FJsonObject,0> * GetObjectField(const FString * FieldName) { return NativeCall<const TSharedPtr<FJsonObject,0> *, const FString *>(this, "FJsonObject.GetObjectField", FieldName); }
	FString * GetStringField(FString * result, const FString * FieldName) { return NativeCall<FString *, FString *, const FString *>(this, "FJsonObject.GetStringField", result, FieldName); }
	void SetArrayField(const FString * FieldName, const TArray<TSharedPtr<FJsonValue,0>> * Array) { NativeCall<void, const FString *, const TArray<TSharedPtr<FJsonValue,0>> *>(this, "FJsonObject.SetArrayField", FieldName, Array); }
	void SetBoolField(const FString * FieldName, bool InValue) { NativeCall<void, const FString *, bool>(this, "FJsonObject.SetBoolField", FieldName, InValue); }
	void SetField(const FString * FieldName, const TSharedPtr<FJsonValue,0> * Value) { NativeCall<void, const FString *, const TSharedPtr<FJsonValue,0> *>(this, "FJsonObject.SetField", FieldName, Value); }
	void SetNumberField(const FString * FieldName, long double Number) { NativeCall<void, const FString *, long double>(this, "FJsonObject.SetNumberField", FieldName, Number); }
	void SetObjectField(const FString * FieldName, const TSharedPtr<FJsonObject,0> * JsonObject) { NativeCall<void, const FString *, const TSharedPtr<FJsonObject,0> *>(this, "FJsonObject.SetObjectField", FieldName, JsonObject); }
	void SetStringField(const FString * FieldName, const FString * StringValue) { NativeCall<void, const FString *, const FString *>(this, "FJsonObject.SetStringField", FieldName, StringValue); }
	bool TryGetArrayField(const FString * FieldName, const TArray<TSharedPtr<FJsonValue,0>> ** OutArray) { return NativeCall<bool, const FString *, const TArray<TSharedPtr<FJsonValue,0>> **>(this, "FJsonObject.TryGetArrayField", FieldName, OutArray); }
	bool TryGetBoolField(const FString * FieldName, bool * OutBool) { return NativeCall<bool, const FString *, bool *>(this, "FJsonObject.TryGetBoolField", FieldName, OutBool); }
	bool TryGetNumberField(const FString * FieldName, int * OutNumber) { return NativeCall<bool, const FString *, int *>(this, "FJsonObject.TryGetNumberField", FieldName, OutNumber); }
	bool TryGetNumberField(const FString * FieldName, unsigned int * OutNumber) { return NativeCall<bool, const FString *, unsigned int *>(this, "FJsonObject.TryGetNumberField", FieldName, OutNumber); }
	bool TryGetNumberField(const FString * FieldName, long double * OutNumber) { return NativeCall<bool, const FString *, long double *>(this, "FJsonObject.TryGetNumberField", FieldName, OutNumber); }
	bool TryGetObjectField(const FString * FieldName, const TSharedPtr<FJsonObject,0> ** OutObject) { return NativeCall<bool, const FString *, const TSharedPtr<FJsonObject,0> **>(this, "FJsonObject.TryGetObjectField", FieldName, OutObject); }
	bool TryGetStringArrayField(const FString * FieldName, TArray<FString> * OutArray) { return NativeCall<bool, const FString *, TArray<FString> *>(this, "FJsonObject.TryGetStringArrayField", FieldName, OutArray); }
	bool TryGetStringField(const FString * FieldName, FString * OutString) { return NativeCall<bool, const FString *, FString *>(this, "FJsonObject.TryGetStringField", FieldName, OutString); }
};

