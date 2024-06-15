#pragma once

#include "BaseDeclarations.h"
struct ShooterPlayerController_eventServerNotifyEditText_Parms
{
	char __padding[0x30L];
	FString& TextToUseField() { return *GetNativePointerField<FString*>(this, "ShooterPlayerController_eventServerNotifyEditText_Parms.TextToUse"); }
	bool& checkedBoxField() { return *GetNativePointerField<bool*>(this, "ShooterPlayerController_eventServerNotifyEditText_Parms.checkedBox"); }
	unsigned int& ExtraID1Field() { return *GetNativePointerField<unsigned int*>(this, "ShooterPlayerController_eventServerNotifyEditText_Parms.ExtraID1"); }
	unsigned int& ExtraID2Field() { return *GetNativePointerField<unsigned int*>(this, "ShooterPlayerController_eventServerNotifyEditText_Parms.ExtraID2"); }

	// Functions

};

