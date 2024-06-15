#pragma once

#include "BaseDeclarations.h"
#include "UObject.h"
#include "UObjectBaseUtility.h"
#include "UObjectBase.h"

struct UPlatformInterfaceWebResponse : UObject
{
	char __padding[0x88L];
	FString& OriginalURLField() { return *GetNativePointerField<FString*>(this, "UPlatformInterfaceWebResponse.OriginalURL"); }
	int& ResponseCodeField() { return *GetNativePointerField<int*>(this, "UPlatformInterfaceWebResponse.ResponseCode"); }
	int& TagField() { return *GetNativePointerField<int*>(this, "UPlatformInterfaceWebResponse.Tag"); }
	FString& StringResponseField() { return *GetNativePointerField<FString*>(this, "UPlatformInterfaceWebResponse.StringResponse"); }
	TArray<unsigned char>& BinaryResponseField() { return *GetNativePointerField<TArray<unsigned char>*>(this, "UPlatformInterfaceWebResponse.BinaryResponse"); }

	// Functions

	void GetHeader(int HeaderIndex, FString * Header, FString * Value) { NativeCall<void, int, FString *, FString *>(this, "UPlatformInterfaceWebResponse.GetHeader", HeaderIndex, Header, Value); }
	FString * GetHeaderValue(FString * result, const FString * HeaderName) { return NativeCall<FString *, FString *, const FString *>(this, "UPlatformInterfaceWebResponse.GetHeaderValue", result, HeaderName); }
	int GetNumHeaders() { return NativeCall<int>(this, "UPlatformInterfaceWebResponse.GetNumHeaders"); }
};

