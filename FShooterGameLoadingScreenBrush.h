#pragma once

#include "BaseDeclarations.h"
#include "FSlateBrush.h"

struct FSlateDynamicImageBrush : FSlateBrush
{
	char __padding[0x8L];

	// Functions

};

struct FShooterGameLoadingScreenBrush : FSlateDynamicImageBrush
{
	char __padding[0x8L];
};

