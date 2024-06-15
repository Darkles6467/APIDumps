#pragma once

#include "BaseDeclarations.h"
struct FNPCSpawnLimit
{
	char __padding[0x20L];
	TSubclassOf<APrimalDinoCharacter>& NPCClassField() { return *GetNativePointerField<TSubclassOf<APrimalDinoCharacter>*>(this, "FNPCSpawnLimit.NPCClass"); }
	FString& NPCClassStringField() { return *GetNativePointerField<FString*>(this, "FNPCSpawnLimit.NPCClassString"); }
	float& MaxPercentageOfDesiredNumToAllowField() { return *GetNativePointerField<float*>(this, "FNPCSpawnLimit.MaxPercentageOfDesiredNumToAllow"); }
	int& CurrentNumberOfNPCTouchingField() { return *GetNativePointerField<int*>(this, "FNPCSpawnLimit.CurrentNumberOfNPCTouching"); }

	// Functions

	FNPCSpawnLimit * operator=(const FNPCSpawnLimit * __that) { return NativeCall<FNPCSpawnLimit *, const FNPCSpawnLimit *>(this, "FNPCSpawnLimit.operator=", __that); }
};

