#pragma once

#include "BaseDeclarations.h"
#include "UStatsPanelWidget.h"
#include "UPrimalUI.h"
#include "UUserWidget.h"
#include "UWidget.h"
#include "UVisual.h"
#include "UObject.h"
#include "UObjectBaseUtility.h"
#include "UObjectBase.h"

struct UStatsPanelWidget_Structure : UStatsPanelWidget
{
	char __padding[0x80L];
	FName& EquipmentDataListPanelNameField() { return *GetNativePointerField<FName*>(this, "UStatsPanelWidget_Structure.EquipmentDataListPanelName"); }
	FName& DisabledEquipmentPanelNameField() { return *GetNativePointerField<FName*>(this, "UStatsPanelWidget_Structure.DisabledEquipmentPanelName"); }
	FName& StructureNameLabelNameField() { return *GetNativePointerField<FName*>(this, "UStatsPanelWidget_Structure.StructureNameLabelName"); }
	FName& OwnerLabelNameField() { return *GetNativePointerField<FName*>(this, "UStatsPanelWidget_Structure.OwnerLabelName"); }
	FName& DescriptionLabelNameField() { return *GetNativePointerField<FName*>(this, "UStatsPanelWidget_Structure.DescriptionLabelName"); }
	FName& HealthStatNameField() { return *GetNativePointerField<FName*>(this, "UStatsPanelWidget_Structure.HealthStatName"); }
	FName& StorageStatNameField() { return *GetNativePointerField<FName*>(this, "UStatsPanelWidget_Structure.StorageStatName"); }
	FName& WeightStatNameField() { return *GetNativePointerField<FName*>(this, "UStatsPanelWidget_Structure.WeightStatName"); }
	UCanvasPanel * DisabledEquipmentPanelField() { return GetNativePointerField<UCanvasPanel *>(this, "UStatsPanelWidget_Structure.DisabledEquipmentPanel"); }
	UDataListPanel * EquipmentDataListPanelField() { return GetNativePointerField<UDataListPanel *>(this, "UStatsPanelWidget_Structure.EquipmentDataListPanel"); }
	UTextBlock * StructureNameLabelField() { return GetNativePointerField<UTextBlock *>(this, "UStatsPanelWidget_Structure.StructureNameLabel"); }
	UTextBlock * OwnerLabelField() { return GetNativePointerField<UTextBlock *>(this, "UStatsPanelWidget_Structure.OwnerLabel"); }
	UTextBlock * DescriptionLabelField() { return GetNativePointerField<UTextBlock *>(this, "UStatsPanelWidget_Structure.DescriptionLabel"); }

	// Functions

	UDataListPanel * GetEquipmentDataList() { return NativeCall<UDataListPanel *>(this, "UStatsPanelWidget_Structure.GetEquipmentDataList"); }
	void Init(UUI_Inventory * InInventoryUI) { NativeCall<void, UUI_Inventory *>(this, "UStatsPanelWidget_Structure.Init", InInventoryUI); }
	void RefreshItemLists() { NativeCall<void>(this, "UStatsPanelWidget_Structure.RefreshItemLists"); }
	void RefreshStats() { NativeCall<void>(this, "UStatsPanelWidget_Structure.RefreshStats"); }
	void SetInventoryComp(UPrimalInventoryComponent * InInventoryComponent) { NativeCall<void, UPrimalInventoryComponent *>(this, "UStatsPanelWidget_Structure.SetInventoryComp", InInventoryComponent); }
	void Tick_Implementation(FGeometry MyGeometry, float InDeltaTime) { NativeCall<void, FGeometry, float>(this, "UStatsPanelWidget_Structure.Tick_Implementation", MyGeometry, InDeltaTime); }
	void UpdateEquipmentList() { NativeCall<void>(this, "UStatsPanelWidget_Structure.UpdateEquipmentList"); }
};

