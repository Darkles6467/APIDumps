#pragma once

#include "BaseDeclarations.h"
#include "FSlateStyleSet.h"
#include "ISlateStyle.h"

struct FSlateCoreStyle : FSlateStyleSet
{
	char __padding[0x60L];
	const TSharedRef<FLinearColor,0>& DefaultForeground_LinearRefField() { return *GetNativePointerField<const TSharedRef<FLinearColor,0>*>(this, "FSlateCoreStyle.DefaultForeground_LinearRef"); }
	const TSharedRef<FLinearColor,0>& InvertedForeground_LinearRefField() { return *GetNativePointerField<const TSharedRef<FLinearColor,0>*>(this, "FSlateCoreStyle.InvertedForeground_LinearRef"); }
	const TSharedRef<FLinearColor,0>& SelectorColor_LinearRefField() { return *GetNativePointerField<const TSharedRef<FLinearColor,0>*>(this, "FSlateCoreStyle.SelectorColor_LinearRef"); }
	const TSharedRef<FLinearColor,0>& SelectionColor_LinearRefField() { return *GetNativePointerField<const TSharedRef<FLinearColor,0>*>(this, "FSlateCoreStyle.SelectionColor_LinearRef"); }
	const TSharedRef<FLinearColor,0>& SelectionColor_Inactive_LinearRefField() { return *GetNativePointerField<const TSharedRef<FLinearColor,0>*>(this, "FSlateCoreStyle.SelectionColor_Inactive_LinearRef"); }
	const TSharedRef<FLinearColor,0>& SelectionColor_Pressed_LinearRefField() { return *GetNativePointerField<const TSharedRef<FLinearColor,0>*>(this, "FSlateCoreStyle.SelectionColor_Pressed_LinearRef"); }

	// Functions

};

