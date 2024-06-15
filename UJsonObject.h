#pragma once

#include "BaseDeclarations.h"
#include "UObject.h"
#include "UObjectBaseUtility.h"
#include "UObjectBase.h"
#include "FJsonObject.h"

struct UJsonObject : UObject
{
	char __padding[0x10L];
	TSharedPtr<FJsonObject,0>& JsonRootField() { return *GetNativePointerField<TSharedPtr<FJsonObject,0>*>(this, "UJsonObject.JsonRoot"); }

	// Functions

	static bool CompareJsonValues(const UJsonObject * A, const UJsonObject * B) { return NativeCall<bool, const UJsonObject *, const UJsonObject *>(nullptr, "UJsonObject.CompareJsonValues", A, B); }
	static UJsonObject * CreateJsonObject(UObject * WorldContextObject) { return NativeCall<UJsonObject *, UObject *>(nullptr, "UJsonObject.CreateJsonObject", WorldContextObject); }
	static UJsonObject * CreateJsonObjectInternal(TSharedPtr<FJsonObject,0> DataRoot, UObject * Outer) { return NativeCall<UJsonObject *, TSharedPtr<FJsonObject,0>, UObject *>(nullptr, "UJsonObject.CreateJsonObjectInternal", DataRoot, Outer); }
	bool GetBoolArrayField(FString Key, TArray<bool> * OutValue, bool bForceSingleKey, FString Delimiter) { return NativeCall<bool, FString, TArray<bool> *, bool, FString>(this, "UJsonObject.GetBoolArrayField", Key, OutValue, bForceSingleKey, Delimiter); }
	bool GetBoolField(FString Key, bool * OutValue, bool bForceSingleKey, FString Delimiter) { return NativeCall<bool, FString, bool *, bool, FString>(this, "UJsonObject.GetBoolField", Key, OutValue, bForceSingleKey, Delimiter); }
	bool GetByteArrayField(FString Key, TArray<unsigned char> * OutValue, bool bForceSingleKey, FString Delimiter) { return NativeCall<bool, FString, TArray<unsigned char> *, bool, FString>(this, "UJsonObject.GetByteArrayField", Key, OutValue, bForceSingleKey, Delimiter); }
	bool GetByteField(FString Key, char * OutValue, bool bForceSingleKey, FString Delimiter) { return NativeCall<bool, FString, char *, bool, FString>(this, "UJsonObject.GetByteField", Key, OutValue, bForceSingleKey, Delimiter); }
	bool GetContainerJsonRecursive(FString Key, const UJsonObject * RootObject, FString Delimiter, TSharedPtr<FJsonObject,0> * OutObject, FString * OutLastKey, bool bCreateMissingObjects) { return NativeCall<bool, FString, const UJsonObject *, FString, TSharedPtr<FJsonObject,0> *, FString *, bool>(this, "UJsonObject.GetContainerJsonRecursive", Key, RootObject, Delimiter, OutObject, OutLastKey, bCreateMissingObjects); }
	bool GetDoubleArrayField(FString Key, TArray<double> * OutValue, bool bForceSingleKey, FString Delimiter) { return NativeCall<bool, FString, TArray<double> *, bool, FString>(this, "UJsonObject.GetDoubleArrayField", Key, OutValue, bForceSingleKey, Delimiter); }
	bool GetDoubleField(FString Key, long double * OutValue, bool bForceSingleKey, FString Delimiter) { return NativeCall<bool, FString, long double *, bool, FString>(this, "UJsonObject.GetDoubleField", Key, OutValue, bForceSingleKey, Delimiter); }
	bool GetFloatArrayField(FString Key, TArray<float> * OutValue, bool bForceSingleKey, FString Delimiter) { return NativeCall<bool, FString, TArray<float> *, bool, FString>(this, "UJsonObject.GetFloatArrayField", Key, OutValue, bForceSingleKey, Delimiter); }
	bool GetFloatField(FString Key, float * OutValue, bool bForceSingleKey, FString Delimiter) { return NativeCall<bool, FString, float *, bool, FString>(this, "UJsonObject.GetFloatField", Key, OutValue, bForceSingleKey, Delimiter); }
	bool GetIntArrayField(FString Key, TArray<int> * OutValue, bool bForceSingleKey, FString Delimiter) { return NativeCall<bool, FString, TArray<int> *, bool, FString>(this, "UJsonObject.GetIntArrayField", Key, OutValue, bForceSingleKey, Delimiter); }
	bool GetIntField(FString Key, int * OutValue, bool bForceSingleKey, FString Delimiter) { return NativeCall<bool, FString, int *, bool, FString>(this, "UJsonObject.GetIntField", Key, OutValue, bForceSingleKey, Delimiter); }
	bool GetJsonObjectArrayField(FString Key, TArray<UJsonObject *> * OutValue, bool bForceSingleKey, FString Delimiter) { return NativeCall<bool, FString, TArray<UJsonObject *> *, bool, FString>(this, "UJsonObject.GetJsonObjectArrayField", Key, OutValue, bForceSingleKey, Delimiter); }
	bool GetJsonObjectField(FString Key, UJsonObject ** OutObject, bool bForceSingleKey, FString Delimiter) { return NativeCall<bool, FString, UJsonObject **, bool, FString>(this, "UJsonObject.GetJsonObjectField", Key, OutObject, bForceSingleKey, Delimiter); }
	bool GetKeys(FString Key, TArray<FString> * OutValue, bool bForceSingleKey, FString Delimiter) { return NativeCall<bool, FString, TArray<FString> *, bool, FString>(this, "UJsonObject.GetKeys", Key, OutValue, bForceSingleKey, Delimiter); }
	bool GetRotatorArrayField(FString Key, TArray<FRotator> * OutValue, bool bForceSingleKey, FString Delimiter) { return NativeCall<bool, FString, TArray<FRotator> *, bool, FString>(this, "UJsonObject.GetRotatorArrayField", Key, OutValue, bForceSingleKey, Delimiter); }
	bool GetRotatorField(FString Key, FRotator * OutValue, bool bForceSingleKey, FString Delimiter) { return NativeCall<bool, FString, FRotator *, bool, FString>(this, "UJsonObject.GetRotatorField", Key, OutValue, bForceSingleKey, Delimiter); }
	bool GetStringArrayField(FString Key, TArray<FString> * OutValue, bool bForceSingleKey, FString Delimiter) { return NativeCall<bool, FString, TArray<FString> *, bool, FString>(this, "UJsonObject.GetStringArrayField", Key, OutValue, bForceSingleKey, Delimiter); }
	bool GetStringField(FString Key, FString * OutValue, bool bForceSingleKey, FString Delimiter) { return NativeCall<bool, FString, FString *, bool, FString>(this, "UJsonObject.GetStringField", Key, OutValue, bForceSingleKey, Delimiter); }
	bool GetVectorArrayField(FString Key, TArray<FVector> * OutValue, bool bForceSingleKey, FString Delimiter) { return NativeCall<bool, FString, TArray<FVector> *, bool, FString>(this, "UJsonObject.GetVectorArrayField", Key, OutValue, bForceSingleKey, Delimiter); }
	bool GetVectorField(FString Key, FVector * OutValue, bool bForceSingleKey, FString Delimiter) { return NativeCall<bool, FString, FVector *, bool, FString>(this, "UJsonObject.GetVectorField", Key, OutValue, bForceSingleKey, Delimiter); }
	bool IsNullField(FString Key, bool bForceSingleKey, FString Delimiter) { return NativeCall<bool, FString, bool, FString>(this, "UJsonObject.IsNullField", Key, bForceSingleKey, Delimiter); }
	static UJsonObject * JsonDeserialize(const FString * JsonData, FString * OutErrorMessage, UObject * WorldContextObject) { return NativeCall<UJsonObject *, const FString *, FString *, UObject *>(nullptr, "UJsonObject.JsonDeserialize", JsonData, OutErrorMessage, WorldContextObject); }
	FString * JsonSerialize(FString * result) { return NativeCall<FString *, FString *>(this, "UJsonObject.JsonSerialize", result); }
	void SetBoolArrayField(FString Key, TArray<bool> Value, bool bForceSingleKey, FString Delimiter) { NativeCall<void, FString, TArray<bool>, bool, FString>(this, "UJsonObject.SetBoolArrayField", Key, Value, bForceSingleKey, Delimiter); }
	void SetBoolField(FString Key, bool Value, bool bForceSingleKey, FString Delimiter) { NativeCall<void, FString, bool, bool, FString>(this, "UJsonObject.SetBoolField", Key, Value, bForceSingleKey, Delimiter); }
	void SetByteArrayField(FString Key, TArray<unsigned char> Value, bool bForceSingleKey, FString Delimiter) { NativeCall<void, FString, TArray<unsigned char>, bool, FString>(this, "UJsonObject.SetByteArrayField", Key, Value, bForceSingleKey, Delimiter); }
	void SetByteField(FString Key, char Value, bool bForceSingleKey, FString Delimiter) { NativeCall<void, FString, char, bool, FString>(this, "UJsonObject.SetByteField", Key, Value, bForceSingleKey, Delimiter); }
	void SetDoubleArrayField(FString Key, TArray<double> Value, bool bForceSingleKey, FString Delimiter) { NativeCall<void, FString, TArray<double>, bool, FString>(this, "UJsonObject.SetDoubleArrayField", Key, Value, bForceSingleKey, Delimiter); }
	void SetDoubleField(FString Key, long double Value, bool bForceSingleKey, FString Delimiter) { NativeCall<void, FString, long double, bool, FString>(this, "UJsonObject.SetDoubleField", Key, Value, bForceSingleKey, Delimiter); }
	void SetFloatArrayField(FString Key, TArray<float> Value, bool bForceSingleKey, FString Delimiter) { NativeCall<void, FString, TArray<float>, bool, FString>(this, "UJsonObject.SetFloatArrayField", Key, Value, bForceSingleKey, Delimiter); }
	void SetFloatField(FString Key, float Value, bool bForceSingleKey, FString Delimiter) { NativeCall<void, FString, float, bool, FString>(this, "UJsonObject.SetFloatField", Key, Value, bForceSingleKey, Delimiter); }
	void SetIntArrayField(FString Key, TArray<int> Value, bool bForceSingleKey, FString Delimiter) { NativeCall<void, FString, TArray<int>, bool, FString>(this, "UJsonObject.SetIntArrayField", Key, Value, bForceSingleKey, Delimiter); }
	void SetIntField(FString Key, int Value, bool bForceSingleKey, FString Delimiter) { NativeCall<void, FString, int, bool, FString>(this, "UJsonObject.SetIntField", Key, Value, bForceSingleKey, Delimiter); }
	void SetJsonObjectArrayField(FString Key, const TArray<UJsonObject *> * Value, bool bForceSingleKey, FString Delimiter) { NativeCall<void, FString, const TArray<UJsonObject *> *, bool, FString>(this, "UJsonObject.SetJsonObjectArrayField", Key, Value, bForceSingleKey, Delimiter); }
	void SetJsonObjectField(FString Key, const UJsonObject * Object, bool bForceSingleKey, FString Delimiter) { NativeCall<void, FString, const UJsonObject *, bool, FString>(this, "UJsonObject.SetJsonObjectField", Key, Object, bForceSingleKey, Delimiter); }
	void SetNullField(FString Key, bool bForceSingleKey, FString Delimiter) { NativeCall<void, FString, bool, FString>(this, "UJsonObject.SetNullField", Key, bForceSingleKey, Delimiter); }
	void SetRotatorArrayField(FString Key, const TArray<FRotator> * Value, bool bForceSingleKey, FString Delimiter) { NativeCall<void, FString, const TArray<FRotator> *, bool, FString>(this, "UJsonObject.SetRotatorArrayField", Key, Value, bForceSingleKey, Delimiter); }
	void SetRotatorField(FString Key, const FRotator * Value, bool bForceSingleKey, FString Delimiter) { NativeCall<void, FString, const FRotator *, bool, FString>(this, "UJsonObject.SetRotatorField", Key, Value, bForceSingleKey, Delimiter); }
	void SetStringArrayField(FString Key, const TArray<FString> * Value, bool bForceSingleKey, FString Delimiter) { NativeCall<void, FString, const TArray<FString> *, bool, FString>(this, "UJsonObject.SetStringArrayField", Key, Value, bForceSingleKey, Delimiter); }
	void SetStringField(FString Key, const FString * Value, bool bForceSingleKey, FString Delimiter) { NativeCall<void, FString, const FString *, bool, FString>(this, "UJsonObject.SetStringField", Key, Value, bForceSingleKey, Delimiter); }
	void SetVectorArrayField(FString Key, const TArray<FVector> * Value, bool bForceSingleKey, FString Delimiter) { NativeCall<void, FString, const TArray<FVector> *, bool, FString>(this, "UJsonObject.SetVectorArrayField", Key, Value, bForceSingleKey, Delimiter); }
	void SetVectorField(FString Key, const FVector * Value, bool bForceSingleKey, FString Delimiter) { NativeCall<void, FString, const FVector *, bool, FString>(this, "UJsonObject.SetVectorField", Key, Value, bForceSingleKey, Delimiter); }
};

