#pragma once

#include "BaseDeclarations.h"
struct FVariantData
{
	char __padding[0x18L];
	EOnlineKeyValuePairDataType::Type& TypeField() { return *GetNativePointerField<EOnlineKeyValuePairDataType::Type*>(this, "FVariantData.Type"); }
	FVariantData::ValueUnion& ValueField() { return *GetNativePointerField<FVariantData::ValueUnion*>(this, "FVariantData.Value"); }

	// Functions

	FVariantData * operator=(const FVariantData * Other) { return NativeCall<FVariantData *, const FVariantData *>(this, "FVariantData.operator=", Other); }
	bool operator==(const FVariantData * Other) { return NativeCall<bool, const FVariantData *>(this, "FVariantData.operator==", Other); }
	bool operator!=(const FVariantData * Other) { return NativeCall<bool, const FVariantData *>(this, "FVariantData.operator!=", Other); }
	void Empty() { NativeCall<void>(this, "FVariantData.Empty"); }
	bool FromString(const FString * NewValue) { return NativeCall<bool, const FString *>(this, "FVariantData.FromString", NewValue); }
	void GetValue(int * OutData) { NativeCall<void, int *>(this, "FVariantData.GetValue", OutData); }
	void GetValue(float * OutData) { NativeCall<void, float *>(this, "FVariantData.GetValue", OutData); }
	void GetValue(long double * OutData) { NativeCall<void, long double *>(this, "FVariantData.GetValue", OutData); }
	void GetValue(TArray<unsigned char> * OutData) { NativeCall<void, TArray<unsigned char> *>(this, "FVariantData.GetValue", OutData); }
	void GetValue(FString * OutData) { NativeCall<void, FString *>(this, "FVariantData.GetValue", OutData); }
	void GetValue(unsigned __int64 * OutData) { NativeCall<void, unsigned __int64 *>(this, "FVariantData.GetValue", OutData); }
	void GetValue(bool * OutData) { NativeCall<void, bool *>(this, "FVariantData.GetValue", OutData); }
	void SetValue(const TArray<unsigned char> * InData) { NativeCall<void, const TArray<unsigned char> *>(this, "FVariantData.SetValue", InData); }
	void SetValue(const FString * InData) { NativeCall<void, const FString *>(this, "FVariantData.SetValue", InData); }
	void SetValue(int InData) { NativeCall<void, int>(this, "FVariantData.SetValue", InData); }
	void SetValue(unsigned int Size, const char * InData) { NativeCall<void, unsigned int, const char *>(this, "FVariantData.SetValue", Size, InData); }
	void SetValue(float InData) { NativeCall<void, float>(this, "FVariantData.SetValue", InData); }
	void SetValue(long double InData) { NativeCall<void, long double>(this, "FVariantData.SetValue", InData); }
	void SetValue(const wchar_t * InData) { NativeCall<void, const wchar_t *>(this, "FVariantData.SetValue", InData); }
	void SetValue(unsigned __int64 InData) { NativeCall<void, unsigned __int64>(this, "FVariantData.SetValue", InData); }
	void SetValue(bool InData) { NativeCall<void, bool>(this, "FVariantData.SetValue", InData); }
	FString * ToString(FString * result) { return NativeCall<FString *, FString *>(this, "FVariantData.ToString", result); }
};

