#pragma once

#include "BaseDeclarations.h"
#include "FBaseTextLayoutMarshaller.h"
#include "ITextLayoutMarshaller.h"
#include "FRichTextLayoutMarshaller.h"
#include "FDefaultRichTextMarkupParser.h"
#include "FDefaultRichTextMarkupWriter.h"

struct FRichTextLayoutMarshaller : FBaseTextLayoutMarshaller
{
	char __padding[0x48L];

	// Functions

	static TSharedRef<FRichTextLayoutMarshaller,0> * Create(TSharedRef<FRichTextLayoutMarshaller,0> * result, TSharedPtr<IRichTextMarkupParser,0> InParser, TSharedPtr<IRichTextMarkupWriter,0> InWriter, TArray<TSharedRef<ITextDecorator,0>> InDecorators, const ISlateStyle *const InDecoratorStyleSet) { return NativeCall<TSharedRef<FRichTextLayoutMarshaller,0> *, TSharedRef<FRichTextLayoutMarshaller,0> *, TSharedPtr<IRichTextMarkupParser,0>, TSharedPtr<IRichTextMarkupWriter,0>, TArray<TSharedRef<ITextDecorator,0>>, const ISlateStyle *const>(nullptr, "FRichTextLayoutMarshaller.Create", result, InParser, InWriter, InDecorators, InDecoratorStyleSet); }
	void GetText(FString * TargetString, const FTextLayout * SourceTextLayout) { NativeCall<void, FString *, const FTextLayout *>(this, "FRichTextLayoutMarshaller.GetText", TargetString, SourceTextLayout); }
	void SetText(const FString * SourceString, FTextLayout * TargetTextLayout) { NativeCall<void, const FString *, FTextLayout *>(this, "FRichTextLayoutMarshaller.SetText", SourceString, TargetTextLayout); }
};

