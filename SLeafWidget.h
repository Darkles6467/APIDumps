#pragma once

#include "BaseDeclarations.h"
#include "SWidget.h"
#include "EVisibility.h"

struct SLeafWidget : SWidget
{

	// Functions

	void SetVisibility(TAttribute<EVisibility> InVisibility) { NativeCall<void, TAttribute<EVisibility>>(this, "SLeafWidget.SetVisibility", InVisibility); }
};

