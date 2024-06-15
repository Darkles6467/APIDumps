#pragma once

#include "BaseDeclarations.h"
struct FNavigationLinkBase
{
	char __padding[0x20L];
	float& MaxFallDownLengthField() { return *GetNativePointerField<float*>(this, "FNavigationLinkBase.MaxFallDownLength"); }
	TEnumAsByte<enum ENavLinkDirection::Type>& DirectionField() { return *GetNativePointerField<TEnumAsByte<enum ENavLinkDirection::Type>*>(this, "FNavigationLinkBase.Direction"); }
	int& UserIdField() { return *GetNativePointerField<int*>(this, "FNavigationLinkBase.UserId"); }
	float& SnapRadiusField() { return *GetNativePointerField<float*>(this, "FNavigationLinkBase.SnapRadius"); }

	// Functions

};

