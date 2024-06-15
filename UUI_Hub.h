#pragma once

#include "BaseDeclarations.h"
#include "UPrimalUI.h"
#include "UUserWidget.h"
#include "UWidget.h"
#include "UVisual.h"
#include "UObject.h"
#include "UObjectBaseUtility.h"
#include "UObjectBase.h"

struct UUI_Hub : UPrimalUI
{
	char __padding[0x218L];
	FName& TopRecenteringSpacerNameField() { return *GetNativePointerField<FName*>(this, "UUI_Hub.TopRecenteringSpacerName"); }
	FName& InventoryMenuButtonNameField() { return *GetNativePointerField<FName*>(this, "UUI_Hub.InventoryMenuButtonName"); }
	FName& EngramsMenuButtonNameField() { return *GetNativePointerField<FName*>(this, "UUI_Hub.EngramsMenuButtonName"); }
	FName& TribeManagerMenuButtonNameField() { return *GetNativePointerField<FName*>(this, "UUI_Hub.TribeManagerMenuButtonName"); }
	FName& TameGroupsMenuButtonNameField() { return *GetNativePointerField<FName*>(this, "UUI_Hub.TameGroupsMenuButtonName"); }
	FName& SurvivorProfileMenuButtonNameField() { return *GetNativePointerField<FName*>(this, "UUI_Hub.SurvivorProfileMenuButtonName"); }
	FName& MissionListMenuButtonNameField() { return *GetNativePointerField<FName*>(this, "UUI_Hub.MissionListMenuButtonName"); }
	FName& OptionsMenuButtonNameField() { return *GetNativePointerField<FName*>(this, "UUI_Hub.OptionsMenuButtonName"); }
	FName& SubMenuWidgetSwitcherNameField() { return *GetNativePointerField<FName*>(this, "UUI_Hub.SubMenuWidgetSwitcherName"); }
	FName& CloseHubButtonNameField() { return *GetNativePointerField<FName*>(this, "UUI_Hub.CloseHubButtonName"); }
	FName& HexagonCurrencyValuePanelNameField() { return *GetNativePointerField<FName*>(this, "UUI_Hub.HexagonCurrencyValuePanelName"); }
	FName& HexagonCurrencyValueTextBlockNameField() { return *GetNativePointerField<FName*>(this, "UUI_Hub.HexagonCurrencyValueTextBlockName"); }
	TSubclassOf<UUI_Inventory>& InventoryUITemplateField() { return *GetNativePointerField<TSubclassOf<UUI_Inventory>*>(this, "UUI_Hub.InventoryUITemplate"); }
	TSubclassOf<UUI_TribeManager>& TribeManagerUITemplateField() { return *GetNativePointerField<TSubclassOf<UUI_TribeManager>*>(this, "UUI_Hub.TribeManagerUITemplate"); }
	TSubclassOf<UUI_EngramsMenu>& EngramsMenuUITemplateField() { return *GetNativePointerField<TSubclassOf<UUI_EngramsMenu>*>(this, "UUI_Hub.EngramsMenuUITemplate"); }
	TSubclassOf<UUI_DinoOrderGroups>& TameGroupsUITemplateField() { return *GetNativePointerField<TSubclassOf<UUI_DinoOrderGroups>*>(this, "UUI_Hub.TameGroupsUITemplate"); }
	TSubclassOf<UUI_SurvivorProfile>& SurvivorProfileUITemplateField() { return *GetNativePointerField<TSubclassOf<UUI_SurvivorProfile>*>(this, "UUI_Hub.SurvivorProfileUITemplate"); }
	TSubclassOf<UUI_MissionList>& MissionListUITemplateField() { return *GetNativePointerField<TSubclassOf<UUI_MissionList>*>(this, "UUI_Hub.MissionListUITemplate"); }
	TSubclassOf<UUI_OptionsMenu>& OptionsMenuUITemplateField() { return *GetNativePointerField<TSubclassOf<UUI_OptionsMenu>*>(this, "UUI_Hub.OptionsMenuUITemplate"); }
	TSubclassOf<UUI_TamingList>& TamingListUITemplateField() { return *GetNativePointerField<TSubclassOf<UUI_TamingList>*>(this, "UUI_Hub.TamingListUITemplate"); }
	USoundCue * TabSwitchSoundField() { return GetNativePointerField<USoundCue *>(this, "UUI_Hub.TabSwitchSound"); }
	UGamepadButtonLegendWidget * ButtonLegend_AcceptField() { return GetNativePointerField<UGamepadButtonLegendWidget *>(this, "UUI_Hub.ButtonLegend_Accept"); }
	UGamepadButtonLegendWidget * ButtonLegend_CancelField() { return GetNativePointerField<UGamepadButtonLegendWidget *>(this, "UUI_Hub.ButtonLegend_Cancel"); }
	UGamepadButtonLegendWidget * ButtonLegend_LeftStickField() { return GetNativePointerField<UGamepadButtonLegendWidget *>(this, "UUI_Hub.ButtonLegend_LeftStick"); }
	UGamepadButtonLegendWidget * ButtonLegend_RightStickField() { return GetNativePointerField<UGamepadButtonLegendWidget *>(this, "UUI_Hub.ButtonLegend_RightStick"); }
	UGamepadButtonLegendWidget * ButtonLegend_LeftShoulderField() { return GetNativePointerField<UGamepadButtonLegendWidget *>(this, "UUI_Hub.ButtonLegend_LeftShoulder"); }
	UGamepadButtonLegendWidget * ButtonLegend_RightShoulderField() { return GetNativePointerField<UGamepadButtonLegendWidget *>(this, "UUI_Hub.ButtonLegend_RightShoulder"); }
	UGamepadButtonLegendWidget * ButtonLegend_FaceTopField() { return GetNativePointerField<UGamepadButtonLegendWidget *>(this, "UUI_Hub.ButtonLegend_FaceTop"); }
	UGamepadButtonLegendWidget * ButtonLegend_FaceLeftField() { return GetNativePointerField<UGamepadButtonLegendWidget *>(this, "UUI_Hub.ButtonLegend_FaceLeft"); }
	UGamepadButtonLegendWidget * ButtonLegend_FaceRightField() { return GetNativePointerField<UGamepadButtonLegendWidget *>(this, "UUI_Hub.ButtonLegend_FaceRight"); }
	UGamepadButtonLegendWidget * ButtonLegend_FaceBottomField() { return GetNativePointerField<UGamepadButtonLegendWidget *>(this, "UUI_Hub.ButtonLegend_FaceBottom"); }
	UGamepadButtonLegendWidget * ButtonLegend_LeftTriggerField() { return GetNativePointerField<UGamepadButtonLegendWidget *>(this, "UUI_Hub.ButtonLegend_LeftTrigger"); }
	UGamepadButtonLegendWidget * ButtonLegend_RightTriggerField() { return GetNativePointerField<UGamepadButtonLegendWidget *>(this, "UUI_Hub.ButtonLegend_RightTrigger"); }
	UGamepadButtonLegendWidget * ButtonLegend_StartField() { return GetNativePointerField<UGamepadButtonLegendWidget *>(this, "UUI_Hub.ButtonLegend_Start"); }
	int& SelectedMissionEntryIndexField() { return *GetNativePointerField<int*>(this, "UUI_Hub.SelectedMissionEntryIndex"); }
	int& SelectedBiomeFilterMaskField() { return *GetNativePointerField<int*>(this, "UUI_Hub.SelectedBiomeFilterMask"); }
	USpacer * TopRecenteringSpacerField() { return GetNativePointerField<USpacer *>(this, "UUI_Hub.TopRecenteringSpacer"); }
	UCustomButtonWidget * InventoryMenuButtonField() { return GetNativePointerField<UCustomButtonWidget *>(this, "UUI_Hub.InventoryMenuButton"); }
	UCustomButtonWidget * TribeManagerMenuButtonField() { return GetNativePointerField<UCustomButtonWidget *>(this, "UUI_Hub.TribeManagerMenuButton"); }
	UCustomButtonWidget * EngramsMenuButtonField() { return GetNativePointerField<UCustomButtonWidget *>(this, "UUI_Hub.EngramsMenuButton"); }
	UCustomButtonWidget * TameGroupsMenuButtonField() { return GetNativePointerField<UCustomButtonWidget *>(this, "UUI_Hub.TameGroupsMenuButton"); }
	UCustomButtonWidget * SurvivalProfileMenuButtonField() { return GetNativePointerField<UCustomButtonWidget *>(this, "UUI_Hub.SurvivalProfileMenuButton"); }
	UCustomButtonWidget * MissionListMenuButtonField() { return GetNativePointerField<UCustomButtonWidget *>(this, "UUI_Hub.MissionListMenuButton"); }
	UCustomButtonWidget * OptionsMenuButtonField() { return GetNativePointerField<UCustomButtonWidget *>(this, "UUI_Hub.OptionsMenuButton"); }
	UCustomButtonWidget * CloseHubButtonField() { return GetNativePointerField<UCustomButtonWidget *>(this, "UUI_Hub.CloseHubButton"); }
	UCustomButtonWidget * TamingListButtonField() { return GetNativePointerField<UCustomButtonWidget *>(this, "UUI_Hub.TamingListButton"); }
	UTextBlock * EngramsMenuButtonNumPointsField() { return GetNativePointerField<UTextBlock *>(this, "UUI_Hub.EngramsMenuButtonNumPoints"); }
	EHubSubMenu::Type& ActiveSubMenuTypeField() { return *GetNativePointerField<EHubSubMenu::Type*>(this, "UUI_Hub.ActiveSubMenuType"); }
	UTextBlock * HexagonCurrencyValueTextBlockField() { return GetNativePointerField<UTextBlock *>(this, "UUI_Hub.HexagonCurrencyValueTextBlock"); }
	bool& bGamepadHotbarModifierPressedField() { return *GetNativePointerField<bool*>(this, "UUI_Hub.bGamepadHotbarModifierPressed"); }
	int& HideUntilFrameField() { return *GetNativePointerField<int*>(this, "UUI_Hub.HideUntilFrame"); }

