#pragma once

#include "BaseDeclarations.h"
#include "UUserWidget.h"
#include "UWidget.h"
#include "UVisual.h"
#include "UObject.h"
#include "UObjectBaseUtility.h"
#include "UObjectBase.h"

struct UHUDElementBarWidget : UUserWidget
{
	char __padding[0xd8L];
	FName& HelmetBarNameField() { return *GetNativePointerField<FName*>(this, "UHUDElementBarWidget.HelmetBarName"); }
	FName& ShirtBarNameField() { return *GetNativePointerField<FName*>(this, "UHUDElementBarWidget.ShirtBarName"); }
	FName& GlovesBarNameField() { return *GetNativePointerField<FName*>(this, "UHUDElementBarWidget.GlovesBarName"); }
	FName& PantsBarNameField() { return *GetNativePointerField<FName*>(this, "UHUDElementBarWidget.PantsBarName"); }
	FName& BootsBarNameField() { return *GetNativePointerField<FName*>(this, "UHUDElementBarWidget.BootsBarName"); }
	FName& BoostIconNameField() { return *GetNativePointerField<FName*>(this, "UHUDElementBarWidget.BoostIconName"); }
	FName& ShoulderCannonBarNameField() { return *GetNativePointerField<FName*>(this, "UHUDElementBarWidget.ShoulderCannonBarName"); }
	float& iconsBottomOffsetField() { return *GetNativePointerField<float*>(this, "UHUDElementBarWidget.iconsBottomOffset"); }
	float& iconSeparationField() { return *GetNativePointerField<float*>(this, "UHUDElementBarWidget.iconSeparation"); }
	bool& bBoostIconHiddenField() { return *GetNativePointerField<bool*>(this, "UHUDElementBarWidget.bBoostIconHidden"); }
	bool& bPrevBoostIconHiddenField() { return *GetNativePointerField<bool*>(this, "UHUDElementBarWidget.bPrevBoostIconHidden"); }
	FVector2D& boostIconOffsetField() { return *GetNativePointerField<FVector2D*>(this, "UHUDElementBarWidget.boostIconOffset"); }
	UProgressBarWidget * helmetBarField() { return GetNativePointerField<UProgressBarWidget *>(this, "UHUDElementBarWidget.helmetBar"); }
	UProgressBarWidget * shirtBarField() { return GetNativePointerField<UProgressBarWidget *>(this, "UHUDElementBarWidget.shirtBar"); }
	UProgressBarWidget * glovesBarField() { return GetNativePointerField<UProgressBarWidget *>(this, "UHUDElementBarWidget.glovesBar"); }
	UProgressBarWidget * pantsBarField() { return GetNativePointerField<UProgressBarWidget *>(this, "UHUDElementBarWidget.pantsBar"); }
	UProgressBarWidget * bootsBarField() { return GetNativePointerField<UProgressBarWidget *>(this, "UHUDElementBarWidget.bootsBar"); }
	UProgressBarWidget * shoulderCannonBarField() { return GetNativePointerField<UProgressBarWidget *>(this, "UHUDElementBarWidget.shoulderCannonBar"); }
	UImage * boostIconField() { return GetNativePointerField<UImage *>(this, "UHUDElementBarWidget.boostIcon"); }
	float& helmetMaxAmmoField() { return *GetNativePointerField<float*>(this, "UHUDElementBarWidget.helmetMaxAmmo"); }
	float& shirtMaxAmmoField() { return *GetNativePointerField<float*>(this, "UHUDElementBarWidget.shirtMaxAmmo"); }
	float& glovesMaxAmmoField() { return *GetNativePointerField<float*>(this, "UHUDElementBarWidget.glovesMaxAmmo"); }
	float& pantsMaxAmmoField() { return *GetNativePointerField<float*>(this, "UHUDElementBarWidget.pantsMaxAmmo"); }
	float& bootsMaxAmmoField() { return *GetNativePointerField<float*>(this, "UHUDElementBarWidget.bootsMaxAmmo"); }
	float& shoulderMaxAmmoField() { return *GetNativePointerField<float*>(this, "UHUDElementBarWidget.shoulderMaxAmmo"); }

	// Functions

	void InitializeMe(UPrimalUI * ParentUI) { NativeCall<void, UPrimalUI *>(this, "UHUDElementBarWidget.InitializeMe", ParentUI); }
	void SetBarPosition(UCanvasPanelSlot * slot, int * currentNumIcons) { NativeCall<void, UCanvasPanelSlot *, int *>(this, "UHUDElementBarWidget.SetBarPosition", slot, currentNumIcons); }
	void Tick_Implementation(FGeometry MyGeometry, float InDeltaTime) { NativeCall<void, FGeometry, float>(this, "UHUDElementBarWidget.Tick_Implementation", MyGeometry, InDeltaTime); }
	void UpdateBoostIconVisibility() { NativeCall<void>(this, "UHUDElementBarWidget.UpdateBoostIconVisibility"); }
};

