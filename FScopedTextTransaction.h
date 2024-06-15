#pragma once

#include "BaseDeclarations.h"
struct FScopedTextTransaction
{
	char __padding[0x10L];
	const TSharedRef<ITextEditorWidget,0>& TextEditorField() { return *GetNativePointerField<const TSharedRef<ITextEditorWidget,0>*>(this, "FScopedTextTransaction.TextEditor"); }
};

