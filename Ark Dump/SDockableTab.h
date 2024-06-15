#pragma once

#include "BaseDeclarations.h"
struct SDockableTab
{
	char __padding[0xd0L];
	FName& LayoutIdentifierField() { return *GetNativePointerField<FName*>(this, "SDockableTab.LayoutIdentifier"); }
	ETabRole::Type& TabRoleField() { return *GetNativePointerField<ETabRole::Type*>(this, "SDockableTab.TabRole"); }
	float& OverlapWidthField() { return *GetNativePointerField<float*>(this, "SDockableTab.OverlapWidth"); }
	TAttribute<FString>& TabLabelField() { return *GetNativePointerField<TAttribute<FString>*>(this, "SDockableTab.TabLabel"); }
	TAttribute<FMargin>& ContentAreaPaddingField() { return *GetNativePointerField<TAttribute<FMargin>*>(this, "SDockableTab.ContentAreaPadding"); }
	FMargin& TabWellPaddingField() { return *GetNativePointerField<FMargin*>(this, "SDockableTab.TabWellPadding"); }
	bool& bShouldAutosizeField() { return *GetNativePointerField<bool*>(this, "SDockableTab.bShouldAutosize"); }
	FLinearColor& TabColorScaleField() { return *GetNativePointerField<FLinearColor*>(this, "SDockableTab.TabColorScale"); }
};

