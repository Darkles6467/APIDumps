#pragma once

#include "BaseDeclarations.h"
#include "UPrimalUI.h"
#include "UUserWidget.h"
#include "UWidget.h"
#include "UVisual.h"
#include "UObject.h"
#include "UObjectBaseUtility.h"
#include "UObjectBase.h"

struct UHUDPingsContainer : UPrimalUI
{
	char __padding[0x28L];
	FName& PingContainerCanvasNameField() { return *GetNativePointerField<FName*>(this, "UHUDPingsContainer.PingContainerCanvasName"); }
	UCanvasPanel * PingContainerCanvasField() { return GetNativePointerField<UCanvasPanel *>(this, "UHUDPingsContainer.PingContainerCanvas"); }

	// Functions

	void AddToViewport() { NativeCall<void>(this, "UHUDPingsContainer.AddToViewport"); }
	bool DestroyPingWidget(const int AtIndex) { return NativeCall<bool, const int>(this, "UHUDPingsContainer.DestroyPingWidget", AtIndex); }
};

