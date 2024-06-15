#pragma once

#include "BaseDeclarations.h"
#include "SCompoundWidget.h"
#include "SWidget.h"
#include "FSlateControlledConstruction.h"

struct SShooterLoadingScreen : SCompoundWidget
{
	char __padding[0x10L];

	// Functions

	void FArguments() { NativeCall<void>(this, "SShooterLoadingScreen.FArguments"); }
	void FArguments() { NativeCall<void>(this, "SShooterLoadingScreen.FArguments"); }
	float BaseGetProgress() { return NativeCall<float>(this, "SShooterLoadingScreen.BaseGetProgress"); }
	void Construct(const SShooterLoadingScreen::FArguments * InArgs) { NativeCall<void, const SShooterLoadingScreen::FArguments *>(this, "SShooterLoadingScreen.Construct", InArgs); }
	FText * GetLoadAsset(FText * result) { return NativeCall<FText *, FText *>(this, "SShooterLoadingScreen.GetLoadAsset", result); }
	FText * GetModDownloadStatus(FText * result) { return NativeCall<FText *, FText *>(this, "SShooterLoadingScreen.GetModDownloadStatus", result); }
	TOptional<float> * GetProgress(TOptional<float> * result) { return NativeCall<TOptional<float> *, TOptional<float> *>(this, "SShooterLoadingScreen.GetProgress", result); }
};

