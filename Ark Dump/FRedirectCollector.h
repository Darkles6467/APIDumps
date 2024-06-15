#pragma once

#include "BaseDeclarations.h"
struct FRedirectCollector
{
	char __padding[0xc0L];
	FString& FileToFixupField() { return *GetNativePointerField<FString*>(this, "FRedirectCollector.FileToFixup"); }
	TArray<FRedirection>& RedirectionsField() { return *GetNativePointerField<TArray<FRedirection>*>(this, "FRedirectCollector.Redirections"); }

	// Functions

	void OnRedirectorFollowed(const FString * InString, UObject * InObject) { NativeCall<void, const FString *, UObject *>(this, "FRedirectCollector.OnRedirectorFollowed", InString, InObject); }
	void OnStringAssetReferenceLoaded(const FString * InString) { NativeCall<void, const FString *>(this, "FRedirectCollector.OnStringAssetReferenceLoaded", InString); }
	FString * OnStringAssetReferenceSaved(FString * result, const FString * InString) { return NativeCall<FString *, FString *, const FString *>(this, "FRedirectCollector.OnStringAssetReferenceSaved", result, InString); }
};

