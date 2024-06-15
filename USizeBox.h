#pragma once

#include "BaseDeclarations.h"
#include "UContentWidget.h"
#include "UPanelWidget.h"
#include "UWidget.h"
#include "UVisual.h"
#include "UObject.h"
#include "UObjectBaseUtility.h"
#include "UObjectBase.h"
#include "IToolTip.h"

struct USizeBox : UContentWidget
{
	char __padding[0x30L];
	float& WidthOverrideField() { return *GetNativePointerField<float*>(this, "USizeBox.WidthOverride"); }
	float& HeightOverrideField() { return *GetNativePointerField<float*>(this, "USizeBox.HeightOverride"); }
	float& MinDesiredWidthField() { return *GetNativePointerField<float*>(this, "USizeBox.MinDesiredWidth"); }
	float& MinDesiredHeightField() { return *GetNativePointerField<float*>(this, "USizeBox.MinDesiredHeight"); }
	float& MaxDesiredWidthField() { return *GetNativePointerField<float*>(this, "USizeBox.MaxDesiredWidth"); }
	float& MaxDesiredHeightField() { return *GetNativePointerField<float*>(this, "USizeBox.MaxDesiredHeight"); }

	// Functions

	TSharedPtr<IToolTip,0> * GetSWidget(TSharedPtr<IToolTip,0> * result) { return NativeCall<TSharedPtr<IToolTip,0> *, TSharedPtr<IToolTip,0> *>(this, "USizeBox.GetSWidget", result); }
	void ClearHeightOverride() { NativeCall<void>(this, "USizeBox.ClearHeightOverride"); }
	void ClearMaxDesiredHeight() { NativeCall<void>(this, "USizeBox.ClearMaxDesiredHeight"); }
	void ClearMaxDesiredWidth() { NativeCall<void>(this, "USizeBox.ClearMaxDesiredWidth"); }
	void ClearMinDesiredHeight() { NativeCall<void>(this, "USizeBox.ClearMinDesiredHeight"); }
	void ClearMinDesiredWidth() { NativeCall<void>(this, "USizeBox.ClearMinDesiredWidth"); }
	void ClearWidthOverride() { NativeCall<void>(this, "USizeBox.ClearWidthOverride"); }
	bool GetMaxDesiredHeight(float * OutHeight) { return NativeCall<bool, float *>(this, "USizeBox.GetMaxDesiredHeight", OutHeight); }
	void OnSlotAdded(UPanelSlot * Slot) { NativeCall<void, UPanelSlot *>(this, "USizeBox.OnSlotAdded", Slot); }
	void OnSlotRemoved(UPanelSlot * Slot) { NativeCall<void, UPanelSlot *>(this, "USizeBox.OnSlotRemoved", Slot); }
	void ReleaseSlateResources(bool bReleaseChildren) { NativeCall<void, bool>(this, "USizeBox.ReleaseSlateResources", bReleaseChildren); }
	void SetHeightOverride(float InHeightOverride) { NativeCall<void, float>(this, "USizeBox.SetHeightOverride", InHeightOverride); }
	void SetMaxDesiredHeight(float InMaxDesiredHeight) { NativeCall<void, float>(this, "USizeBox.SetMaxDesiredHeight", InMaxDesiredHeight); }
	void SetMaxDesiredWidth(float InMaxDesiredWidth) { NativeCall<void, float>(this, "USizeBox.SetMaxDesiredWidth", InMaxDesiredWidth); }
	void SetMinDesiredHeight(float InMinDesiredHeight) { NativeCall<void, float>(this, "USizeBox.SetMinDesiredHeight", InMinDesiredHeight); }
	void SetMinDesiredWidth(float InMinDesiredWidth) { NativeCall<void, float>(this, "USizeBox.SetMinDesiredWidth", InMinDesiredWidth); }
	void SetWidthOverride(float InWidthOverride) { NativeCall<void, float>(this, "USizeBox.SetWidthOverride", InWidthOverride); }
	void SynchronizeProperties() { NativeCall<void>(this, "USizeBox.SynchronizeProperties"); }
};

