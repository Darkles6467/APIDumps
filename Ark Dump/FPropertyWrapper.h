#pragma once

#include "BaseDeclarations.h"
struct FPropertyWrapper
{
	char __padding[0x28L];
	void * DataPtrField() { return GetNativePointerField<void *>(this, "FPropertyWrapper.DataPtr"); }
	__int64& CheckFlagsField() { return *GetNativePointerField<__int64*>(this, "FPropertyWrapper.CheckFlags"); }
	__int64& SkipFlagsField() { return *GetNativePointerField<__int64*>(this, "FPropertyWrapper.SkipFlags"); }

	// Functions

	FString * GetName(FString * result) { return NativeCall<FString *, FString *>(this, "FPropertyWrapper.GetName", result); }
	FString * GetTypeName(FString * result) { return NativeCall<FString *, FString *>(this, "FPropertyWrapper.GetTypeName", result); }
	FPropertyWrapper * ArrayAdd(FPropertyWrapper * result) { return NativeCall<FPropertyWrapper *, FPropertyWrapper *>(this, "FPropertyWrapper.ArrayAdd", result); }
	FPropertyWrapper * ArrayGet(FPropertyWrapper * result, int Index) { return NativeCall<FPropertyWrapper *, FPropertyWrapper *, int>(this, "FPropertyWrapper.ArrayGet", result, Index); }
	FPropertyWrapper * ArrayInsert(FPropertyWrapper * result, int AtIndex) { return NativeCall<FPropertyWrapper *, FPropertyWrapper *, int>(this, "FPropertyWrapper.ArrayInsert", result, AtIndex); }
	bool ArrayIsValidIndex(int Index) { return NativeCall<bool, int>(this, "FPropertyWrapper.ArrayIsValidIndex", Index); }
	int ArrayNum() { return NativeCall<int>(this, "FPropertyWrapper.ArrayNum"); }
	bool ArrayRemoveAtIndex(int Index) { return NativeCall<bool, int>(this, "FPropertyWrapper.ArrayRemoveAtIndex", Index); }
	bool ArraySetNum(int NewArraySize) { return NativeCall<bool, int>(this, "FPropertyWrapper.ArraySetNum", NewArraySize); }
	bool DeserializeFromString(const FString * SerializedValue) { return NativeCall<bool, const FString *>(this, "FPropertyWrapper.DeserializeFromString", SerializedValue); }
	bool DeserializeFromStringArray(const TArray<FString> * SerializedArray) { return NativeCall<bool, const TArray<FString> *>(this, "FPropertyWrapper.DeserializeFromStringArray", SerializedArray); }
	FPropertyWrapper * FindStructPropertyByName(FPropertyWrapper * result, const FString * PropertyName) { return NativeCall<FPropertyWrapper *, FPropertyWrapper *, const FString *>(this, "FPropertyWrapper.FindStructPropertyByName", result, PropertyName); }
	bool GetBoolValue(bool * OutValue) { return NativeCall<bool, bool *>(this, "FPropertyWrapper.GetBoolValue", OutValue); }
	bool GetDoubleValue(long double * OutValue) { return NativeCall<bool, long double *>(this, "FPropertyWrapper.GetDoubleValue", OutValue); }
	bool GetEnumValue(FString * OutValue) { return NativeCall<bool, FString *>(this, "FPropertyWrapper.GetEnumValue", OutValue); }
	bool GetFloatValue(float * OutValue) { return NativeCall<bool, float *>(this, "FPropertyWrapper.GetFloatValue", OutValue); }
	bool GetNameValue(FString * OutValue) { return NativeCall<bool, FString *>(this, "FPropertyWrapper.GetNameValue", OutValue); }
	bool GetStringValue(FString * OutValue) { return NativeCall<bool, FString *>(this, "FPropertyWrapper.GetStringValue", OutValue); }
	static FString * PropToString(FString * result, UProperty * Property, void * Data) { return NativeCall<FString *, FString *, UProperty *, void *>(nullptr, "FPropertyWrapper.PropToString", result, Property, Data); }
	bool SerializeToString(FString * OutSerializedValue) { return NativeCall<bool, FString *>(this, "FPropertyWrapper.SerializeToString", OutSerializedValue); }
	bool SerializeToStringArray(TArray<FString> * OutSerializedArray) { return NativeCall<bool, TArray<FString> *>(this, "FPropertyWrapper.SerializeToStringArray", OutSerializedArray); }
	bool SetBoolValue(bool bNewValue) { return NativeCall<bool, bool>(this, "FPropertyWrapper.SetBoolValue", bNewValue); }
	bool SetDoubleValue(long double NewValue) { return NativeCall<bool, long double>(this, "FPropertyWrapper.SetDoubleValue", NewValue); }
	bool SetEnumValue(const FString * NewValue) { return NativeCall<bool, const FString *>(this, "FPropertyWrapper.SetEnumValue", NewValue); }
	bool SetFloatValue(float NewValue) { return NativeCall<bool, float>(this, "FPropertyWrapper.SetFloatValue", NewValue); }
	bool SetNameValue(const FString * NewValue) { return NativeCall<bool, const FString *>(this, "FPropertyWrapper.SetNameValue", NewValue); }
	bool SetStringValue(const FString * NewValue) { return NativeCall<bool, const FString *>(this, "FPropertyWrapper.SetStringValue", NewValue); }
};

