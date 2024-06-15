#pragma once

#include "BaseDeclarations.h"
#include "FNonAbandonableTask.h"

struct FCreateTextureTask : FNonAbandonableTask
{
	char __padding[0x38L];
	FCreateTextureTask::FArguments& ArgsField() { return *GetNativePointerField<FCreateTextureTask::FArguments*>(this, "FCreateTextureTask.Args"); }

	// Functions

	void DoWork() { NativeCall<void>(this, "FCreateTextureTask.DoWork"); }
};

