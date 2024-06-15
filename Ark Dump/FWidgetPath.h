#pragma once

#include "BaseDeclarations.h"
#include "SWindow.h"

struct FWidgetPath
{
	char __padding[0x28L];
	FArrangedChildren& WidgetsField() { return *GetNativePointerField<FArrangedChildren*>(this, "FWidgetPath.Widgets"); }
	TSharedPtr<SWindow,0>& TopLevelWindowField() { return *GetNativePointerField<TSharedPtr<SWindow,0>*>(this, "FWidgetPath.TopLevelWindow"); }

	// Functions

	FArrangedWidget * FindArrangedWidget(FArrangedWidget * result, TSharedRef<SWidget const ,0> WidgetToFind) { return NativeCall<FArrangedWidget *, FArrangedWidget *, TSharedRef<SWidget const ,0>>(this, "FWidgetPath.FindArrangedWidget", result, WidgetToFind); }
	bool MoveFocus(int PathLevel, EFocusMoveDirection::Type MoveDirection) { return NativeCall<bool, int, EFocusMoveDirection::Type>(this, "FWidgetPath.MoveFocus", PathLevel, MoveDirection); }
	bool ContainsWidget(TSharedRef<SWidget const ,0> WidgetToFind) { return NativeCall<bool, TSharedRef<SWidget const ,0>>(this, "FWidgetPath.ContainsWidget", WidgetToFind); }
	FWidgetPath * GetPathDownTo(FWidgetPath * result, TSharedRef<SWidget const ,0> MarkerWidget) { return NativeCall<FWidgetPath *, FWidgetPath *, TSharedRef<SWidget const ,0>>(this, "FWidgetPath.GetPathDownTo", result, MarkerWidget); }
	TSharedRef<SWindow,0> * GetWindow(TSharedRef<SWindow,0> * result) { return NativeCall<TSharedRef<SWindow,0> *, TSharedRef<SWindow,0> *>(this, "FWidgetPath.GetWindow", result); }
};

