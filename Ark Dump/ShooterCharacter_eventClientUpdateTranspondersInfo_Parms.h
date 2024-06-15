#pragma once

#include "BaseDeclarations.h"
struct ShooterCharacter_eventClientUpdateTranspondersInfo_Parms
{
	char __padding[0x18L];
	TArray<FTransponderInfo>& TranspondersInfoField() { return *GetNativePointerField<TArray<FTransponderInfo>*>(this, "ShooterCharacter_eventClientUpdateTranspondersInfo_Parms.TranspondersInfo"); }
	bool& bNewDataField() { return *GetNativePointerField<bool*>(this, "ShooterCharacter_eventClientUpdateTranspondersInfo_Parms.bNewData"); }
};

