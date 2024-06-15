#pragma once

#include "BaseDeclarations.h"
#include "UPrimalUI.h"
#include "UUserWidget.h"
#include "UWidget.h"
#include "UVisual.h"
#include "UObject.h"
#include "UObjectBaseUtility.h"
#include "UObjectBase.h"

struct UUI_Tutorial : UPrimalUI
{
	char __padding[0x30L];
	FName& TutorialTitleLabelNameField() { return *GetNativePointerField<FName*>(this, "UUI_Tutorial.TutorialTitleLabelName"); }
	FName& TutorialTextLabelNameField() { return *GetNativePointerField<FName*>(this, "UUI_Tutorial.TutorialTextLabelName"); }
	FName& TutorialImageNameField() { return *GetNativePointerField<FName*>(this, "UUI_Tutorial.TutorialImageName"); }
	UPrimalRichTextBlock * TutorialTitleLabelField() { return GetNativePointerField<UPrimalRichTextBlock *>(this, "UUI_Tutorial.TutorialTitleLabel"); }
	UPrimalRichTextBlock * TutorialTextLabelField() { return GetNativePointerField<UPrimalRichTextBlock *>(this, "UUI_Tutorial.TutorialTextLabel"); }
	UImage * TutorialImageField() { return GetNativePointerField<UImage *>(this, "UUI_Tutorial.TutorialImage"); }

	// Functions

	void AddToViewport() { NativeCall<void>(this, "UUI_Tutorial.AddToViewport"); }
	void SetTutorialTexts(const FString * Title, const FString * Text, UTexture2D * ImageTexture) { NativeCall<void, const FString *, const FString *, UTexture2D *>(this, "UUI_Tutorial.SetTutorialTexts", Title, Text, ImageTexture); }
};

