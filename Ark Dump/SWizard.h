#pragma once

#include "BaseDeclarations.h"
#include "SCompoundWidget.h"
#include "SWidget.h"
#include "FSlateControlledConstruction.h"

struct SWizard : SCompoundWidget
{
	char __padding[0x50L];
	FVector2D& DesiredSizeField() { return *GetNativePointerField<FVector2D*>(this, "SWizard.DesiredSize"); }
	TIndirectArray<SWizard::FWizardPage>& PagesField() { return *GetNativePointerField<TIndirectArray<SWizard::FWizardPage>*>(this, "SWizard.Pages"); }
};

