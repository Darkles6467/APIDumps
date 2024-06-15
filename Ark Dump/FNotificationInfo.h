#pragma once

#include "BaseDeclarations.h"
struct FNotificationInfo
{
	char __padding[0xf8L];
	FText& TextField() { return *GetNativePointerField<FText*>(this, "FNotificationInfo.Text"); }
	TArray<FNotificationButtonInfo>& ButtonDetailsField() { return *GetNativePointerField<TArray<FNotificationButtonInfo>*>(this, "FNotificationInfo.ButtonDetails"); }
	float& FadeInDurationField() { return *GetNativePointerField<float*>(this, "FNotificationInfo.FadeInDuration"); }
	float& FadeOutDurationField() { return *GetNativePointerField<float*>(this, "FNotificationInfo.FadeOutDuration"); }
	float& ExpireDurationField() { return *GetNativePointerField<float*>(this, "FNotificationInfo.ExpireDuration"); }
	bool& bUseThrobberField() { return *GetNativePointerField<bool*>(this, "FNotificationInfo.bUseThrobber"); }
	bool& bUseSuccessFailIconsField() { return *GetNativePointerField<bool*>(this, "FNotificationInfo.bUseSuccessFailIcons"); }
	bool& bUseLargeFontField() { return *GetNativePointerField<bool*>(this, "FNotificationInfo.bUseLargeFont"); }
	FOptionalSize& WidthOverrideField() { return *GetNativePointerField<FOptionalSize*>(this, "FNotificationInfo.WidthOverride"); }
	bool& bFireAndForgetField() { return *GetNativePointerField<bool*>(this, "FNotificationInfo.bFireAndForget"); }
	TAttribute<enum ESlateCheckBoxState::Type>& CheckBoxStateField() { return *GetNativePointerField<TAttribute<enum ESlateCheckBoxState::Type>*>(this, "FNotificationInfo.CheckBoxState"); }
	TAttribute<FText>& CheckBoxTextField() { return *GetNativePointerField<TAttribute<FText>*>(this, "FNotificationInfo.CheckBoxText"); }
	TAttribute<FText>& HyperlinkTextField() { return *GetNativePointerField<TAttribute<FText>*>(this, "FNotificationInfo.HyperlinkText"); }
	bool& bAllowThrottleWhenFrameRateIsLowField() { return *GetNativePointerField<bool*>(this, "FNotificationInfo.bAllowThrottleWhenFrameRateIsLow"); }

	// Functions

};

