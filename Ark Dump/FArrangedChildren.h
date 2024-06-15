#pragma once

#include "BaseDeclarations.h"
#include "EVisibility.h"

struct FArrangedChildren
{
	char __padding[0x18L];
	EVisibility& VisibilityFilterField() { return *GetNativePointerField<EVisibility*>(this, "FArrangedChildren.VisibilityFilter"); }
	TArray<FArrangedWidget>& ArrayField() { return *GetNativePointerField<TArray<FArrangedWidget>*>(this, "FArrangedChildren.Array"); }

	// Functions

	FArrangedWidget * operator[](int Index) { return NativeCall<FArrangedWidget *, int>(this, "FArrangedChildren.operator[]", Index); }
	void AddWidget(const FArrangedWidget * InWidgetGeometry) { NativeCall<void, const FArrangedWidget *>(this, "FArrangedChildren.AddWidget", InWidgetGeometry); }
	void AddWidget(EVisibility VisibilityOverride, const FArrangedWidget * InWidgetGeometry) { NativeCall<void, EVisibility, const FArrangedWidget *>(this, "FArrangedChildren.AddWidget", VisibilityOverride, InWidgetGeometry); }
	void Append(const FArrangedChildren * Source) { NativeCall<void, const FArrangedChildren *>(this, "FArrangedChildren.Append", Source); }
	void Reverse() { NativeCall<void>(this, "FArrangedChildren.Reverse"); }
};

