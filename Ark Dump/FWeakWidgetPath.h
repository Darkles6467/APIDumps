#pragma once

#include "BaseDeclarations.h"
struct FWeakWidgetPath
{
	char __padding[0x20L];
	TWeakPtr<SWindow,0>& WindowField() { return *GetNativePointerField<TWeakPtr<SWindow,0>*>(this, "FWeakWidgetPath.Window"); }

	// Functions

	FWidgetPath * ToNextFocusedPath(FWidgetPath * result, EFocusMoveDirection::Type MoveDirection) { return NativeCall<FWidgetPath *, FWidgetPath *, EFocusMoveDirection::Type>(this, "FWeakWidgetPath.ToNextFocusedPath", result, MoveDirection); }
	FWidgetPath * ToWidgetPath(FWidgetPath * result, FWeakWidgetPath::EInterruptedPathHandling::Type InterruptedPathHandling) { return NativeCall<FWidgetPath *, FWidgetPath *, FWeakWidgetPath::EInterruptedPathHandling::Type>(this, "FWeakWidgetPath.ToWidgetPath", result, InterruptedPathHandling); }
	FWeakWidgetPath::EPathResolutionResult::Result ToWidgetPath(FWidgetPath * WidgetPath, FWeakWidgetPath::EInterruptedPathHandling::Type InterruptedPathHandling) { return NativeCall<FWeakWidgetPath::EPathResolutionResult::Result, FWidgetPath *, FWeakWidgetPath::EInterruptedPathHandling::Type>(this, "FWeakWidgetPath.ToWidgetPath", WidgetPath, InterruptedPathHandling); }
	FWeakWidgetPath * operator=(const FWeakWidgetPath * __that) { return NativeCall<FWeakWidgetPath *, const FWeakWidgetPath *>(this, "FWeakWidgetPath.operator=", __that); }
};

