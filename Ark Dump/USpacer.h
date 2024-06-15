#pragma once

#include "BaseDeclarations.h"
#include "UWidget.h"
#include "UVisual.h"
#include "UObject.h"
#include "UObjectBaseUtility.h"
#include "UObjectBase.h"

struct USpacer : UWidget
{
	char __padding[0x18L];
	FVector2D& SizeField() { return *GetNativePointerField<FVector2D*>(this, "USpacer.Size"); }
	TSharedPtr<SSpacer,0>& MySpacerField() { return *GetNativePointerField<TSharedPtr<SSpacer,0>*>(this, "USpacer.MySpacer"); }

	// Functions

	void ReleaseSlateResources(bool bReleaseChildren) { NativeCall<void, bool>(this, "USpacer.ReleaseSlateResources", bReleaseChildren); }
	void SetSize(FVector2D InSize) { NativeCall<void, FVector2D>(this, "USpacer.SetSize", InSize); }
	void SynchronizeProperties() { NativeCall<void>(this, "USpacer.SynchronizeProperties"); }
};

