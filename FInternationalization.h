#pragma once

#include "BaseDeclarations.h"
#include "FCulture.h"

struct FInternationalization
{
	char __padding[0xa0L];
	bool& bIsInitializedField() { return *GetNativePointerField<bool*>(this, "FInternationalization.bIsInitialized"); }
	TArray<TSharedRef<FCulture,1>>& AllCulturesField() { return *GetNativePointerField<TArray<TSharedRef<FCulture,1>>*>(this, "FInternationalization.AllCultures"); }
	int& CurrentCultureIndexField() { return *GetNativePointerField<int*>(this, "FInternationalization.CurrentCultureIndex"); }
	TSharedPtr<FCulture,1>& DefaultCultureField() { return *GetNativePointerField<TSharedPtr<FCulture,1>*>(this, "FInternationalization.DefaultCulture"); }
	TSharedPtr<FCulture,1>& InvariantCultureField() { return *GetNativePointerField<TSharedPtr<FCulture,1>*>(this, "FInternationalization.InvariantCulture"); }
	TArray<void *>& DLLHandlesField() { return *GetNativePointerField<TArray<void *>*>(this, "FInternationalization.DLLHandles"); }

	// Functions

	static FText * ForUseOnlyByLocMacroAndGraphNodeTextLiterals_CreateText(FText * result, const wchar_t * InTextLiteral, const wchar_t * Namespace, const wchar_t * Key) { return NativeCall<FText *, FText *, const wchar_t *, const wchar_t *, const wchar_t *>(nullptr, "FInternationalization.ForUseOnlyByLocMacroAndGraphNodeTextLiterals_CreateText", result, InTextLiteral, Namespace, Key); }
	void FICUCachedFileData() { NativeCall<void>(this, "FInternationalization.FICUCachedFileData"); }
	void ConfirmCultureName(const FString * Name) { NativeCall<void, const FString *>(this, "FInternationalization.ConfirmCultureName", Name); }
	static FInternationalization * Get() { return NativeCall<FInternationalization *>(nullptr, "FInternationalization.Get"); }
	TSharedPtr<FCulture,1> * GetCulture(TSharedPtr<FCulture,1> * result, const FString * Name) { return NativeCall<TSharedPtr<FCulture,1> *, TSharedPtr<FCulture,1> *, const FString *>(this, "FInternationalization.GetCulture", result, Name); }
	int GetCultureIndex(const FString * Name) { return NativeCall<int, const FString *>(this, "FInternationalization.GetCultureIndex", Name); }
	void GetCulturesWithAvailableLocalization(const TArray<FString> * InLocalizationPaths, TArray<TSharedRef<FCulture,1>> * OutAvailableCultures, const bool bIncludeDerivedCultures) { NativeCall<void, const TArray<FString> *, TArray<TSharedRef<FCulture,1>> *, const bool>(this, "FInternationalization.GetCulturesWithAvailableLocalization", InLocalizationPaths, OutAvailableCultures, bIncludeDerivedCultures); }
	TSharedRef<FCulture,1> * GetCurrentCulture(TSharedRef<FCulture,1> * result) { return NativeCall<TSharedRef<FCulture,1> *, TSharedRef<FCulture,1> *>(this, "FInternationalization.GetCurrentCulture", result); }
	TSharedRef<FCulture,1> * GetDefaultCulture(TSharedRef<FCulture,1> * result) { return NativeCall<TSharedRef<FCulture,1> *, TSharedRef<FCulture,1> *>(this, "FInternationalization.GetDefaultCulture", result); }
	void Initialize() { NativeCall<void>(this, "FInternationalization.Initialize"); }
	void PopulateAllCultures() { NativeCall<void>(this, "FInternationalization.PopulateAllCultures"); }
	void SetCurrentCulture(const FString * Name) { NativeCall<void, const FString *>(this, "FInternationalization.SetCurrentCulture", Name); }
	void Terminate() { NativeCall<void>(this, "FInternationalization.Terminate"); }
	TSharedRef<FCulture,1> * GetInvariantCulture(TSharedRef<FCulture,1> * result) { return NativeCall<TSharedRef<FCulture,1> *, TSharedRef<FCulture,1> *>(this, "FInternationalization.GetInvariantCulture", result); }
};

