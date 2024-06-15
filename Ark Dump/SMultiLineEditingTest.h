#pragma once

#include "BaseDeclarations.h"
#include "SCompoundWidget.h"
#include "SWidget.h"
#include "FSlateControlledConstruction.h"

struct SMultiLineEditingTest : SCompoundWidget
{
	char __padding[0x30L];
	bool& bIsReadOnlyField() { return *GetNativePointerField<bool*>(this, "SMultiLineEditingTest.bIsReadOnly"); }
	FText& MultilineEditableTextField() { return *GetNativePointerField<FText*>(this, "SMultiLineEditingTest.MultilineEditableText"); }
};

