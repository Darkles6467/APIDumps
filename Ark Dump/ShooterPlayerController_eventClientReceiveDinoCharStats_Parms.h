#pragma once

#include "BaseDeclarations.h"
struct ShooterPlayerController_eventClientReceiveDinoCharStats_Parms
{
	char __padding[0x28L];
	APrimalDinoCharacter * theDinoCharField() { return GetNativePointerField<APrimalDinoCharacter *>(this, "ShooterPlayerController_eventClientReceiveDinoCharStats_Parms.theDinoChar"); }
	TArray<float>& CurValuesField() { return *GetNativePointerField<TArray<float>*>(this, "ShooterPlayerController_eventClientReceiveDinoCharStats_Parms.CurValues"); }
	TArray<float>& MaxValuesField() { return *GetNativePointerField<TArray<float>*>(this, "ShooterPlayerController_eventClientReceiveDinoCharStats_Parms.MaxValues"); }

	// Functions

};

