#pragma once

#include "BaseDeclarations.h"
#include "SBoxPanel.h"

struct SHorizontalBox : SBoxPanel
{

	// Functions

	void FArguments() { NativeCall<void>(this, "SHorizontalBox.FArguments"); }
	void FArguments() { NativeCall<void>(this, "SHorizontalBox.FArguments"); }
	void Construct(const SVerticalBox::FArguments * InArgs) { NativeCall<void, const SVerticalBox::FArguments *>(this, "SHorizontalBox.Construct", InArgs); }
};

