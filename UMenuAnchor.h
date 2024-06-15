#pragma once

#include "BaseDeclarations.h"
#include "UContentWidget.h"
#include "UPanelWidget.h"
#include "UWidget.h"
#include "UVisual.h"
#include "UObject.h"
#include "UObjectBaseUtility.h"
#include "UObjectBase.h"

struct UMenuAnchor : UContentWidget
{
	char __padding[0x58L];
	bool& IgnoreClicksOutsideField() { return *GetNativePointerField<bool*>(this, "UMenuAnchor.IgnoreClicksOutside"); }
	UMenuAnchor::FOnIsOpenChanged& OnIsOpenChangedField() { return *GetNativePointerField<UMenuAnchor::FOnIsOpenChanged*>(this, "UMenuAnchor.OnIsOpenChanged"); }
	TEnumAsByte<enum EMenuPlacement>& PlacementField() { return *GetNativePointerField<TEnumAsByte<enum EMenuPlacement>*>(this, "UMenuAnchor.Placement"); }
	FVector2D& PaddingField() { return *GetNativePointerField<FVector2D*>(this, "UMenuAnchor.Padding"); }

	// Functions

	bool FOnIsOpenChanged(bool InParam1) { return NativeCall<bool, bool>(this, "UMenuAnchor.FOnIsOpenChanged", InParam1); }
	bool GetIgnoreClicksOutside() { return NativeCall<bool>(this, "UMenuAnchor.GetIgnoreClicksOutside"); }
	void HandleMenuOpenChanged(bool bIsOpen) { NativeCall<void, bool>(this, "UMenuAnchor.HandleMenuOpenChanged", bIsOpen); }
	bool IsOpen() { return NativeCall<bool>(this, "UMenuAnchor.IsOpen"); }
	void OnSlotAdded(UPanelSlot * Slot) { NativeCall<void, UPanelSlot *>(this, "UMenuAnchor.OnSlotAdded", Slot); }
	void OnSlotRemoved(UPanelSlot * Slot) { NativeCall<void, UPanelSlot *>(this, "UMenuAnchor.OnSlotRemoved", Slot); }
	void ReleaseSlateResources(bool bReleaseChildren) { NativeCall<void, bool>(this, "UMenuAnchor.ReleaseSlateResources", bReleaseChildren); }
	void SetIgnoreClicksOutside(bool Ignore) { NativeCall<void, bool>(this, "UMenuAnchor.SetIgnoreClicksOutside", Ignore); }
	void SetIsOpen(bool InIsOpen, bool bFocusMenu) { NativeCall<void, bool, bool>(this, "UMenuAnchor.SetIsOpen", InIsOpen, bFocusMenu); }
};

