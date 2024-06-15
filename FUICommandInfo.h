#pragma once

#include "BaseDeclarations.h"
struct FUICommandInfo
{
	char __padding[0xb8L];
	TSharedRef<FInputGesture,0>& ActiveGestureField() { return *GetNativePointerField<TSharedRef<FInputGesture,0>*>(this, "FUICommandInfo.ActiveGesture"); }
	FText& LabelField() { return *GetNativePointerField<FText*>(this, "FUICommandInfo.Label"); }
	FText& DescriptionField() { return *GetNativePointerField<FText*>(this, "FUICommandInfo.Description"); }
	FInputGesture& DefaultGestureField() { return *GetNativePointerField<FInputGesture*>(this, "FUICommandInfo.DefaultGesture"); }
	FSlateIcon& IconField() { return *GetNativePointerField<FSlateIcon*>(this, "FUICommandInfo.Icon"); }
	FName& UIStyleField() { return *GetNativePointerField<FName*>(this, "FUICommandInfo.UIStyle"); }
	FName& CommandNameField() { return *GetNativePointerField<FName*>(this, "FUICommandInfo.CommandName"); }
	FName& BindingContextField() { return *GetNativePointerField<FName*>(this, "FUICommandInfo.BindingContext"); }
	EUserInterfaceActionType::Type& UserInterfaceTypeField() { return *GetNativePointerField<EUserInterfaceActionType::Type*>(this, "FUICommandInfo.UserInterfaceType"); }

	// Functions

	const FText * GetInputText(const FText * result) { return NativeCall<const FText *, const FText *>(this, "FUICommandInfo.GetInputText", result); }
};

