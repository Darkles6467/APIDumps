#pragma once

#include "BaseDeclarations.h"
#include "FRefCountedObject.h"
#include "FReflectionCaptureEncodedHDRDerivedData.h"

struct FReflectionCaptureEncodedHDRDerivedData : FRefCountedObject
{
	char __padding[0x10L];
	TArray<unsigned char>& CapturedDataField() { return *GetNativePointerField<TArray<unsigned char>*>(this, "FReflectionCaptureEncodedHDRDerivedData.CapturedData"); }

	// Functions

	static TRefCountPtr<FReflectionCaptureEncodedHDRDerivedData> * GenerateEncodedHDRData(TRefCountPtr<FReflectionCaptureEncodedHDRDerivedData> * result, const FReflectionCaptureFullHDRDerivedData * FullHDRData, const FGuid * StateId, float Brightness) { return NativeCall<TRefCountPtr<FReflectionCaptureEncodedHDRDerivedData> *, TRefCountPtr<FReflectionCaptureEncodedHDRDerivedData> *, const FReflectionCaptureFullHDRDerivedData *, const FGuid *, float>(nullptr, "FReflectionCaptureEncodedHDRDerivedData.GenerateEncodedHDRData", result, FullHDRData, StateId, Brightness); }
	void GenerateFromDerivedDataSource(const FReflectionCaptureFullHDRDerivedData * FullHDRDerivedData, float Brightness) { NativeCall<void, const FReflectionCaptureFullHDRDerivedData *, float>(this, "FReflectionCaptureEncodedHDRDerivedData.GenerateFromDerivedDataSource", FullHDRDerivedData, Brightness); }
	static FString * GetDDCKeyString(FString * result, const FGuid * StateId) { return NativeCall<FString *, FString *, const FGuid *>(nullptr, "FReflectionCaptureEncodedHDRDerivedData.GetDDCKeyString", result, StateId); }
};

