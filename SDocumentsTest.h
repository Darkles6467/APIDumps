#pragma once

#include "BaseDeclarations.h"
#include "SCompoundWidget.h"
#include "SWidget.h"
#include "FSlateControlledConstruction.h"

struct SDocumentsTest : SCompoundWidget
{
	char __padding[0x18L];
	TArray<TSharedRef<SDocumentsTest::FDocumentInfo,0>>& DocumentsField() { return *GetNativePointerField<TArray<TSharedRef<SDocumentsTest::FDocumentInfo,0>>*>(this, "SDocumentsTest.Documents"); }
};

