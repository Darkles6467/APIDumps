#pragma once

#include "BaseDeclarations.h"
#include "SWidget.h"
#include "FSlateControlledConstruction.h"
#include "EVisibility.h"

struct SNullWidgetContent : SWidget
{

	// Functions

	void FArguments() { NativeCall<void>(this, "SNullWidgetContent.FArguments"); }
	void FArguments() { NativeCall<void>(this, "SNullWidgetContent.FArguments"); }
	void Construct(const SNullWidgetContent::FArguments * InArgs) { NativeCall<void, const SNullWidgetContent::FArguments *>(this, "SNullWidgetContent.Construct", InArgs); }
	void SetVisibility(TAttribute<EVisibility> InVisibility) { NativeCall<void, TAttribute<EVisibility>>(this, "SNullWidgetContent.SetVisibility", InVisibility); }
};

