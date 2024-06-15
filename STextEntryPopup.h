#pragma once

#include "BaseDeclarations.h"
#include "SCompoundWidget.h"
#include "SWidget.h"
#include "FSlateControlledConstruction.h"

struct STextEntryPopup : SCompoundWidget
{
	char __padding[0x30L];
	TSharedPtr<SVerticalBox,0>& BoxField() { return *GetNativePointerField<TSharedPtr<SVerticalBox,0>*>(this, "STextEntryPopup.Box"); }
	TSharedPtr<IErrorReportingWidget,0>& ErrorReportingField() { return *GetNativePointerField<TSharedPtr<IErrorReportingWidget,0>*>(this, "STextEntryPopup.ErrorReporting"); }
};

