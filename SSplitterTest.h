#pragma once

#include "BaseDeclarations.h"
#include "SCompoundWidget.h"
#include "SWidget.h"
#include "FSlateControlledConstruction.h"

struct SSplitterTest : SCompoundWidget
{
	char __padding[0x90L];
	TSharedRef<SSplitterTest::FVisibilityCycler,0>& Col0Row0VisField() { return *GetNativePointerField<TSharedRef<SSplitterTest::FVisibilityCycler,0>*>(this, "SSplitterTest.Col0Row0Vis"); }
	TSharedRef<SSplitterTest::FVisibilityCycler,0>& Col0Row1VisField() { return *GetNativePointerField<TSharedRef<SSplitterTest::FVisibilityCycler,0>*>(this, "SSplitterTest.Col0Row1Vis"); }
	TSharedRef<SSplitterTest::FVisibilityCycler,0>& Col0Row2VisField() { return *GetNativePointerField<TSharedRef<SSplitterTest::FVisibilityCycler,0>*>(this, "SSplitterTest.Col0Row2Vis"); }
	TSharedRef<SSplitterTest::FVisibilityCycler,0>& CenterVisField() { return *GetNativePointerField<TSharedRef<SSplitterTest::FVisibilityCycler,0>*>(this, "SSplitterTest.CenterVis"); }
	TSharedRef<SSplitterTest::FVisibilityCycler,0>& Col2Row0VisField() { return *GetNativePointerField<TSharedRef<SSplitterTest::FVisibilityCycler,0>*>(this, "SSplitterTest.Col2Row0Vis"); }
	TSharedRef<SSplitterTest::FVisibilityCycler,0>& Col2Row1VisField() { return *GetNativePointerField<TSharedRef<SSplitterTest::FVisibilityCycler,0>*>(this, "SSplitterTest.Col2Row1Vis"); }
	TSharedPtr<SSplitter,0>& TopLeveSplitterField() { return *GetNativePointerField<TSharedPtr<SSplitter,0>*>(this, "SSplitterTest.TopLeveSplitter"); }
	TSharedPtr<SSplitter,0>& Nested0Field() { return *GetNativePointerField<TSharedPtr<SSplitter,0>*>(this, "SSplitterTest.Nested0"); }
	TSharedPtr<SSplitter,0>& Nested1Field() { return *GetNativePointerField<TSharedPtr<SSplitter,0>*>(this, "SSplitterTest.Nested1"); }
};

