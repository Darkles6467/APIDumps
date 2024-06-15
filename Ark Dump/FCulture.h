#pragma once

#include "BaseDeclarations.h"
struct FCulture
{
	char __padding[0x10L];
	TSharedRef<FCulture::FICUCultureImplementation,0>& ImplementationField() { return *GetNativePointerField<TSharedRef<FCulture::FICUCultureImplementation,0>*>(this, "FCulture.Implementation"); }

	// Functions

	void FICUCultureImplementation(const FString * LocaleName) { NativeCall<void, const FString *>(this, "FCulture.FICUCultureImplementation", LocaleName); }
	void FICUCultureImplementation() { NativeCall<void>(this, "FCulture.FICUCultureImplementation"); }
	TSharedRef<icu_53::BreakIterator const ,0> * FICUCultureImplementation(TSharedRef<icu_53::BreakIterator const ,0> * result, const EBreakIteratorType Type) { return NativeCall<TSharedRef<icu_53::BreakIterator const ,0> *, TSharedRef<icu_53::BreakIterator const ,0> *, const EBreakIteratorType>(this, "FCulture.FICUCultureImplementation", result, Type); }
	TSharedRef<icu_53::Collator const ,1> * FICUCultureImplementation(TSharedRef<icu_53::Collator const ,1> * result, const ETextComparisonLevel::Type ComparisonLevel) { return NativeCall<TSharedRef<icu_53::Collator const ,1> *, TSharedRef<icu_53::Collator const ,1> *, const ETextComparisonLevel::Type>(this, "FCulture.FICUCultureImplementation", result, ComparisonLevel); }
	TSharedRef<icu_53::DecimalFormat const ,0> * FICUCultureImplementation(TSharedRef<icu_53::DecimalFormat const ,0> * result, const FString * CurrencyCode, const FNumberFormattingOptions *const Options) { return NativeCall<TSharedRef<icu_53::DecimalFormat const ,0> *, TSharedRef<icu_53::DecimalFormat const ,0> *, const FString *, const FNumberFormattingOptions *const>(this, "FCulture.FICUCultureImplementation", result, CurrencyCode, Options); }
	TSharedRef<icu_53::DateFormat const ,0> * FICUCultureImplementation(TSharedRef<icu_53::DateFormat const ,0> * result, const EDateTimeStyle::Type DateStyle) { return NativeCall<TSharedRef<icu_53::DateFormat const ,0> *, TSharedRef<icu_53::DateFormat const ,0> *, const EDateTimeStyle::Type>(this, "FCulture.FICUCultureImplementation", result, DateStyle); }
	TSharedRef<icu_53::DateFormat const ,0> * FICUCultureImplementation(TSharedRef<icu_53::DateFormat const ,0> * result, const EDateTimeStyle::Type DateStyle, const EDateTimeStyle::Type TimeStyle, const FString * TimeZone) { return NativeCall<TSharedRef<icu_53::DateFormat const ,0> *, TSharedRef<icu_53::DateFormat const ,0> *, const EDateTimeStyle::Type, const EDateTimeStyle::Type, const FString *>(this, "FCulture.FICUCultureImplementation", result, DateStyle, TimeStyle, TimeZone); }
	TSharedRef<icu_53::DecimalFormat const ,0> * FICUCultureImplementation(TSharedRef<icu_53::DecimalFormat const ,0> * result, const FNumberFormattingOptions *const Options) { return NativeCall<TSharedRef<icu_53::DecimalFormat const ,0> *, TSharedRef<icu_53::DecimalFormat const ,0> *, const FNumberFormattingOptions *const>(this, "FCulture.FICUCultureImplementation", result, Options); }
	FString * GetEnglishName(FString * result) { return NativeCall<FString *, FString *>(this, "FCulture.GetEnglishName", result); }
	FString * FICUCultureImplementation(FString * result) { return NativeCall<FString *, FString *>(this, "FCulture.FICUCultureImplementation", result); }
	FString * GetName(FString * result) { return NativeCall<FString *, FString *>(this, "FCulture.GetName", result); }
	FString * FICUCultureImplementation(FString * result) { return NativeCall<FString *, FString *>(this, "FCulture.FICUCultureImplementation", result); }
	static FString * GetParentName(FString * result, const FString * CultureName) { return NativeCall<FString *, FString *, const FString *>(nullptr, "FCulture.GetParentName", result, CultureName); }
	static FString * FICUCultureImplementation(FString * result, const FString * CultureName) { return NativeCall<FString *, FString *, const FString *>(nullptr, "FCulture.FICUCultureImplementation", result, CultureName); }
	TSharedRef<icu_53::DecimalFormat const ,0> * FICUCultureImplementation(TSharedRef<icu_53::DecimalFormat const ,0> * result, const FNumberFormattingOptions *const Options) { return NativeCall<TSharedRef<icu_53::DecimalFormat const ,0> *, TSharedRef<icu_53::DecimalFormat const ,0> *, const FNumberFormattingOptions *const>(this, "FCulture.FICUCultureImplementation", result, Options); }
	TSharedRef<icu_53::DateFormat const ,0> * FICUCultureImplementation(TSharedRef<icu_53::DateFormat const ,0> * result, const EDateTimeStyle::Type TimeStyle, const FString * TimeZone) { return NativeCall<TSharedRef<icu_53::DateFormat const ,0> *, TSharedRef<icu_53::DateFormat const ,0> *, const EDateTimeStyle::Type, const FString *>(this, "FCulture.FICUCultureImplementation", result, TimeStyle, TimeZone); }
	FString * GetTwoLetterISOLanguageName(FString * result) { return NativeCall<FString *, FString *>(this, "FCulture.GetTwoLetterISOLanguageName", result); }
	FString * FICUCultureImplementation(FString * result) { return NativeCall<FString *, FString *>(this, "FCulture.FICUCultureImplementation", result); }
};

