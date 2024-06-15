#pragma once

#include "BaseDeclarations.h"
struct PrimalCharacter_eventDidTeleport_Parms
{
	char __padding[0x2cL];
	FVector& newLocField() { return *GetNativePointerField<FVector*>(this, "PrimalCharacter_eventDidTeleport_Parms.newLoc"); }
	FRotator& newRotField() { return *GetNativePointerField<FRotator*>(this, "PrimalCharacter_eventDidTeleport_Parms.newRot"); }
	bool& bDoCameraFadeField() { return *GetNativePointerField<bool*>(this, "PrimalCharacter_eventDidTeleport_Parms.bDoCameraFade"); }
	FLinearColor& CameraFadeColorField() { return *GetNativePointerField<FLinearColor*>(this, "PrimalCharacter_eventDidTeleport_Parms.CameraFadeColor"); }
};

