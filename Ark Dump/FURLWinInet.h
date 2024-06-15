#pragma once

#include "BaseDeclarations.h"
struct FURLWinInet
{
	char __padding[0xd0L];
	FString& RequestURLField() { return *GetNativePointerField<FString*>(this, "FURLWinInet.RequestURL"); }
	const wchar_t * URLPtrField() { return GetNativePointerField<const wchar_t *>(this, "FURLWinInet.URLPtr"); }
	URL_COMPONENTSW& URLPartsField() { return *GetNativePointerField<URL_COMPONENTSW*>(this, "FURLWinInet.URLParts"); }

	// Functions

	void CrackUrlParameters() { NativeCall<void>(this, "FURLWinInet.CrackUrlParameters"); }
	FString * GetExtraInfo(FString * result) { return NativeCall<FString *, FString *>(this, "FURLWinInet.GetExtraInfo", result); }
	FString * GetHost(FString * result) { return NativeCall<FString *, FString *>(this, "FURLWinInet.GetHost", result); }
	FString * GetPath(FString * result) { return NativeCall<FString *, FString *>(this, "FURLWinInet.GetPath", result); }
	const URL_COMPONENTSW * GetURLComponents() { return NativeCall<const URL_COMPONENTSW *>(this, "FURLWinInet.GetURLComponents"); }
};

