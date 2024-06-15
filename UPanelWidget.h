#pragma once

#include "BaseDeclarations.h"
#include "UWidget.h"

struct UPanelWidget : UWidget
{
	char __padding[0x18L];
	bool& ClipChildrenField() { return *GetNativePointerField<bool*>(this, "UPanelWidget.ClipChildren"); }
	bool& UseScaledClipForChildrenField() { return *GetNativePointerField<bool*>(this, "UPanelWidget.UseScaledClipForChildren"); }
	bool& bCanNavigateToDifferentPanelField() { return *GetNativePointerField<bool*>(this, "UPanelWidget.bCanNavigateToDifferentPanel"); }
	bool& bHighlightInsteadOfChildField() { return *GetNativePointerField<bool*>(this, "UPanelWidget.bHighlightInsteadOfChild"); }
	bool& bCanHaveMultipleChildrenField() { return *GetNativePointerField<bool*>(this, "UPanelWidget.bCanHaveMultipleChildren"); }

	// Functions

	void ClearChildren() { NativeCall<void>(this, "UPanelWidget.ClearChildren"); }
	int GetChildIndex(UWidget * Content) { return NativeCall<int, UWidget *>(this, "UPanelWidget.GetChildIndex", Content); }
	int GetChildrenCount() { return NativeCall<int>(this, "UPanelWidget.GetChildrenCount"); }
	bool HasAnyChildren() { return NativeCall<bool>(this, "UPanelWidget.HasAnyChildren"); }
	void InsertChildAt(int Index, UWidget * Content) { NativeCall<void, int, UWidget *>(this, "UPanelWidget.InsertChildAt", Index, Content); }
	void PostLoad() { NativeCall<void>(this, "UPanelWidget.PostLoad"); }
	void ReleaseSlateResources(bool bReleaseChildren) { NativeCall<void, bool>(this, "UPanelWidget.ReleaseSlateResources", bReleaseChildren); }
	bool RemoveChild(UWidget * Content) { return NativeCall<bool, UWidget *>(this, "UPanelWidget.RemoveChild", Content); }
	bool RemoveChildAt(int Index) { return NativeCall<bool, int>(this, "UPanelWidget.RemoveChildAt", Index); }
	void SetIsDesignTime(bool bInDesignTime) { NativeCall<void, bool>(this, "UPanelWidget.SetIsDesignTime", bInDesignTime); }
	void SynchronizeProperties() { NativeCall<void>(this, "UPanelWidget.SynchronizeProperties"); }
};

