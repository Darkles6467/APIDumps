#pragma once

#include "BaseDeclarations.h"
struct FReflectionCaptureFullHDRDerivedData
{
	char __padding[0x38L];
	TRefCountPtr<FGraphEvent>& UncompressTaskField() { return *GetNativePointerField<TRefCountPtr<FGraphEvent>*>(this, "FReflectionCaptureFullHDRDerivedData.UncompressTask"); }
	TArray<unsigned char>& CompressedCapturedDataField() { return *GetNativePointerField<TArray<unsigned char>*>(this, "FReflectionCaptureFullHDRDerivedData.CompressedCapturedData"); }
	TArray<unsigned char>& CachedUncompressedCapturedDataField() { return *GetNativePointerField<TArray<unsigned char>*>(this, "FReflectionCaptureFullHDRDerivedData.CachedUncompressedCapturedData"); }
	TArray<unsigned char>& CapturedDataForSM4LoadField() { return *GetNativePointerField<TArray<unsigned char>*>(this, "FReflectionCaptureFullHDRDerivedData.CapturedDataForSM4Load"); }

	// Functions

	static FString * GetDDCKeyString(FString * result, const FGuid * StateId) { return NativeCall<FString *, FString *, const FGuid *>(nullptr, "FReflectionCaptureFullHDRDerivedData.GetDDCKeyString", result, StateId); }
};

