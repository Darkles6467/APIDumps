#pragma once

#include "BaseDeclarations.h"
struct EVisibility
{
	enum Private
	{
		VISPRIVATE_Visible = 0x1,
		VISPRIVATE_Collapsed = 0x2,
		VISPRIVATE_Hidden = 0x4,
		VISPRIVATE_SelfHitTestVisible = 0x8,
		VISPRIVATE_ChildrenHitTestVisible = 0x10,
		VIS_Visible = 0x19,
		VIS_Collapsed = 0x2,
		VIS_Hidden = 0x4,
	};

	char __padding[0x4L];
	EVisibility::Private& ValueField() { return *GetNativePointerField<EVisibility::Private*>(this, "EVisibility.Value"); }

	// Functions

	FString * ToString(FString * result) { return NativeCall<FString *, FString *>(this, "EVisibility.ToString", result); }
};

