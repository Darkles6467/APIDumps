#pragma once

#include "BaseDeclarations.h"
#include "ISlateStyle.h"

struct FSlateStyleSet : ISlateStyle
{
	char __padding[0x3a0L];
	FName& StyleSetNameField() { return *GetNativePointerField<FName*>(this, "FSlateStyleSet.StyleSetName"); }
	FString& ContentRootDirField() { return *GetNativePointerField<FString*>(this, "FSlateStyleSet.ContentRootDir"); }
	FString& CoreContentRootDirField() { return *GetNativePointerField<FString*>(this, "FSlateStyleSet.CoreContentRootDir"); }

	// Functions

	const FLinearColor * GetColor(const FName PropertyName, const char * Specifier) { return NativeCall<const FLinearColor *, const FName, const char *>(this, "FSlateStyleSet.GetColor", PropertyName, Specifier); }
	float GetFloat(const FName PropertyName, const char * Specifier) { return NativeCall<float, const FName, const char *>(this, "FSlateStyleSet.GetFloat", PropertyName, Specifier); }
	FSlateFontInfo * GetFontStyle(FSlateFontInfo * result, const FName PropertyName, const char * Specifier) { return NativeCall<FSlateFontInfo *, FSlateFontInfo *, const FName, const char *>(this, "FSlateStyleSet.GetFontStyle", result, PropertyName, Specifier); }
	const FMargin * GetMargin(const FName PropertyName, const char * Specifier) { return NativeCall<const FMargin *, const FName, const char *>(this, "FSlateStyleSet.GetMargin", PropertyName, Specifier); }
	void GetResources(TArray<FSlateBrush const *> * OutResources) { NativeCall<void, TArray<FSlateBrush const *> *>(this, "FSlateStyleSet.GetResources", OutResources); }
	const FSlateColor * GetSlateColor(const FSlateColor * result, const FName PropertyName, const char * Specifier) { return NativeCall<const FSlateColor *, const FSlateColor *, const FName, const char *>(this, "FSlateStyleSet.GetSlateColor", result, PropertyName, Specifier); }
	const FSlateSound * GetSound(const FName PropertyName, const char * Specifier) { return NativeCall<const FSlateSound *, const FName, const char *>(this, "FSlateStyleSet.GetSound", PropertyName, Specifier); }
	FVector2D * GetVector(FVector2D * result, const FName PropertyName, const char * Specifier) { return NativeCall<FVector2D *, FVector2D *, const FName, const char *>(this, "FSlateStyleSet.GetVector", result, PropertyName, Specifier); }
	bool IsBrushFromFile(const FString * FilePath, const FSlateBrush * Brush) { return NativeCall<bool, const FString *, const FSlateBrush *>(this, "FSlateStyleSet.IsBrushFromFile", FilePath, Brush); }
	void Log(ISlateStyle::EStyleMessageSeverity Severity, const FText * Message) { NativeCall<void, ISlateStyle::EStyleMessageSeverity, const FText *>(this, "FSlateStyleSet.Log", Severity, Message); }
	void LogUnusedBrushResources() { NativeCall<void>(this, "FSlateStyleSet.LogUnusedBrushResources"); }
	FString * RootToContentDir(FString * result, const FString * RelativePath) { return NativeCall<FString *, FString *, const FString *>(this, "FSlateStyleSet.RootToContentDir", result, RelativePath); }
	FString * RootToContentDir(FString * result, const FString * RelativePath, const wchar_t * Extension) { return NativeCall<FString *, FString *, const FString *, const wchar_t *>(this, "FSlateStyleSet.RootToContentDir", result, RelativePath, Extension); }
	FString * RootToContentDir(FString * result, const char * RelativePath) { return NativeCall<FString *, FString *, const char *>(this, "FSlateStyleSet.RootToContentDir", result, RelativePath); }
	FString * RootToContentDir(FString * result, const char * RelativePath, const wchar_t * Extension) { return NativeCall<FString *, FString *, const char *, const wchar_t *>(this, "FSlateStyleSet.RootToContentDir", result, RelativePath, Extension); }
	FString * RootToContentDir(FString * result, const wchar_t * RelativePath, const wchar_t * Extension) { return NativeCall<FString *, FString *, const wchar_t *, const wchar_t *>(this, "FSlateStyleSet.RootToContentDir", result, RelativePath, Extension); }
	FString * RootToContentDir(FString * result, const wchar_t * RelativePath) { return NativeCall<FString *, FString *, const wchar_t *>(this, "FSlateStyleSet.RootToContentDir", result, RelativePath); }
	FString * RootToCoreContentDir(FString * result, const FString * RelativePath) { return NativeCall<FString *, FString *, const FString *>(this, "FSlateStyleSet.RootToCoreContentDir", result, RelativePath); }
	FString * RootToCoreContentDir(FString * result, const FString * RelativePath, const wchar_t * Extension) { return NativeCall<FString *, FString *, const FString *, const wchar_t *>(this, "FSlateStyleSet.RootToCoreContentDir", result, RelativePath, Extension); }
	FString * RootToCoreContentDir(FString * result, const char * RelativePath) { return NativeCall<FString *, FString *, const char *>(this, "FSlateStyleSet.RootToCoreContentDir", result, RelativePath); }
	FString * RootToCoreContentDir(FString * result, const char * RelativePath, const wchar_t * Extension) { return NativeCall<FString *, FString *, const char *, const wchar_t *>(this, "FSlateStyleSet.RootToCoreContentDir", result, RelativePath, Extension); }
	FString * RootToCoreContentDir(FString * result, const wchar_t * RelativePath, const wchar_t * Extension) { return NativeCall<FString *, FString *, const wchar_t *, const wchar_t *>(this, "FSlateStyleSet.RootToCoreContentDir", result, RelativePath, Extension); }
	FString * RootToCoreContentDir(FString * result, const wchar_t * RelativePath) { return NativeCall<FString *, FString *, const wchar_t *>(this, "FSlateStyleSet.RootToCoreContentDir", result, RelativePath); }
	void Set(const FName PropertyName, const FLinearColor * InColor) { NativeCall<void, const FName, const FLinearColor *>(this, "FSlateStyleSet.Set", PropertyName, InColor); }
	void Set(const FName PropertyName, const FMargin * InMargin) { NativeCall<void, const FName, const FMargin *>(this, "FSlateStyleSet.Set", PropertyName, InMargin); }
	void Set(const FName PropertyName, const FSlateColor * InColor) { NativeCall<void, const FName, const FSlateColor *>(this, "FSlateStyleSet.Set", PropertyName, InColor); }
	void Set(FName PropertyName, const FSlateFontInfo * InFontInfo) { NativeCall<void, FName, const FSlateFontInfo *>(this, "FSlateStyleSet.Set", PropertyName, InFontInfo); }
	void Set(const FName PropertyName, const float InFloat) { NativeCall<void, const FName, const float>(this, "FSlateStyleSet.Set", PropertyName, InFloat); }
	void Set(const FName PropertyName, FSlateBrush * InBrush) { NativeCall<void, const FName, FSlateBrush *>(this, "FSlateStyleSet.Set", PropertyName, InBrush); }
	void Set(const FName PropertyName, FSlateNoResource * InBrush) { NativeCall<void, const FName, FSlateNoResource *>(this, "FSlateStyleSet.Set", PropertyName, InBrush); }
	void SetContentRoot(const FString * InContentRootDir) { NativeCall<void, const FString *>(this, "FSlateStyleSet.SetContentRoot", InContentRootDir); }
	void SetCoreContentRoot(const FString * InCoreContentRootDir) { NativeCall<void, const FString *>(this, "FSlateStyleSet.SetCoreContentRoot", InCoreContentRootDir); }
};

