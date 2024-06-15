#pragma once

#include "BaseDeclarations.h"
#include "SCompoundWidget.h"
#include "SWidget.h"
#include "FSlateControlledConstruction.h"

struct SShooterGameLoadingScreen : SCompoundWidget
{
	char __padding[0x10L];

	// Functions

	void FArguments() { NativeCall<void>(this, "SShooterGameLoadingScreen.FArguments"); }
	void FArguments() { NativeCall<void>(this, "SShooterGameLoadingScreen.FArguments"); }
	float BaseGetProgress() { return NativeCall<float>(this, "SShooterGameLoadingScreen.BaseGetProgress"); }
	void Construct(const SShooterGameLoadingScreen::FArguments * InArgs) { NativeCall<void, const SShooterGameLoadingScreen::FArguments *>(this, "SShooterGameLoadingScreen.Construct", InArgs); }
	FText * GetLoadAsset(FText * result) { return NativeCall<FText *, FText *>(this, "SShooterGameLoadingScreen.GetLoadAsset", result); }
	TOptional<float> * GetProgress(TOptional<float> * result) { return NativeCall<TOptional<float> *, TOptional<float> *>(this, "SShooterGameLoadingScreen.GetProgress", result); }
};

