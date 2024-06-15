#pragma once

#include "BaseDeclarations.h"
struct FInvalidReferenceRedirector
{
	char __padding[0x38L];
	FString& InvalidReferenceKeyField() { return *GetNativePointerField<FString*>(this, "FInvalidReferenceRedirector.InvalidReferenceKey"); }
	FStringAssetReference& RedirectedClassSoftReferenceField() { return *GetNativePointerField<FStringAssetReference*>(this, "FInvalidReferenceRedirector.RedirectedClassSoftReference"); }
	TArray<FString>& LimitedToMapsField() { return *GetNativePointerField<TArray<FString>*>(this, "FInvalidReferenceRedirector.LimitedToMaps"); }

	// Functions

	FInvalidReferenceRedirector * operator=(const FInvalidReferenceRedirector * __that) { return NativeCall<FInvalidReferenceRedirector *, const FInvalidReferenceRedirector *>(this, "FInvalidReferenceRedirector.operator=", __that); }
};

