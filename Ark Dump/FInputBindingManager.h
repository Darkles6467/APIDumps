#pragma once

#include "BaseDeclarations.h"
#include "FUICommandInfo.h"

struct FInputBindingManager
{
	char __padding[0xd8L];
	TSharedPtr<FUserDefinedGestures,0>& UserDefinedGesturesField() { return *GetNativePointerField<TSharedPtr<FUserDefinedGestures,0>*>(this, "FInputBindingManager.UserDefinedGestures"); }

	// Functions

	void FContextEntry(const FInputBindingManager::FContextEntry * __that) { NativeCall<void, const FInputBindingManager::FContextEntry *>(this, "FInputBindingManager.FContextEntry", __that); }
	void FContextEntry() { NativeCall<void>(this, "FInputBindingManager.FContextEntry"); }
	const TSharedPtr<FUICommandInfo,0> * FindCommandInContext(const TSharedPtr<FUICommandInfo,0> * result, const FName InBindingContext, const FName CommandName) { return NativeCall<const TSharedPtr<FUICommandInfo,0> *, const TSharedPtr<FUICommandInfo,0> *, const FName, const FName>(this, "FInputBindingManager.FindCommandInContext", result, InBindingContext, CommandName); }
	const TSharedPtr<FUICommandInfo,0> * FindCommandInContext(const TSharedPtr<FUICommandInfo,0> * result, const FName InBindingContext, const FInputGesture * InGesture, bool bCheckDefault) { return NativeCall<const TSharedPtr<FUICommandInfo,0> *, const TSharedPtr<FUICommandInfo,0> *, const FName, const FInputGesture *, bool>(this, "FInputBindingManager.FindCommandInContext", result, InBindingContext, InGesture, bCheckDefault); }
	void NotifyActiveGestureChanged(const FUICommandInfo * CommandInfo) { NativeCall<void, const FUICommandInfo *>(this, "FInputBindingManager.NotifyActiveGestureChanged", CommandInfo); }
};

