#pragma once

#include "BaseDeclarations.h"
struct FStasisCell
{
	char __padding[0x58L];
	int& RelevancyCounterField() { return *GetNativePointerField<int*>(this, "FStasisCell.RelevancyCounter"); }
	bool& IsStasisingField() { return *GetNativePointerField<bool*>(this, "FStasisCell.IsStasising"); }

	// Functions

	void ActorDestroyed(AActor * theActor) { NativeCall<void, AActor *>(this, "FStasisCell.ActorDestroyed", theActor); }
	void ActorUnstasised(AActor * theActor) { NativeCall<void, AActor *>(this, "FStasisCell.ActorUnstasised", theActor); }
	void IncrementRelevancy(int IncrementValue) { NativeCall<void, int>(this, "FStasisCell.IncrementRelevancy", IncrementValue); }
};

