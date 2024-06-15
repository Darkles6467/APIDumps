#pragma once

#include "BaseDeclarations.h"
struct IRichTextMarkupWriter
{
	char __padding[0x8L];

	// Functions

	void FRichTextLine() { NativeCall<void>(this, "IRichTextMarkupWriter.FRichTextLine"); }
	void FRichTextRun() { NativeCall<void>(this, "IRichTextMarkupWriter.FRichTextRun"); }
};

struct FDefaultRichTextMarkupWriter : IRichTextMarkupWriter
{
};

