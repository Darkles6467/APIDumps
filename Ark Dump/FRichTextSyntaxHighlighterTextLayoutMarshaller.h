#pragma once

#include "BaseDeclarations.h"
#include "FBaseTextLayoutMarshaller.h"
#include "ITextLayoutMarshaller.h"

struct FPlainTextLayoutMarshaller : FBaseTextLayoutMarshaller
{

	// Functions

	void GetText(FString * TargetString, const FTextLayout * SourceTextLayout) { NativeCall<void, FString *, const FTextLayout *>(this, "FPlainTextLayoutMarshaller.GetText", TargetString, SourceTextLayout); }
	void SetText(const FString * SourceString, FTextLayout * TargetTextLayout) { NativeCall<void, const FString *, FTextLayout *>(this, "FPlainTextLayoutMarshaller.SetText", SourceString, TargetTextLayout); }
};

struct FSyntaxHighlighterTextLayoutMarshaller : FPlainTextLayoutMarshaller
{
	char __padding[0x18L];
	TSharedPtr<FSyntaxTokenizer,0>& TokenizerField() { return *GetNativePointerField<TSharedPtr<FSyntaxTokenizer,0>*>(this, "FSyntaxHighlighterTextLayoutMarshaller.Tokenizer"); }
	bool& bSyntaxHighlightingEnabledField() { return *GetNativePointerField<bool*>(this, "FSyntaxHighlighterTextLayoutMarshaller.bSyntaxHighlightingEnabled"); }
};

struct FRichTextSyntaxHighlighterTextLayoutMarshaller : FSyntaxHighlighterTextLayoutMarshaller
{
	char __padding[0x578L];
	FRichTextSyntaxHighlighterTextLayoutMarshaller::FSyntaxTextStyle& SyntaxTextStyleField() { return *GetNativePointerField<FRichTextSyntaxHighlighterTextLayoutMarshaller::FSyntaxTextStyle*>(this, "FRichTextSyntaxHighlighterTextLayoutMarshaller.SyntaxTextStyle"); }
};

