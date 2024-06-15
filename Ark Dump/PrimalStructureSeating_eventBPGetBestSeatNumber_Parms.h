#pragma once

#include "BaseDeclarations.h"
struct PrimalStructureSeating_eventBPGetBestSeatNumber_Parms
{
	char __padding[0x10L];
	AShooterPlayerController * ForPCField() { return GetNativePointerField<AShooterPlayerController *>(this, "PrimalStructureSeating_eventBPGetBestSeatNumber_Parms.ForPC"); }
	int& InBestSeatNumberField() { return *GetNativePointerField<int*>(this, "PrimalStructureSeating_eventBPGetBestSeatNumber_Parms.InBestSeatNumber"); }
	int& ReturnValueField() { return *GetNativePointerField<int*>(this, "PrimalStructureSeating_eventBPGetBestSeatNumber_Parms.ReturnValue"); }
};

