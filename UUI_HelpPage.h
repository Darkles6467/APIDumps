#pragma once

#include "BaseDeclarations.h"
#include "UPrimalUI.h"
#include "UUserWidget.h"
#include "UWidget.h"
#include "UVisual.h"
#include "UObject.h"
#include "UObjectBaseUtility.h"
#include "UObjectBase.h"

struct UUI_HelpPage : UPrimalUI
{
	char __padding[0xf0L];
	EHelpPage::Type& ActiveHelpPageTypeField() { return *GetNativePointerField<EHelpPage::Type*>(this, "UUI_HelpPage.ActiveHelpPageType"); }
	UCustomButtonWidget * CancelButtonField() { return GetNativePointerField<UCustomButtonWidget *>(this, "UUI_HelpPage.CancelButton"); }
	UCustomButtonWidget * HelpMenuButtonField() { return GetNativePointerField<UCustomButtonWidget *>(this, "UUI_HelpPage.HelpMenuButton"); }
	UCustomButtonWidget * UIMenuButtonField() { return GetNativePointerField<UCustomButtonWidget *>(this, "UUI_HelpPage.UIMenuButton"); }
	UCustomButtonWidget * CraftingMenuButtonField() { return GetNativePointerField<UCustomButtonWidget *>(this, "UUI_HelpPage.CraftingMenuButton"); }
	UCustomButtonWidget * CreaturesMenuButtonField() { return GetNativePointerField<UCustomButtonWidget *>(this, "UUI_HelpPage.CreaturesMenuButton"); }
	UCustomButtonWidget * ExplorationMenuButtonField() { return GetNativePointerField<UCustomButtonWidget *>(this, "UUI_HelpPage.ExplorationMenuButton"); }
	UCustomButtonWidget * UIButton_Page1Field() { return GetNativePointerField<UCustomButtonWidget *>(this, "UUI_HelpPage.UIButton_Page1"); }
	UCustomButtonWidget * UIButton_Page2Field() { return GetNativePointerField<UCustomButtonWidget *>(this, "UUI_HelpPage.UIButton_Page2"); }
	UCustomButtonWidget * UIButton_Page3Field() { return GetNativePointerField<UCustomButtonWidget *>(this, "UUI_HelpPage.UIButton_Page3"); }
	UCustomButtonWidget * UIButton_Page4Field() { return GetNativePointerField<UCustomButtonWidget *>(this, "UUI_HelpPage.UIButton_Page4"); }
	UCustomButtonWidget * UIButton_Page5Field() { return GetNativePointerField<UCustomButtonWidget *>(this, "UUI_HelpPage.UIButton_Page5"); }
	UCustomButtonWidget * UIButton_Page6Field() { return GetNativePointerField<UCustomButtonWidget *>(this, "UUI_HelpPage.UIButton_Page6"); }
	UCustomButtonWidget * CraftingButton_Page1Field() { return GetNativePointerField<UCustomButtonWidget *>(this, "UUI_HelpPage.CraftingButton_Page1"); }
	UCustomButtonWidget * CraftingButton_Page2Field() { return GetNativePointerField<UCustomButtonWidget *>(this, "UUI_HelpPage.CraftingButton_Page2"); }
	UCustomButtonWidget * CraftingButton_Page3Field() { return GetNativePointerField<UCustomButtonWidget *>(this, "UUI_HelpPage.CraftingButton_Page3"); }
	UCustomButtonWidget * CraftingButton_Page4Field() { return GetNativePointerField<UCustomButtonWidget *>(this, "UUI_HelpPage.CraftingButton_Page4"); }
	UCustomButtonWidget * CraftingButton_Page5Field() { return GetNativePointerField<UCustomButtonWidget *>(this, "UUI_HelpPage.CraftingButton_Page5"); }
	UCustomButtonWidget * CraftingButton_Page6Field() { return GetNativePointerField<UCustomButtonWidget *>(this, "UUI_HelpPage.CraftingButton_Page6"); }
	UCustomButtonWidget * CreaturesButton_Page1Field() { return GetNativePointerField<UCustomButtonWidget *>(this, "UUI_HelpPage.CreaturesButton_Page1"); }
	UCustomButtonWidget * CreaturesButton_Page2Field() { return GetNativePointerField<UCustomButtonWidget *>(this, "UUI_HelpPage.CreaturesButton_Page2"); }
	UCustomButtonWidget * CreaturesButton_Page3Field() { return GetNativePointerField<UCustomButtonWidget *>(this, "UUI_HelpPage.CreaturesButton_Page3"); }
	UCustomButtonWidget * ExplorationButton_Page1Field() { return GetNativePointerField<UCustomButtonWidget *>(this, "UUI_HelpPage.ExplorationButton_Page1"); }
	UCustomButtonWidget * ExplorationButton_Page2Field() { return GetNativePointerField<UCustomButtonWidget *>(this, "UUI_HelpPage.ExplorationButton_Page2"); }
	UCustomButtonWidget * WelcomeButton_Page1Field() { return GetNativePointerField<UCustomButtonWidget *>(this, "UUI_HelpPage.WelcomeButton_Page1"); }

	// Functions

	void AddToViewport() { NativeCall<void>(this, "UUI_HelpPage.AddToViewport"); }
	void ClickedButton(UWidget * clickedWidget) { NativeCall<void, UWidget *>(this, "UUI_HelpPage.ClickedButton", clickedWidget); }
	void HighlightActivePageTopButton() { NativeCall<void>(this, "UUI_HelpPage.HighlightActivePageTopButton"); }
	void HighlightWidgetOnStart(UPanelWidget * RestrictToPanel) { NativeCall<void, UPanelWidget *>(this, "UUI_HelpPage.HighlightWidgetOnStart", RestrictToPanel); }
	void ShowCraftingSubPage(EHelpPage::PageNumber CraftingPage) { NativeCall<void, EHelpPage::PageNumber>(this, "UUI_HelpPage.ShowCraftingSubPage", CraftingPage); }
	void ShowCreaturesSubePage(EHelpPage::PageNumber CreaturesPage) { NativeCall<void, EHelpPage::PageNumber>(this, "UUI_HelpPage.ShowCreaturesSubePage", CreaturesPage); }
	void ShowExplorationSubPage(EHelpPage::PageNumber ExplorationPage) { NativeCall<void, EHelpPage::PageNumber>(this, "UUI_HelpPage.ShowExplorationSubPage", ExplorationPage); }
	void ShowHelpPage(EHelpPage::Type HelpPage) { NativeCall<void, EHelpPage::Type>(this, "UUI_HelpPage.ShowHelpPage", HelpPage); }
	void ShowUISubPage(EHelpPage::PageNumber UIPage) { NativeCall<void, EHelpPage::PageNumber>(this, "UUI_HelpPage.ShowUISubPage", UIPage); }
	void UpdateButtonStates() { NativeCall<void>(this, "UUI_HelpPage.UpdateButtonStates"); }
};

