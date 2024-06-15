#pragma once

#include "BaseDeclarations.h"
struct FPopupTransitionEffect
{
	enum ESlideDirection
	{
		None = 0x0,
		ComboButton = 0x1,
		TopMenu = 0x2,
		SubMenu = 0x3,
		TypeInPopup = 0x4,
		ContextMenu = 0x5,
	};

	char __padding[0x4L];
	FPopupTransitionEffect::ESlideDirection& SlideDirectionField() { return *GetNativePointerField<FPopupTransitionEffect::ESlideDirection*>(this, "FPopupTransitionEffect.SlideDirection"); }
};

