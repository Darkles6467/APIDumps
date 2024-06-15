#pragma once

#include "BaseDeclarations.h"
#include "SUserWidget.h"
#include "SCompoundWidget.h"
#include "SWidget.h"
#include "FSlateControlledConstruction.h"

struct SRenderTransformManipulatorWidget : SUserWidget
{
};

struct SRenderTransformManipulatorWidgetImpl : SRenderTransformManipulatorWidget
{
	char __padding[0x10L];
};

