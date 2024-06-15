#pragma once

#include "BaseDeclarations.h"
#include "UContentWidget.h"
#include "UPanelWidget.h"
#include "UWidget.h"
#include "UVisual.h"
#include "UObject.h"
#include "UObjectBaseUtility.h"
#include "UObjectBase.h"

struct UViewport : UContentWidget
{
	char __padding[0x30L];
	FLinearColor& BackgroundColorField() { return *GetNativePointerField<FLinearColor*>(this, "UViewport.BackgroundColor"); }
	TSharedPtr<SAutoRefreshViewport,0>& ViewportWidgetField() { return *GetNativePointerField<TSharedPtr<SAutoRefreshViewport,0>*>(this, "UViewport.ViewportWidget"); }
	FEngineShowFlags& ShowFlagsField() { return *GetNativePointerField<FEngineShowFlags*>(this, "UViewport.ShowFlags"); }

	// Functions

	FVector * GetViewLocation(FVector * result) { return NativeCall<FVector *, FVector *>(this, "UViewport.GetViewLocation", result); }
	FRotator * GetViewRotation(FRotator * result) { return NativeCall<FRotator *, FRotator *>(this, "UViewport.GetViewRotation", result); }
	UWorld * GetViewportWorld() { return NativeCall<UWorld *>(this, "UViewport.GetViewportWorld"); }
	void OnSlotAdded(UPanelSlot * Slot) { NativeCall<void, UPanelSlot *>(this, "UViewport.OnSlotAdded", Slot); }
	void OnSlotRemoved(UPanelSlot * Slot) { NativeCall<void, UPanelSlot *>(this, "UViewport.OnSlotRemoved", Slot); }
	void ReleaseSlateResources(bool bReleaseChildren) { NativeCall<void, bool>(this, "UViewport.ReleaseSlateResources", bReleaseChildren); }
	void SetViewLocation(FVector Vector) { NativeCall<void, FVector>(this, "UViewport.SetViewLocation", Vector); }
	void SetViewRotation(FRotator Rotator) { NativeCall<void, FRotator>(this, "UViewport.SetViewRotation", Rotator); }
	void SynchronizeProperties() { NativeCall<void>(this, "UViewport.SynchronizeProperties"); }
};

