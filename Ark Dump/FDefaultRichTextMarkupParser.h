#pragma once

#include "BaseDeclarations.h"
#include "FDefaultRichTextMarkupParser.h"

struct IRichTextMarkupParser
{
	char __padding[0x8L];
};

struct FDefaultRichTextMarkupParser : IRichTextMarkupParser
{

	// Functions

	static TSharedRef<FDefaultRichTextMarkupParser,0> * Create(TSharedRef<FDefaultRichTextMarkupParser,0> * result) { return NativeCall<TSharedRef<FDefaultRichTextMarkupParser,0> *, TSharedRef<FDefaultRichTextMarkupParser,0> *>(nullptr, "FDefaultRichTextMarkupParser.Create", result); }
	void HandleEscapeSequences(const FString * Input, TArray<FTextLineParseResults> * LineParseResultsArray, FString * ConcatenatedUnescapedLines) { NativeCall<void, const FString *, TArray<FTextLineParseResults> *, FString *>(this, "FDefaultRichTextMarkupParser.HandleEscapeSequences", Input, LineParseResultsArray, ConcatenatedUnescapedLines); }
	void ParseLineRanges(const FString * Input, const TArray<FTextRange> * LineRanges, TArray<FTextLineParseResults> * LineParseResultsArray) { NativeCall<void, const FString *, const TArray<FTextRange> *, TArray<FTextLineParseResults> *>(this, "FDefaultRichTextMarkupParser.ParseLineRanges", Input, LineRanges, LineParseResultsArray); }
	void Process(TArray<FTextLineParseResults> * Results, const FString * Input, FString * Output) { NativeCall<void, TArray<FTextLineParseResults> *, const FString *, FString *>(this, "FDefaultRichTextMarkupParser.Process", Results, Input, Output); }
};

