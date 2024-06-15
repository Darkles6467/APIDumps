#pragma once

#include "BaseDeclarations.h"
struct PlayerController_eventServerUpdateLevelVisibility_Parms
{
	char __padding[0xcL];
	FName& PackageNameField() { return *GetNativePointerField<FName*>(this, "PlayerController_eventServerUpdateLevelVisibility_Parms.PackageName"); }
	bool& bIsVisibleField() { return *GetNativePointerField<bool*>(this, "PlayerController_eventServerUpdateLevelVisibility_Parms.bIsVisible"); }
};