	// Functions

	void AddToViewport() { NativeCall<void>(this, "UUI_Hub.AddToViewport"); }
	void CheckGamepadActiveChanged(bool bIsGamepadActive) { NativeCall<void, bool>(this, "UUI_Hub.CheckGamepadActiveChanged", bIsGamepadActive); }
	void ClickedButton(UWidget * clickedWidget) { NativeCall<void, UWidget *>(this, "UUI_Hub.ClickedButton", clickedWidget); }
	void ClickedButtonWithController(UWidget * clickedWidget, int ControllerId) { NativeCall<void, UWidget *, int>(this, "UUI_Hub.ClickedButtonWithController", clickedWidget, ControllerId); }
	void CloseWithAnimation() { NativeCall<void>(this, "UUI_Hub.CloseWithAnimation"); }
	void GetAllWidgets(TArray<UWidget *> * Widgets) { NativeCall<void, TArray<UWidget *> *>(this, "UUI_Hub.GetAllWidgets", Widgets); }
	UUI_EngramsMenu * GetEngramsMenu(bool bAutoShow) { return NativeCall<UUI_EngramsMenu *, bool>(this, "UUI_Hub.GetEngramsMenu", bAutoShow); }
	UUI_Inventory * GetInventoryMenu(bool bAutoShow) { return NativeCall<UUI_Inventory *, bool>(this, "UUI_Hub.GetInventoryMenu", bAutoShow); }
	UUI_MissionList * GetMissionListMenu(bool bAutoShow) { return NativeCall<UUI_MissionList *, bool>(this, "UUI_Hub.GetMissionListMenu", bAutoShow); }
	UUI_SurvivorProfile * GetSurvivorProfileMenu(bool bAutoShow) { return NativeCall<UUI_SurvivorProfile *, bool>(this, "UUI_Hub.GetSurvivorProfileMenu", bAutoShow); }
	UUI_DinoOrderGroups * GetTameGroupsMenu(bool bAutoShow) { return NativeCall<UUI_DinoOrderGroups *, bool>(this, "UUI_Hub.GetTameGroupsMenu", bAutoShow); }
	UUI_TamingList * GetTamingListMenu(bool bAutoShow) { return NativeCall<UUI_TamingList *, bool>(this, "UUI_Hub.GetTamingListMenu", bAutoShow); }
	UUI_TribeManager * GetTribeManagerMenu(bool bAutoShow) { return NativeCall<UUI_TribeManager *, bool>(this, "UUI_Hub.GetTribeManagerMenu", bAutoShow); }
	void HighlightWidgetOnStart(UPanelWidget * RestrictToPanel) { NativeCall<void, UPanelWidget *>(this, "UUI_Hub.HighlightWidgetOnStart", RestrictToPanel); }
	bool IsSubMenuActive(EHubSubMenu::Type MenuType) { return NativeCall<bool, EHubSubMenu::Type>(this, "UUI_Hub.IsSubMenuActive", MenuType); }
	bool IsSubMenuLoaded(EHubSubMenu::Type MenuType) { return NativeCall<bool, EHubSubMenu::Type>(this, "UUI_Hub.IsSubMenuLoaded", MenuType); }
	void NotifyInventoryFolderAdded(UPrimalInventoryComponent * inventoryComp, FString FolderName, int InventoryCompType) { NativeCall<void, UPrimalInventoryComponent *, FString, int>(this, "UUI_Hub.NotifyInventoryFolderAdded", inventoryComp, FolderName, InventoryCompType); }
	void NotifyInventoryPrimalArkItemAdded() { NativeCall<void>(this, "UUI_Hub.NotifyInventoryPrimalArkItemAdded"); }
	void NotifyInventoryPrimalItemAdded(UPrimalInventoryComponent * inventoryComp, UPrimalItem * theItem, bool bEquippedItem) { NativeCall<void, UPrimalInventoryComponent *, UPrimalItem *, bool>(this, "UUI_Hub.NotifyInventoryPrimalItemAdded", inventoryComp, theItem, bEquippedItem); }
	void NotifyInventoryPrimalItemRemoved(UPrimalInventoryComponent * inventoryComp, UPrimalItem * theItem) { NativeCall<void, UPrimalInventoryComponent *, UPrimalItem *>(this, "UUI_Hub.NotifyInventoryPrimalItemRemoved", inventoryComp, theItem); }
	void NotifyInventoryPrimalItemStatus(UPrimalInventoryComponent * inventoryComp, UPrimalItem * theItem, UPrimalItem * theItem2, bool bEquippedItem, bool bRemovedItem, bool bOnlyUpdateQuantity, bool bOnlyUpdateDurability, bool bOnlyNotifyItemSwap, bool bUsedItem, bool bNotifyCraftQueue, bool ShowHUDNotification) { NativeCall<void, UPrimalInventoryComponent *, UPrimalItem *, UPrimalItem *, bool, bool, bool, bool, bool, bool, bool, bool>(this, "UUI_Hub.NotifyInventoryPrimalItemStatus", inventoryComp, theItem, theItem2, bEquippedItem, bRemovedItem, bOnlyUpdateQuantity, bOnlyUpdateDurability, bOnlyNotifyItemSwap, bUsedItem, bNotifyCraftQueue, ShowHUDNotification); }
	void NotifyInventoryPrimalItemSwapped(UPrimalInventoryComponent * inventoryComp, UPrimalItem * Item1, UPrimalItem * Item2) { NativeCall<void, UPrimalInventoryComponent *, UPrimalItem *, UPrimalItem *>(this, "UUI_Hub.NotifyInventoryPrimalItemSwapped", inventoryComp, Item1, Item2); }
	void OnGamepadActiveChanged(bool bIsGamepadActive) { NativeCall<void, bool>(this, "UUI_Hub.OnGamepadActiveChanged", bIsGamepadActive); }
	void OnHoldSelectButton() { NativeCall<void>(this, "UUI_Hub.OnHoldSelectButton"); }
	void PlayTabSwitchSound() { NativeCall<void>(this, "UUI_Hub.PlayTabSwitchSound"); }
	void RecenterHub() { NativeCall<void>(this, "UUI_Hub.RecenterHub"); }
	void RemoveFromViewport() { NativeCall<void>(this, "UUI_Hub.RemoveFromViewport"); }
	void SetHighlightedWidget(UWidget * widget, bool bSetLastHighlightedPosition) { NativeCall<void, UWidget *, bool>(this, "UUI_Hub.SetHighlightedWidget", widget, bSetLastHighlightedPosition); }
	void SetupSpecialWidgetAdjacents(UWidget * InWidget) { NativeCall<void, UWidget *>(this, "UUI_Hub.SetupSpecialWidgetAdjacents", InWidget); }
	void Tick_Implementation(FGeometry MyGeometry, float InDeltaTime) { NativeCall<void, FGeometry, float>(this, "UUI_Hub.Tick_Implementation", MyGeometry, InDeltaTime); }
	void UpdateButtonLegend() { NativeCall<void>(this, "UUI_Hub.UpdateButtonLegend"); }
	void UpdateButtonStates() { NativeCall<void>(this, "UUI_Hub.UpdateButtonStates"); }
};

