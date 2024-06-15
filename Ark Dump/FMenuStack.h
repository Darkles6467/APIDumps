#pragma once

#include "BaseDeclarations.h"
#include "SWindow.h"
#include "SWidget.h"

struct FMenuStack
{
	char __padding[0x18L];
	TArray<TArray<TSharedPtr<SWindow,0>,TInlineAllocator<4> >>& StackField() { return *GetNativePointerField<TArray<TArray<TSharedPtr<SWindow,0>,TInlineAllocator<4> >>*>(this, "FMenuStack.Stack"); }
	FThrottleRequest& ThrottleHandleField() { return *GetNativePointerField<FThrottleRequest*>(this, "FMenuStack.ThrottleHandle"); }

	// Functions

	void Dismiss(int LastStackIndex) { NativeCall<void, int>(this, "FMenuStack.Dismiss", LastStackIndex); }
	int FindLocationInStack(TSharedPtr<SWindow,0> WindowToFind) { return NativeCall<int, TSharedPtr<SWindow,0>>(this, "FMenuStack.FindLocationInStack", WindowToFind); }
	TSharedRef<SWindow,0> * PushMenu(TSharedRef<SWindow,0> * result, const TSharedRef<SWindow,0> * ParentWindow, const TSharedRef<SWidget,0> * InContent, const FVector2D * SummonLocation, const FPopupTransitionEffect * TransitionEffect, const bool bFocusImmediately, const bool bShouldAutoSize, const FVector2D * WindowSize, const FVector2D * SummonLocationSize) { return NativeCall<TSharedRef<SWindow,0> *, TSharedRef<SWindow,0> *, const TSharedRef<SWindow,0> *, const TSharedRef<SWidget,0> *, const FVector2D *, const FPopupTransitionEffect *, const bool, const bool, const FVector2D *, const FVector2D *>(this, "FMenuStack.PushMenu", result, ParentWindow, InContent, SummonLocation, TransitionEffect, bFocusImmediately, bShouldAutoSize, WindowSize, SummonLocationSize); }
	void RemoveWindow(TSharedRef<SWindow,0> WindowToRemove) { NativeCall<void, TSharedRef<SWindow,0>>(this, "FMenuStack.RemoveWindow", WindowToRemove); }
};

