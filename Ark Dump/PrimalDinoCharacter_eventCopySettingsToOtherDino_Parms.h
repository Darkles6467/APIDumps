#pragma once

#include "BaseDeclarations.h"
struct PrimalDinoCharacter_eventCopySettingsToOtherDino_Parms
{
	char __padding[0x20L];
	APrimalDinoCharacter * FromDinoField() { return GetNativePointerField<APrimalDinoCharacter *>(this, "PrimalDinoCharacter_eventCopySettingsToOtherDino_Parms.FromDino"); }
	APrimalDinoCharacter * OtherDinoField() { return GetNativePointerField<APrimalDinoCharacter *>(this, "PrimalDinoCharacter_eventCopySettingsToOtherDino_Parms.OtherDino"); }
	int& SettingTypeUseIndexField() { return *GetNativePointerField<int*>(this, "PrimalDinoCharacter_eventCopySettingsToOtherDino_Parms.SettingTypeUseIndex"); }
};

